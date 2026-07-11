module data_mem (
	clk,
	wr_en,
	rd_en,
	addr,
	wr_data,
	rd_data
);
	parameter WIDTH = 0;
	input clk;
	input wr_en;
	input rd_en;
	input wire [WIDTH - 1:0] addr;
	input wire [WIDTH - 1:0] wr_data;
	output wire [WIDTH - 1:0] rd_data;
	reg [WIDTH - 1:0] data_memory [0:31];
	assign rd_data = (rd_en ? data_memory[addr[6:2]] : {WIDTH {1'sb0}});
	always @(posedge clk)
		if (wr_en)
			data_memory[addr[6:2]] <= wr_data;
endmodule
