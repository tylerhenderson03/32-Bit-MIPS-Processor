module wb_stage (
	mem_read_data,
	alu_result_out,
	wb_ctrl,
	wr_reg_dest_in,
	wr_reg_dest_out,
	wr_data,
	RegWrite
);
	reg _sv2v_0;
	parameter WIDTH = 0;
	input wire [WIDTH - 1:0] mem_read_data;
	input wire [WIDTH - 1:0] alu_result_out;
	input wire [3:0] wb_ctrl;
	input wire [4:0] wr_reg_dest_in;
	output wire [4:0] wr_reg_dest_out;
	output wire [WIDTH - 1:0] wr_data;
	output wire RegWrite;
	wire [WIDTH - 1:0] tempMemData;
	assign wr_reg_dest_out = wr_reg_dest_in;
	assign RegWrite = wb_ctrl[1];
	assign tempMemData = (wb_ctrl[0] ? mem_read_data : alu_result_out);
	always @(*) begin
		if (_sv2v_0)
			;
		case (wb_ctrl[3:2])
			2'b00: wr_data = tempMemData;
			2'b01: wr_data = {{24 {1'b0}}, tempMemData[7:0]};
			2'b10: wr_data = {{16 {1'b0}}, tempMemData[15:0]};
			2'b11: wr_data = {tempMemData[15:0], {16 {1'b0}}};
		endcase
	end
	initial _sv2v_0 = 0;
endmodule
