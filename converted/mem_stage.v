module mem_stage (
	clk,
	rst,
	zero_flag,
	mem_ctrl,
	wb_ctrl_in,
	alu_result,
	rd_data_two_out,
	pc_slt_add,
	reg_dst_mux,
	branch_flag,
	mem_read_data,
	branch_addr,
	alu_result_out,
	wb_ctrl_out,
	wr_reg_dest_out
);
	parameter WIDTH = 0;
	input clk;
	input rst;
	input wire zero_flag;
	input wire [3:0] mem_ctrl;
	input wire [3:0] wb_ctrl_in;
	input wire [WIDTH - 1:0] alu_result;
	input wire [WIDTH - 1:0] rd_data_two_out;
	input wire [WIDTH - 1:0] pc_slt_add;
	input wire [4:0] reg_dst_mux;
	output wire branch_flag;
	output wire [WIDTH - 1:0] mem_read_data;
	output wire [WIDTH - 1:0] branch_addr;
	output wire [WIDTH - 1:0] alu_result_out;
	output wire [3:0] wb_ctrl_out;
	output wire [4:0] wr_reg_dest_out;
	data_mem #(.WIDTH(WIDTH)) dmem_00(
		.clk(clk),
		.rd_en(mem_ctrl[0]),
		.wr_en(mem_ctrl[1]),
		.addr(alu_result),
		.wr_data(rd_data_two_out),
		.rd_data(mem_read_data)
	);
	assign wb_ctrl_out = wb_ctrl_in;
	assign branch_flag = mem_ctrl[2] && (zero_flag || (mem_ctrl[3] && ~zero_flag));
	assign wr_reg_dest_out = reg_dst_mux;
	assign branch_addr = pc_slt_add;
	assign alu_result_out = alu_result;
endmodule
