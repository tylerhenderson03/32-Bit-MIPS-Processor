module id_stage (
	clk,
	rst,
	if_out,
	pc_incr_in,
	wr_reg,
	wr_data,
	RegWrite,
	ex_ctrl,
	mem_ctrl,
	wb_ctrl,
	pc_incr_out,
	sgn_extend_out,
	jump_addr,
	rd_data_one,
	rd_data_two,
	rd_out,
	rt_out,
	register_file,
	stallIF,
	PCJmp,
	shamt_out
);
	reg _sv2v_0;
	parameter WIDTH = 0;
	input clk;
	input rst;
	input [WIDTH - 1:0] if_out;
	input [WIDTH - 1:0] pc_incr_in;
	input [4:0] wr_reg;
	input [WIDTH - 1:0] wr_data;
	input RegWrite;
	output reg [4:0] ex_ctrl;
	output reg [3:0] mem_ctrl;
	output reg [3:0] wb_ctrl;
	output wire [WIDTH - 1:0] pc_incr_out;
	output reg [WIDTH - 1:0] sgn_extend_out;
	output wire [WIDTH - 1:0] jump_addr;
	output reg [WIDTH - 1:0] rd_data_one;
	output reg [WIDTH - 1:0] rd_data_two;
	output wire [4:0] rd_out;
	output wire [4:0] rt_out;
	output reg [(32 * WIDTH) - 1:0] register_file;
	output reg stallIF;
	output reg PCJmp;
	output wire [4:0] shamt_out;
	reg linkReg;
	reg signExtSel;
	always @(*) begin
		if (_sv2v_0)
			;
		sgn_extend_out = (signExtSel ? {{16 {if_out[15]}}, if_out[15:0]} : {{16 {1'b0}}, if_out[15:0]});
	end
	integer i;
	always @(negedge clk or posedge rst)
		if (rst)
			for (i = 0; i < 32; i = i + 1)
				register_file[(31 - i) * WIDTH+:WIDTH] <= i;
		else if (RegWrite)
			register_file[(31 - wr_reg) * WIDTH+:WIDTH] <= wr_data;
	assign rd_out[4:0] = (linkReg ? 5'd31 : if_out[15:11]);
	assign rt_out[4:0] = if_out[20:16];
	assign pc_incr_out = pc_incr_in;
	wire [WIDTH:1] sv2v_tmp_F4224;
	assign sv2v_tmp_F4224 = (linkReg ? pc_incr_in : register_file[(31 - if_out[25:21]) * WIDTH+:WIDTH]);
	always @(*) rd_data_one = sv2v_tmp_F4224;
	wire [WIDTH:1] sv2v_tmp_1C5BD;
	assign sv2v_tmp_1C5BD = (linkReg ? 32'd4 : register_file[(31 - if_out[20:16]) * WIDTH+:WIDTH]);
	always @(*) rd_data_two = sv2v_tmp_1C5BD;
	assign shamt_out = if_out[10:6];
	assign jump_addr = (if_out[5:0] == 6'h08 ? rd_data_one : {{6 {1'b0}}, if_out[25:0]});
	always @(*) begin
		if (_sv2v_0)
			;
		case (if_out[31:26])
			6'd0: begin
				ex_ctrl[4:0] = 5'b01100;
				mem_ctrl[3:0] = 4'b0000;
				wb_ctrl[3:0] = 4'b0010;
				signExtSel = 1;
				stallIF = 0;
				PCJmp = 1;
				linkReg = 0;
			end
			6'd8: begin
				ex_ctrl[4:0] = 5'b00001;
				mem_ctrl[3:0] = 4'b0000;
				wb_ctrl[3:0] = 4'b0010;
				signExtSel = 1;
				stallIF = 0;
				PCJmp = 0;
				linkReg = 0;
			end
			6'd9: begin
				ex_ctrl[4:0] = 5'b00001;
				mem_ctrl[3:0] = 4'b0000;
				wb_ctrl[3:0] = 4'b0010;
				signExtSel = 1;
				stallIF = 0;
				PCJmp = 0;
				linkReg = 0;
			end
			6'h0c: begin
				ex_ctrl[4:0] = 5'b00111;
				mem_ctrl[3:0] = 4'b0000;
				wb_ctrl[3:0] = 4'b0010;
				signExtSel = 0;
				stallIF = 0;
				PCJmp = 0;
				linkReg = 0;
			end
			6'h04: begin
				ex_ctrl[4:0] = 5'b0x010;
				mem_ctrl[3:0] = 4'b0100;
				wb_ctrl[3:0] = 4'b000x;
				signExtSel = 1;
				stallIF = 0;
				PCJmp = 0;
				linkReg = 0;
			end
			6'h05: begin
				ex_ctrl[4:0] = 5'b0x010;
				mem_ctrl[3:0] = 4'b1100;
				wb_ctrl[3:0] = 4'b0010;
				signExtSel = 1;
				stallIF = 0;
				PCJmp = 0;
				linkReg = 0;
			end
			6'h02: begin
				ex_ctrl[4:0] = 5'b00000;
				mem_ctrl[3:0] = 4'b0000;
				wb_ctrl[3:0] = 4'b0000;
				signExtSel = 1;
				stallIF = 1;
				PCJmp = 1;
				linkReg = 0;
			end
			6'h03: begin
				ex_ctrl[4:0] = 5'b00000;
				mem_ctrl[3:0] = 4'b0000;
				wb_ctrl[3:0] = 4'b0010;
				signExtSel = 1;
				stallIF = 1;
				PCJmp = 1;
				linkReg = 1;
			end
			6'h24: begin
				ex_ctrl[4:0] = 5'b00001;
				mem_ctrl[3:0] = 4'b0001;
				wb_ctrl[3:0] = 4'b0111;
				signExtSel = 1;
				stallIF = 0;
				PCJmp = 0;
				linkReg = 0;
			end
			6'h25: begin
				ex_ctrl[4:0] = 5'b00001;
				mem_ctrl[3:0] = 4'b0001;
				wb_ctrl[3:0] = 4'b1011;
				signExtSel = 1;
				stallIF = 0;
				PCJmp = 0;
				linkReg = 0;
			end
			6'h0f: begin
				ex_ctrl[4:0] = 5'b00001;
				mem_ctrl[3:0] = 4'b0001;
				wb_ctrl[3:0] = 4'b1111;
				signExtSel = 1;
				stallIF = 0;
				PCJmp = 0;
				linkReg = 0;
			end
			6'h23: begin
				ex_ctrl[4:0] = 5'b00001;
				mem_ctrl[3:0] = 4'b0010;
				wb_ctrl[3:0] = 4'b1100;
				signExtSel = 1;
				stallIF = 0;
				PCJmp = 0;
				linkReg = 0;
			end
			6'h0d: begin
				ex_ctrl[4:0] = 5'b10001;
				mem_ctrl[3:0] = 4'b0000;
				wb_ctrl[3:0] = 4'b0010;
				signExtSel = 0;
				stallIF = 0;
				PCJmp = 0;
				linkReg = 0;
			end
			6'h0a: begin
				ex_ctrl[4:0] = 5'b11011;
				mem_ctrl[3:0] = 4'b0000;
				wb_ctrl[3:0] = 4'b0010;
				signExtSel = 0;
				stallIF = 0;
				PCJmp = 0;
				linkReg = 0;
			end
			6'h0b: begin
				ex_ctrl[4:0] = 5'b11101;
				mem_ctrl[3:0] = 4'b0000;
				wb_ctrl[3:0] = 4'b0010;
				signExtSel = 0;
				stallIF = 0;
				PCJmp = 0;
				linkReg = 0;
			end
			6'h28: begin
				ex_ctrl[4:0] = 5'b00001;
				mem_ctrl[3:0] = 4'b0010;
				wb_ctrl[3:0] = 4'b0100;
				signExtSel = 1;
				stallIF = 0;
				PCJmp = 0;
				linkReg = 0;
			end
			6'h38: begin
				ex_ctrl[4:0] = 5'b00001;
				mem_ctrl[3:0] = 4'b0010;
				wb_ctrl[3:0] = 4'b0000;
				signExtSel = 1;
				stallIF = 0;
				PCJmp = 0;
				linkReg = 0;
			end
			6'h29: begin
				ex_ctrl[4:0] = 5'b00001;
				mem_ctrl[3:0] = 4'b0010;
				wb_ctrl[3:0] = 4'b1000;
				signExtSel = 1;
				stallIF = 0;
				PCJmp = 0;
				linkReg = 0;
			end
			6'h2b: begin
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
	initial _sv2v_0 = 0;
endmodule
