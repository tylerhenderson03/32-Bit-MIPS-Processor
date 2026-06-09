`timescale 1ns/1ns

// Instruction Decode
// register file read, sign-extension
module id_stage #(parameter WIDTH) (input rst,
                input [WIDTH-1:0] if_out,
                input [WIDTH-1:0] pc_incr_in,
                input [5-1:0] wr_reg,
                input [WIDTH-1:0] wr_data,
                input RegWrite,

                output [3:0] ex_ctrl,
                output [2:0] mem_ctrl,
                output [1:0] wb_ctrl,
                output wire [WIDTH-1:0] pc_incr_out,
                output wire [WIDTH-1:0] sgn_extend_out,
                output reg [WIDTH-1:0] rd_data_one, rd_data_two,
                output wire [5-1:0] rd_out, rt_out
                );
// 32 general purpose registers, each are 32(WIDTH)-bits wide
    reg [WIDTH-1:0] register_file [32-1:0]; 
    integer i;
    /*
    initial begin
        for(i = 0; i < 31; i++) begin
            register_file[i] = i;
        end
    end
    */

// instruction [15:0] extended to be 32 bits
    assign sgn_extend_out = {16'd0, if_out[15:0]};

// instruction [20:16] shifted into EX stage
    assign rd_out = if_out[15:11];

// instruction [15:11] shifted into EX stage
    assign rt_out = if_out[20:16];

// incremented pc forwarded to next stage
    assign pc_incr_out = pc_incr_in;

// flags for holding type of instruction based on opcode - if_out[31:26]
    //logic r_type, l_word, s_word, br;

    always_ff @(posedge RegWrite or posedge rst) begin
        if(rst) begin
            for(i = 0; i < 31; i++) begin
                register_file[i] <= i*2;
            end
        end
        else if(RegWrite) begin
            register_file[wr_reg] <= wr_data;
        end
    end
    assign rd_data_one = register_file[if_out[25:21]];
    assign rd_data_two = register_file[if_out[20:16]];
    /*
    always_comb begin
    // flags for instruction type
        assign r_type = (if_out[31:26] == 0);
        assign l_word = (if_out[31:26] == 35);
        assign s_word = (if_out[31:26] == 43);
        assign br = (if_out[31:26] == 4);
        
    end
    */

/* "ex_ctrl" is 3 bits:
    [0] - ALUSrc
    [1] - ALUOp0
    [2] - ALUOp1
    [3] - RegDst
*/

/* "mem_ctrl" is 3 bits:
    [0] - MemRead
    [1] - MemWrite
    [2] - Branch
*/

/* "wb_ctrl" is 2 bits
    [0] - MemToReg
    [1] - PCSrc/RegWrite
*/
// control unit logic - combinational
    always_comb begin
        case(if_out[31:26])
            0: begin // r-type instruction
                ex_ctrl[3:0] = 4'b1100;
                mem_ctrl[2:0] = 3'b000;
                wb_ctrl[1:0] = 2'b10;
            end
            35: begin // load word
                ex_ctrl[3:0] = 4'b0001;
                mem_ctrl[2:0] = 3'b010;
                wb_ctrl[1:0] = 2'b11;
            end
            43: begin // store word
                ex_ctrl[3:0] = 4'bX001;
                mem_ctrl[2:0] = 3'b001;
                wb_ctrl[1:0] = 2'b0X;
            end
            4: begin // branch
                ex_ctrl[3:0] = 4'bX010;
                mem_ctrl[2:0] = 3'b100;
                wb_ctrl[1:0] = 2'b0X;
            end
        endcase
    end


endmodule: id_stage
