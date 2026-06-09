// Instruction Decode
// register file read, sign-extension

module id_stage #(parameter WIDTH) (input clk, rst,
                input [WIDTH-1:0] if_out,
                input [WIDTH-1:0] pc_incr_in,
                input [WIDTH-1:0] wr_reg, wr_data,
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

// instruction [15:0] extended to be 32 bits
    assign sgn_extend_out = {16'b0, if_out[15:0]};

// instruction [20:16] shifted into EX stage
    assign rd_out = if_out[15:11];

// instruction [15:11] shifted into EX stage
    assign rt_out = if_out[20:16];

// flags for holding type of instruction based on opcode - if_out[31:26]
    logic r_type, l_word, s_word, br;

    always_comb begin
        if(RegWrite) begin
            register_file[wr_reg] = wr_data;
        end
        assign rd_data_one = register_file[if_out[25:21]];
        assign rd_data_two = register_file[if_out[20:16]];

    // flags for instruction type
        assign r_type = (if_out[31:26] == 0);
        assign l_word = (if_out[31:26] == 35);
        assign s_word = (if_out[31:26] == 43);
        assign br = (if_out[31:26] == 4);
    end

/* "ex_ctrl" is 3 bits:
    [0] - RegDst
    [1] - ALUOp0
    [2] - ALUOp1
    [3] - ALUSrc
*/

/* "mem_ctrl" is 3 bits:
    [0] - Branch
    [1] - MemWrite
    [2] - MemRead
*/

/* "wb_ctrl" is 2 bits
    [0] - PCSrc
    [1] - MemToReg
*/
// control signal logic - combinational
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
