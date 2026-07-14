`timescale 1ns/1ns

// instruction fetch (IF) stage testbench
module tb_if();
        
    parameter WIDTH = 32;
    parameter CLK_PERIOD = 10;

    reg clk, rst, PCSrc;
    reg [WIDTH-1:0] pc_br;

    wire [WIDTH-1:0] pc_pp;
    wire [WIDTH-1:0] instruction;
    
    // <name of module> #(param. connections) <name of instance> (port conn.) 
    if_stage #(.WIDTH(WIDTH)) if_00 (.clk(clk), .rst(rst), .PCSrc(PCSrc), .pc_pp(pc_pp), .pc_br(pc_br), .inst_mem_out(instruction));
    
    always #(CLK_PERIOD/2) clk = ~clk;
    initial begin
        clk = 0; rst = 1; PCSrc = 0; pc_br = '0;
        #(1*CLK_PERIOD) rst = 0; // initial reset sequence
        #(6*CLK_PERIOD) PCSrc = 1; pc_br = 32'd5;
        #(1*CLK_PERIOD) PCSrc = 0;
        #(3*CLK_PERIOD) pc_br = '0;
        #(2*CLK_PERIOD) $finish;
    end

    initial begin
        $dumpfile("./vcd/tb_if.vcd");
        $dumpvars(1, tb_if);
        $monitor("%t: clk %1b, rst %1b, PCSrc %1b, pc_br %5b, pc_pp %5b, instruction %32b", $time, clk, rst, PCSrc, pc_br, pc_pp, instruction);
    end



endmodule: tb_if
