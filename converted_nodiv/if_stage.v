module if_stage (
	clk,
	rst,
	instruction_memory,
	PCSrc,
	PCJmp,
	pc_br,
	jump_addr,
	pc_pp,
	inst_mem_out
);
	parameter WIDTH = 0;
	input clk;
	input rst;
	input wire [(32 * WIDTH) - 1:0] instruction_memory;
	input wire PCSrc;
	input wire PCJmp;
	input [WIDTH - 1:0] pc_br;
	input [WIDTH - 1:0] jump_addr;
	output reg [WIDTH - 1:0] pc_pp;
	output reg [WIDTH - 1:0] inst_mem_out;
	reg [WIDTH - 1:0] pc;
	always @(posedge clk or posedge rst)
		if (rst)
			pc <= 1'sb0;
		else if (PCSrc)
			pc <= pc_br;
		else if (PCJmp)
			pc <= jump_addr;
		else
			pc <= pc_pp;
	wire [WIDTH:1] sv2v_tmp_A893B;
	assign sv2v_tmp_A893B = pc + 4;
	always @(*) pc_pp = sv2v_tmp_A893B;
	wire [WIDTH:1] sv2v_tmp_5C480;
	assign sv2v_tmp_5C480 = (rst ? {WIDTH {1'sb0}} : instruction_memory[(31 - {2'b00, pc[WIDTH - 1:2]}) * WIDTH+:WIDTH]);
	always @(*) inst_mem_out = sv2v_tmp_5C480;
endmodule
