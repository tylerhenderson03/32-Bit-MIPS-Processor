/* 	4b counter
	ECE 499/599 - Digital VLSI Design Automation
   	M.L. Johnston
*/
module counter_4b (clk, en, rst, count);

input clk, en, rst;
output [3:0] count;
reg [3:0] int_count;

always @(posedge clk or posedge rst) begin
   if (rst) begin
	int_count <= 0;
   end
   else
 	int_count <= int_count + 1;
end

assign count [3:0] = (en==1)? int_count [3:0]: 0;

endmodule
