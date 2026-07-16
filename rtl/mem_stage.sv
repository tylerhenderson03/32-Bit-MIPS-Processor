`timescale 1ns/1ns
// Data Memory Read/Write
module mem_stage #(parameter WIDTH) (
    /* verilator lint_off UNUSEDSIGNAL */
    input clk, rst,
    /* verilator lint_on UNUSEDSIGNAL */
    input logic zero_flag,
    input reg [3:0] mem_ctrl,
    input reg [3:0] wb_ctrl_in,
    input reg [WIDTH-1:0] alu_result, rd_data_two_out, pc_slt_add,
    input reg [4:0] reg_dst_mux,

    output wire branch_flag,
    output logic [WIDTH-1:0] mem_read_data, branch_addr, alu_result_out,
    output logic [3:0] wb_ctrl_out,
    output wire [4:0] wr_reg_dest_out
    );

    data_mem #(.WIDTH(WIDTH)) dmem_00 (.clk(clk), .rd_en(mem_ctrl[0]), .wr_en(mem_ctrl[1]), .addr(alu_result), .wr_data(rd_data_two_out), .rd_data(mem_read_data));

    assign wb_ctrl_out = wb_ctrl_in;

    // mem_ctrl[2] signifies a branch instruction, mem_ctrl[3] is for a NE, ~mem_ctrl[3] for EQ
    assign branch_flag = (!mem_ctrl[3] && mem_ctrl[2] && zero_flag) /* for BREQ */
                            || (mem_ctrl[3] && mem_ctrl[2] && !zero_flag); /* for BRNE */

    assign wr_reg_dest_out = reg_dst_mux;

    assign branch_addr = pc_slt_add;
    assign alu_result_out = alu_result;

/* "mem_ctrl" is 3 bits:
    [0] - MemRead
    [1] - MemWrite
    [2] - Branch
    [3] - bneSel
*/

endmodule: mem_stage
