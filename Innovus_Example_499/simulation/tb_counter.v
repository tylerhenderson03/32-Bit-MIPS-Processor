module tb_counter;

reg clk, rst, en;
wire [3:0] count;

counter_4b counter1(.clk(clk), .rst(rst), .count(count), .en(en));


initial 
begin
clk=0;
rst=1;
en=0;
#10 rst=0;
#15 en=1;
#1000 $finish;
end


always #5 clk=~clk;

endmodule
