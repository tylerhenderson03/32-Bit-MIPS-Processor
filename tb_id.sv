// instruction decode (ID) testbench


module tb_id();
// declare parameters
    parameter WIDTH = 32;
    parameter CLK_PERIOD = 10;

// internal regs/inputs to dut
    reg clk, rst;

// internal wires/outputs from dut


// module instantiation
    id_stage #(.WIDTH(WIDTH)) id_00 (.clk(clk), .rst(rst));
 
// clock declaration
    always #(CLK_PERIOD/2) clk = ~clk;

// primary module stimulus
    initial begin
        clk = 0; rst = 1;
        #(CLK_PERIOD) = 0;

    end

// waveform instantiation
    initial begin
        $dumpfile("tb_id.vcd");
        $dumpvars(1, tb_id);
        $monitor("%t: clk %1b, rst %1b, PCSrc %1b, pc_br %5b, pc_pp %5b, instruction %32b", $time, clk, rst, PCSrc, pc_br, pc_pp, instruction);
    end

endmodule: tb_id
