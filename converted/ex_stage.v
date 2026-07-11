module ex_stage (
	ex_ctrl,
	shamt_out,
	mem_ctrl_in,
	wb_ctrl_in,
	pc_incr_in,
	sgn_extend_out,
	rd_data_one,
	rd_data_two_in,
	rd_out,
	rt_out,
	mem_ctrl_out,
	wb_ctrl_out,
	pc_slt_add,
	alu_result,
	rd_data_two_out,
	zero_flag,
	overflow_flag,
	reg_dst_mux
);
	reg _sv2v_0;
	parameter WIDTH = 0;
	input wire [4:0] ex_ctrl;
	input wire [4:0] shamt_out;
	input wire [3:0] mem_ctrl_in;
	input wire [3:0] wb_ctrl_in;
	input wire [WIDTH - 1:0] pc_incr_in;
	input wire [WIDTH - 1:0] sgn_extend_out;
	input wire [WIDTH - 1:0] rd_data_one;
	input wire [WIDTH - 1:0] rd_data_two_in;
	input wire [4:0] rd_out;
	input wire [4:0] rt_out;
	output wire [3:0] mem_ctrl_out;
	output wire [3:0] wb_ctrl_out;
	output wire [WIDTH - 1:0] pc_slt_add;
	output wire [WIDTH - 1:0] alu_result;
	output wire [WIDTH - 1:0] rd_data_two_out;
	output wire zero_flag;
	output wire overflow_flag;
	output reg [4:0] reg_dst_mux;
	localparam ALU_ADD = 4'b0010;
	localparam ALU_ADDU = 4'b0011;
	localparam ALU_SUB = 4'b0110;
	localparam ALU_SUBU = 4'b1000;
	localparam ALU_MULT = 4'b1111;
	localparam ALU_MULTU = 4'b1101;
	localparam ALU_DIV = 4'b0101;
	localparam ALU_DIVU = 4'b0100;
	localparam ALU_AND = 4'b0000;
	localparam ALU_OR = 4'b0001;
	localparam ALU_NOR = 4'b1100;
	localparam ALU_SLT = 4'b0111;
	localparam ALU_SLTU = 4'b1001;
	localparam ALU_SLL = 4'b1110;
	localparam ALU_SRL = 4'b1011;
	assign pc_slt_add = pc_incr_in + {sgn_extend_out[29:0], 2'b00};
	wire [5:1] sv2v_tmp_F7005;
	assign sv2v_tmp_F7005 = (ex_ctrl[3] ? rd_out : rt_out);
	always @(*) reg_dst_mux = sv2v_tmp_F7005;
	assign rd_data_two_out = rd_data_two_in;
	assign mem_ctrl_out = mem_ctrl_in;
	assign wb_ctrl_out = wb_ctrl_in;
	reg [3:0] alu_ctrl;
	always @(*) begin
		if (_sv2v_0)
			;
		case ({ex_ctrl[4], ex_ctrl[2], ex_ctrl[1]})
			3'b000: alu_ctrl = ALU_ADD;
			3'b001: alu_ctrl = ALU_SUB;
			3'b010:
				if (sgn_extend_out[5:0] == 6'b100000)
					alu_ctrl = ALU_ADD;
				else if (sgn_extend_out[5:0] == 6'h22)
					alu_ctrl = ALU_SUB;
				else if (sgn_extend_out[5:0] == 6'b100100)
					alu_ctrl = ALU_AND;
				else if (sgn_extend_out[5:0] == 6'b101010)
					alu_ctrl = ALU_SLT;
				else if (sgn_extend_out[5:0] == 6'b100001)
					alu_ctrl = ALU_ADDU;
				else if (sgn_extend_out[5:0] == 6'h23)
					alu_ctrl = ALU_SUBU;
				else if (sgn_extend_out[5:0] == 6'h18)
					alu_ctrl = ALU_MULT;
				else if (sgn_extend_out[5:0] == 6'h27)
					alu_ctrl = ALU_NOR;
				else if (sgn_extend_out[5:0] == 6'h25)
					alu_ctrl = ALU_OR;
				else if (sgn_extend_out[5:0] == 6'h2a)
					alu_ctrl = ALU_SLT;
				else if (sgn_extend_out[5:0] == 6'h2b)
					alu_ctrl = ALU_SLTU;
				else if (sgn_extend_out[5:0] == 6'h00)
					alu_ctrl = ALU_SLL;
				else if (sgn_extend_out[5:0] == 6'h02)
					alu_ctrl = ALU_SRL;
				else if (sgn_extend_out[5:0] == 6'h19)
					alu_ctrl = ALU_MULTU;
				else if (sgn_extend_out[5:0] == 6'h1a)
					alu_ctrl = ALU_DIV;
				else if (sgn_extend_out[5:0] == 6'h1b)
					alu_ctrl = ALU_DIVU;
				else
					alu_ctrl = 1'sb0;
			3'b011: alu_ctrl = ALU_AND;
			3'b100: alu_ctrl = ALU_OR;
			3'b101: alu_ctrl = ALU_SLT;
			3'b110: alu_ctrl = ALU_SLTU;
			default: alu_ctrl = 1'sb0;
		endcase
	end
	alu #(
		.WIDTH(WIDTH),
		.ALU_ADD(ALU_ADD),
		.ALU_ADDU(ALU_ADDU),
		.ALU_SUB(ALU_SUB),
		.ALU_SUBU(ALU_SUBU),
		.ALU_MULT(ALU_MULT),
		.ALU_MULTU(ALU_MULTU),
		.ALU_DIV(ALU_DIV),
		.ALU_DIVU(ALU_DIVU),
		.ALU_AND(ALU_AND),
		.ALU_OR(ALU_OR),
		.ALU_NOR(ALU_NOR),
		.ALU_SLT(ALU_SLT),
		.ALU_SLTU(ALU_SLTU),
		.ALU_SLL(ALU_SLL),
		.ALU_SRL(ALU_SRL)
	) alu_00(
		.in_a(rd_data_one),
		.in_b((ex_ctrl[0] ? sgn_extend_out : rd_data_two_in)),
		.alu_opcode(alu_ctrl),
		.zero_flag(zero_flag),
		.overflow_flag(overflow_flag),
		.alu_result(alu_result),
		.shamt_out(shamt_out)
	);
	initial _sv2v_0 = 0;
endmodule
