`timescale 1ns/1ns

// Instruction Decode
// register file read, sign-extension
module id_stage #(parameter WIDTH) (
                input clk,
                input rst,
                input [WIDTH-1:0] if_out,
                input [WIDTH-1:0] pc_incr_in,
                
                input [5-1:0] wr_reg,
                input [WIDTH-1:0] wr_data,
                input RegWrite,

                output [3:0] ex_ctrl,
                output [3:0] mem_ctrl,
                output [1:0] wb_ctrl,
                output wire [WIDTH-1:0] pc_incr_out,
                output reg [WIDTH-1:0] sgn_extend_out, // contains function code in lower 7 bits. passed to ALU
                output reg [WIDTH-1:0] rd_data_one, rd_data_two,
                output wire [5-1:0] rd_out, rt_out,
                output reg [WIDTH-1:0] register_file [0:32-1],
                output logic stallIF
                );

// instantiate hazard detection unit



// instruction [15:0] extended based on select bit
    logic signExtSel; //regular sign extension on FALSE, or default 16'd0 sign extension if TRUE
    always_comb sgn_extend_out = signExtSel ? {{16{if_out[15]}}, if_out[15:0]} : {{16{1'b0}}, if_out[15:0]};

// truncations to pass-through
    assign rd_out[4:0] = if_out[15:11]; // instruction [20:16] shifted into EX stage
    assign rt_out[4:0] = if_out[20:16]; // instruction [15:11] shifted into EX stage
    assign pc_incr_out = pc_incr_in; // incremented pc forwarded to next stage
    assign rd_data_one = register_file[if_out[25:21]]; // regRs
    assign rd_data_two = register_file[if_out[20:16]]; // regRt

// register file reset and write logic
    integer i;
    always_ff @(negedge clk or posedge rst) begin // write on negedge clock (halfway through clk cycle)
        if(rst) begin
            for(i = 0; i < 32; i++) begin
                register_file[i] <= i;
            end
        end
        // register write-back on the falling edge of the clock
        else if(RegWrite) begin
            register_file[wr_reg] <= wr_data;
        end
    end

// add j-type instruction logic here (j, jal)
    // for both instructions: flush IF stage (control signal to disable pipeline register)
    // for jal: writeback to R[31] PC + 8


/* "ex_ctrl" is 3 bits:
    [0] - ALUSrc
    [1] - ALUOp0
    [2] - ALUOp1
    [3] - RegDst
*/

/* "mem_ctrl" is 4 bits:
    [0] - MemRead
    [1] - MemWrite
    [2] - Branch
    [3] - bneSel
*/

/* "wb_ctrl" is 2 bits:
    [0] - MemToReg
    [1] - RegWrite
*/
// control unit logic - combinational
    always_comb begin
        case(if_out[31:26])
            6'd0: begin // add, addu, and (r)
                ex_ctrl[3:0] = 4'b1100; // XXX0 - selects from register
                mem_ctrl[3:0] = 4'b0000;
                wb_ctrl[1:0] = 2'b10;
                signExtSel = 1;
                stallIF = 0;
            end
            6'd8: begin // addi (i) change ALU control signals to account for overflow flag
                ex_ctrl[3:0] = 4'b0001; // X001 - alu does addition and selects from immediate
                mem_ctrl[3:0] = 4'b0000;
                wb_ctrl[1:0] = 2'b10;
                signExtSel = 1; // 
                stallIF = 0;
            end
            6'd9: begin // addiu (i) change ALU control signals for no overflow
                ex_ctrl[3:0] = 4'b0001; // X00X - alu does addition, ... immediate
                mem_ctrl[3:0] = 4'b0000;
                wb_ctrl[1:0] = 2'b10;
                signExtSel = 1;
                stallIF = 0;
            end
            6'hc: begin // andi (i)
                ex_ctrl[3:0] = 4'b0111; // X11X - hardcoded AND option, ... immediate
                mem_ctrl[3:0] = 4'b0000;
                wb_ctrl[1:0] = 2'b10;
                signExtSel = 0; // use zero extension 
                stallIF = 0;
            end
            6'h4: begin // branch on equal 
                ex_ctrl[3:0] = 4'bX010; // X is for no destination register, 01 is for sub
                mem_ctrl[3:0] = 4'b0100;
                wb_ctrl[1:0] = 2'b0X;
                signExtSel = 1;
                stallIF = 0;
            end
            6'h5: begin // branch on not equal
                ex_ctrl[3:0] = 4'bX010; // X100 - selects from register, 01 is for sub, X is for no destination register
                mem_ctrl[3:0] = 4'b1100; // MSB is set for branch flag calculation in MEM
                wb_ctrl[1:0] = 2'b10;
                signExtSel = 1; // use standard extension
                stallIF = 0;
            end
            6'h2: begin // jump instruction
                ex_ctrl[3:0] = 4'b0000; // edit these
                mem_ctrl[3:0] = 4'b0000;
                wb_ctrl[1:0] = 2'b00;
                signExtSel = 1;
                stallIF = 1;
            end
            6'h3: begin // jump and link
                ex_ctrl[3:0] = 4'b0000; // edit these
                mem_ctrl[3:0] = 4'b0000;
                wb_ctrl[1:0] = 2'b00;
                signExtSel = 1;
                stallIF = 1;
            end

            6'd35: begin // load word
                ex_ctrl[3:0] = 4'b0001;
                mem_ctrl[3:0] = 4'b0010;
                wb_ctrl[1:0] = 2'b11;
                signExtSel = 1;
                stallIF = 0;
            end
            6'd43: begin // store word
                ex_ctrl[3:0] = 4'bX001;
                mem_ctrl[3:0] = 4'b0001;
                wb_ctrl[1:0] = 2'b0X;
                signExtSel = 1;
                stallIF = 0;
            end
            default: begin
                ex_ctrl[3:0] = 4'b0000;
                mem_ctrl[3:0] = 4'b0000;
                wb_ctrl[1:0] = 2'b00;
                signExtSel = 1;
                stallIF = 0;
            end
        endcase
    end


endmodule: id_stage
