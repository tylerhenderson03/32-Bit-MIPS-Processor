module alu (
	in_a,
	in_b,
	alu_opcode,
	shamt_out,
	zero_flag,
	overflow_flag,
	alu_result
);
	reg _sv2v_0;
	parameter WIDTH = 0;
	parameter [3:0] ALU_ADD = 0;
	parameter [3:0] ALU_ADDU = 0;
	parameter [3:0] ALU_SUB = 0;
	parameter [3:0] ALU_SUBU = 0;
	parameter [3:0] ALU_MULT = 0;
	parameter [3:0] ALU_MULTU = 0;
	parameter [3:0] ALU_DIV = 0;
	parameter [3:0] ALU_DIVU = 0;
	parameter [3:0] ALU_AND = 0;
	parameter [3:0] ALU_OR = 0;
	parameter [3:0] ALU_NOR = 0;
	parameter [3:0] ALU_SLT = 0;
	parameter [3:0] ALU_SLTU = 0;
	parameter [3:0] ALU_SRL = 0;
	parameter [3:0] ALU_SLL = 0;
	input [WIDTH - 1:0] in_a;
	input [WIDTH - 1:0] in_b;
	input [3:0] alu_opcode;
	input [4:0] shamt_out;
	output wire zero_flag;
	output reg overflow_flag;
	output reg [WIDTH - 1:0] alu_result;
	reg [WIDTH:0] result_extended;
	assign zero_flag = alu_result == {WIDTH {1'sb0}};
	always @(*) begin
		if (_sv2v_0)
			;
		case (alu_opcode[3:0])
			ALU_AND: begin
				result_extended = 0;
				alu_result = in_a & in_b;
				overflow_flag = 0;
			end
			ALU_OR: begin
				result_extended = 0;
				alu_result = in_a | in_b;
				overflow_flag = 0;
			end
			ALU_ADD: begin
				result_extended = {in_a[WIDTH - 1], in_a} + {in_b[WIDTH - 1], in_b};
				alu_result = result_extended[WIDTH - 1:0];
				overflow_flag = result_extended[WIDTH] ^ result_extended[WIDTH - 1];
			end
			ALU_ADDU: begin
				result_extended = 0;
				alu_result = in_a + in_b;
				overflow_flag = 0;
			end
			ALU_SUB: begin
				result_extended = {in_a[WIDTH - 1], in_a} - {in_b[WIDTH - 1], in_b};
				alu_result = result_extended[WIDTH - 1:0];
				overflow_flag = result_extended[WIDTH] ^ result_extended[WIDTH - 1];
			end
			ALU_SUBU: begin
				result_extended = 0;
				alu_result = in_a - in_b;
				overflow_flag = 0;
			end
			ALU_NOR: begin
				result_extended = 0;
				alu_result = ~(in_a | in_b);
				overflow_flag = 0;
			end
			ALU_SLT: begin
				result_extended = 0;
				alu_result = ($signed(in_a) < $signed(in_b) ? 32'd1 : 32'd0);
				overflow_flag = 0;
			end
			ALU_SLTU: begin
				result_extended = 0;
				alu_result = (in_a < in_b ? 32'd1 : 32'd0);
				overflow_flag = 0;
			end
			ALU_SLL: begin
				result_extended = 0;
				alu_result = in_b << shamt_out;
				overflow_flag = 0;
			end
			ALU_SRL: begin
				result_extended = 0;
				alu_result = in_b >> shamt_out;
				overflow_flag = 0;
			end
			ALU_MULT: begin
				result_extended = 0;
				alu_result = $signed(in_a) * $signed(in_b);
				overflow_flag = 0;
			end
			ALU_MULTU: begin
				result_extended = 0;
				alu_result = in_a * in_b;
				overflow_flag = 0;
			end
			default: begin
				result_extended = 0;
				alu_result = 1'sb0;
				overflow_flag = 0;
			end
		endcase
	end
	initial _sv2v_0 = 0;
endmodule
