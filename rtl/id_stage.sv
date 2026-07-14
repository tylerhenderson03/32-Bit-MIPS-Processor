`timescale 1ns/1ns

// Instruction Decode
// register file read, sign-extension
module id_stage #(parameter WIDTH) (
                input logic clk,
                input logic rst,
                input [WIDTH-1:0] if_out,
                input [WIDTH-1:0] pc_incr_in,
                input [5-1:0] wr_reg,
                input [WIDTH-1:0] wr_data,
                input logic RegWrite,
            // inputs for hazard detection
                input logic id_ex_MemRead,
                input [4:0] id_ex_regRt,


                output [4:0] ex_ctrl,
                output [3:0] mem_ctrl,
                output [3:0] wb_ctrl,
                output wire [WIDTH-1:0] pc_incr_out,
                output reg [WIDTH-1:0] sgn_extend_out, // contains function code in lower 7 bits. passed to ALU
                output wire [WIDTH-1:0] jump_addr,
                output reg [WIDTH-1:0] rd_data_one, rd_data_two,
                output wire [5-1:0] rd_out, rt_out, rs_out,
                output reg [WIDTH-1:0] register_file [0:32-1],
                output logic stallIF, PCJmp,
                output wire [4:0] shamt_out,

            // outputs from hazard detection
                output wire PCWrite, if_id_write
                );
    wire flushCtrlSignals;

// instantiate hazard detection unit
    hazard_detection hzd_00 (
        .id_ex_MemRead(id_ex_MemRead), .id_ex_regRt(id_ex_regRt), .if_id_regRs(if_out[25:21]), .if_id_regRt(if_out[20:16]), .PCWrite(PCWrite), .if_id_write(if_id_write), .flushCtrlSignals(flushCtrlSignals)
    );

    logic linkReg;  /* (internal signal) 0 for regRd from instruction + data, 
                    1 for regRd = 31 && rd_data_one = PC_incr && rd_data_two = 4 
                        (pair with ex_ctrl[0] = 0 AND ex_ctrl[3] = 1)
                            -> exclusively for load linked (ll) instruction
                    */

// instruction [15:0] extended based on select bit
    logic signExtSel; //regular sign extension on FALSE, or default 16'd0 sign extension if TRUE
    always_comb sgn_extend_out = signExtSel ? {{16{if_out[15]}}, if_out[15:0]} : {{16{1'b0}}, if_out[15:0]};

// register file reset and write logic
    integer i;
    always_ff @(negedge clk or posedge rst) begin // write on negedge clock (halfway through clk cycle)
        if(rst) begin
            for(i = 0; i < 2; i++) begin
                register_file[i] <= '0;
            end
            register_file[2] <= 32'd10;
            register_file[3] <= 32'd10;
            for(i = 4; i < 32; i++) begin
                register_file[i] <= '0;
            end
        end
        // register write-back on the falling edge of the clock
        else if(RegWrite) begin
            register_file[wr_reg] <= wr_data;
        end
    end

// truncations to pass-through
    assign rd_out[4:0] = linkReg ? 5'd31 : if_out[15:11]; // instruction [15:11] shifted into EX stage
    assign rt_out[4:0] = if_out[20:16]; // instruction [20:16] shifted into EX stage
    assign rs_out[4:0] = if_out[25:21];
    assign pc_incr_out = pc_incr_in; // incremented pc forwarded to next stage
    assign rd_data_one = linkReg ? pc_incr_in : register_file[if_out[25:21]]; // regRs
    assign rd_data_two = linkReg ? 32'd4 : register_file[if_out[20:16]]; // regRt
    assign shamt_out = if_out[10:6];
    assign jump_addr = (if_out[5:0] == 6'h8) ? rd_data_one : {{6{1'b0}}, if_out[25:0]}; // jump register target reg : j-type instruction contains address in lower 26 bits

/* "ex_ctrl" is 3 bits:
    [0] - ALUSrc // 0 for rd_data_two as in_b to ALU, 1 for signExtImm as in_b
    [1] - ALUOp0 // ALU Opcode
    [2] - ALUOp1
    [3] - RegDst // 0 for regRt, 1 for regRd (as the destination for register-writeback)
    [4] - ALUOp2 // added third bit for OR operation on non-rType instructions
*/

/* "mem_ctrl" is 4 bits:
    [0] - MemRead // data memory read enable
    [1] - MemWrite // data memory write enable
    [2] - Branch // 1 for for BEQ/BNE C.L. in mem stage, 0 for o.w.
    [3] - bneSel // 1 for BNE case in Branch instruction C.L., 0 for o.w.
*/

/* "wb_ctrl" is 2 bits:
    [0] - MemToReg // 0 to write-back ALU result, 1 to write back data memory result (needs mem read enable)
    [1] - RegWrite // register write enable signal used during W.B. (almost always except for store)
    [2] - LoadSel0 // Load Instruction Select bits (for truncating outputs)
    [3] - LoadSel1
        00 lw and etc.
        01 load byte
        10 load half word
        11 load upper
*/
// control unit logic - combinational
    always_comb begin
        if(rst || flushCtrlSignals) begin
                ex_ctrl[4:0] = 5'd0; 
                mem_ctrl[3:0] = 4'd0;
                wb_ctrl[3:0] = 4'd0;
                signExtSel = 0;
                stallIF = 0;
                PCJmp = 0;
                linkReg = 0;
        end
        else begin
            case(if_out[31:26])
                6'd0: begin // add, addu, and, jr, nor, or, slt, sltu, sll, srl, sub, subu, mult, multu, div, divu (r)
                    ex_ctrl[4:0] = 5'b01100; // XXX0 - selects rd_data_two from register
                    mem_ctrl[3:0] = 4'b0000;
                    wb_ctrl[3:0] = 4'b0010;
                    signExtSel = 1;
                    stallIF = 0;
                    PCJmp = 0;
                    linkReg = 0;
                end
                6'd8: begin // addi (i) change ALU control signals to account for overflow flag
                    ex_ctrl[4:0] = 5'b00001; // X001 - alu does addition and selects from immediate
                    mem_ctrl[3:0] = 4'b0000;
                    wb_ctrl[3:0] = 4'b0010;
                    signExtSel = 1; // 
                    stallIF = 0;
                    PCJmp = 0;
                    linkReg = 0;
                end
                6'd9: begin // addiu (i) change ALU control signals for no overflow
                    ex_ctrl[4:0] = 5'b00001; // X00X - alu does addition, ... immediate
                    mem_ctrl[3:0] = 4'b0000;
                    wb_ctrl[3:0] = 4'b0010;
                    signExtSel = 1;
                    stallIF = 0;
                    PCJmp = 0;
                    linkReg = 0;
                end
                6'hc: begin // andi (i)
                    ex_ctrl[4:0] = 5'b00111; // X11X - hardcoded AND option, ... immediate
                    mem_ctrl[3:0] = 4'b0000;
                    wb_ctrl[3:0] = 4'b0010;
                    signExtSel = 0; // use zero extension 
                    stallIF = 0;
                    PCJmp = 0;
                    linkReg = 0;
                end
                6'h4: begin // branch on equal 
                    ex_ctrl[4:0] = 5'b0X010; // X is for no destination register, 01 is for sub
                    mem_ctrl[3:0] = 4'b0100;
                    wb_ctrl[3:0] = 4'b000X;
                    signExtSel = 1;
                    stallIF = 0;
                    PCJmp = 0;
                    linkReg = 0;
                end
                6'h5: begin // branch on not equal
                    ex_ctrl[4:0] = 5'b0X010; // X100 - selects from register, 01 is for sub, X is for no destination register
                    mem_ctrl[3:0] = 4'b1100; // MSB is set for branch flag calculation in MEM
                    wb_ctrl[3:0] = 4'b0000;
                    signExtSel = 1; // use standard extension
                    stallIF = 0;
                    PCJmp = 0;
                    linkReg = 0;
                end
                6'h2: begin // jump instruction - need to set new pc
                    ex_ctrl[4:0] = 5'b00000; // edit these
                    mem_ctrl[3:0] = 4'b0000;
                    wb_ctrl[3:0] = 4'b0000; 
                    signExtSel = 1; // regular sign-extension
                    stallIF = 1; // stalls pipeline IF/ID register (NOW REDUNDANT)
                    PCJmp = 1; // sets pc to jump address
                    linkReg = 0;
                end
                6'h3: begin // jump and link
                    ex_ctrl[4:0] = 5'b00000; // edit these
                    mem_ctrl[3:0] = 4'b0000;
                    wb_ctrl[3:0] = 4'b0010;
                    signExtSel = 1; // regular sign-extension
                    stallIF = 1;
                    PCJmp = 1;
                    // need to handle writing PC + 8 to R[31]. pass through typical WB path. no ALU needed
                    linkReg = 1; // controls muxes to writeback PC + 8, unique to "jal" instruction datapath
                end

                6'h24: begin // lbu (load byte unsigned)
                    ex_ctrl[4:0] = 5'b00001;
                    mem_ctrl[3:0] = 4'b0001;
                    wb_ctrl[3:0] = 4'b0111;
                    signExtSel = 1;
                    stallIF = 0;
                    PCJmp = 0;
                    linkReg = 0;
                end
                6'h25: begin // lhu (load half-word unsigned)
                    ex_ctrl[4:0] = 5'b00001;
                    mem_ctrl[3:0] = 4'b0001;
                    wb_ctrl[3:0] = 4'b1011;
                    signExtSel = 1;
                    stallIF = 0;
                    PCJmp = 0;
                    linkReg = 0;
                end
                /* THIS INSTRUCTION IS THE SAME AS LOAD WORD, LEAVE COMMENTED UNTIL FURTHER DEVELOPMENT
                6'h30: begin // ll (load linked)
                    ex_ctrl[4:0] = 5'b00001;
                    mem_ctrl[3:0] = 4'b0001;
                    wb_ctrl[3:0] = 4'b0011;
                    signExtSel = 1;
                    stallIF = 0;
                    PCJmp = 0;
                    linkReg = 0;
                end
                */
                6'hf: begin // lui (load upper immediate)
                    ex_ctrl[4:0] = 5'b00001;
                    mem_ctrl[3:0] = 4'b0001;
                    wb_ctrl[3:0] = 4'b1111;
                    signExtSel = 1;
                    stallIF = 0;
                    PCJmp = 0;
                    linkReg = 0;
                end

                6'h23: begin // lw (load word)
                    ex_ctrl[4:0] = 5'b00001;
                    mem_ctrl[3:0] = 4'b0010;
                    wb_ctrl[3:0] = 4'b1100;
                    signExtSel = 1;
                    stallIF = 0;
                    PCJmp = 0;
                    linkReg = 0;
                end

                6'hd: begin // ori (or - immediate)
                    ex_ctrl[4:0] = 5'b10001;
                    mem_ctrl[3:0] = 4'b0000;
                    wb_ctrl[3:0] = 4'b0010;
                    signExtSel = 0;
                    stallIF = 0;
                    PCJmp = 0;
                    linkReg = 0;
                end


                6'ha: begin // slti (set less than - immediate)
                    ex_ctrl[4:0] = 5'b11011;
                    mem_ctrl[3:0] = 4'b0000;
                    wb_ctrl[3:0] = 4'b0010;
                    signExtSel = 0;
                    stallIF = 0;
                    PCJmp = 0;
                    linkReg = 0;
                end
                6'hb: begin // sltiu (set less than unsigned - immediate)
                    ex_ctrl[4:0] = 5'b11101;
                    mem_ctrl[3:0] = 4'b0000;
                    wb_ctrl[3:0] = 4'b0010;
                    signExtSel = 0;
                    stallIF = 0;
                    PCJmp = 0;
                    linkReg = 0;
                end

                6'h28: begin // sb (store byte)
                    ex_ctrl[4:0] = 5'b00001;
                    mem_ctrl[3:0] = 4'b0010;
                    wb_ctrl[3:0] = 4'b0100;
                    signExtSel = 1;
                    stallIF = 0;
                    PCJmp = 0;
                    linkReg = 0;
                end
                6'h38: begin // sc (store conditional)
                    ex_ctrl[4:0] = 5'b00001;
                    mem_ctrl[3:0] = 4'b0010;
                    wb_ctrl[3:0] = 4'b0000;
                    signExtSel = 1;
                    stallIF = 0;
                    PCJmp = 0;
                    linkReg = 0;
                end
                6'h29: begin // sh (store half-word)
                    ex_ctrl[4:0] = 5'b00001;
                    mem_ctrl[3:0] = 4'b0010;
                    wb_ctrl[3:0] = 4'b1000;
                    signExtSel = 1;
                    stallIF = 0;
                    PCJmp = 0;
                    linkReg = 0;
                end
                6'h2b: begin // sw (store word)
                    ex_ctrl[4:0] = 5'b00001;
                    mem_ctrl[3:0] = 4'b0010;
                    wb_ctrl[3:0] = 4'b0000;
                    signExtSel = 1;
                    stallIF = 0;
                    PCJmp = 0;
                    linkReg = 0;
                end 
                default: begin
                    ex_ctrl[4:0] = 5'b00000;
                    mem_ctrl[3:0] = 4'b0000;
                    wb_ctrl[3:0] = 4'b0000;
                    signExtSel = 1;
                    stallIF = 0;
                    PCJmp = 0;
                    linkReg = 0;
                end
            endcase
        end
    end


endmodule: id_stage
