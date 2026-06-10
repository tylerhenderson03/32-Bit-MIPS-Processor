`timescale 1ns/1ns
// Data Memory Read/Write
module mem_stage #(parameter WIDTH) (
    input clk, rst,
    input logic zero_flag,
    input reg [2:0] mem_ctrl,
    input reg [1:0] wb_ctrl_in,
    input reg [WIDTH-1:0] alu_result, rd_data_two_out, pc_slt_add,
    input reg [4:0] reg_dst_mux,

    output wire branch_flag,
    output logic [1:0] wb_ctrl_out,
    output logic [WIDTH-1:0] mem_read_data, branch_addr, alu_result_out,
    output wire [4:0] wr_reg_dest_out
    );

    assign wb_ctrl_out = wb_ctrl_in;

    assign branch_flag = mem_ctrl[2] & zero_flag;

    assign wr_reg_dest_out = reg_dst_mux;

    assign branch_addr = pc_slt_add;
    assign alu_result_out = alu_result;

    // need Data Memory
    reg [WIDTH-1:0] data_memory [32-1:0]; // for 32 memory entries, can adjust of course
    integer i = 0;
    initial begin
        for(i = 0; i < 32; i++) begin
            data_memory[i] = i;
        end
    end

/* "mem_ctrl" is 3 bits:
    [0] - MemRead
    [1] - MemWrite
    [2] - Branch
*/

    // combinational read
    assign mem_read_data = mem_ctrl[1] ? data_memory[alu_result] : '0;

    // clocked write
    always_ff @(posedge clk) begin
        if(mem_ctrl[0] & ~rst)
            data_memory[alu_result] <= rd_data_two_out;
    end

endmodule: mem_stage
