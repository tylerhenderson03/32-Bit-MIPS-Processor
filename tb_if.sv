// instruction fetch (IF) stage testbench



module tb_if();
        
    parameter WIDTH = 32;
    parameter CLK_PERIOD = 10;

    reg clk, rst, PCSrc;
    reg [WIDTH-1:0] pc_br;

    wire pc_pp;
    wire [WIDTH-1:0] instruction;
    
    // <name of module> #(param. connections) <name of instance> (port conn.) 
    if_stage #(.WIDTH(WIDTH)) if_00 (.clk(clk), .rst(rst), .PCSrc(PCSrc), .pc_pp(pc_pp), .pc_br(pc_br));
    
    always #(CLK_PERIOD/2) clk = ~clk;
    initial begin
        clk = 0; rst = 1; PCSrc = 0; PC_br = '0;
        #(CLK_PERIOD) rst = 0; // initial reset sequence
        #(2*CLK_PERIOD) 
        
        
        #(2*CLK_PERIOD) $finish;
    end

    initial begin
        $dumpfile("test.vcd");
        $dumpvars(1, tb);
        $monitor("%t: clk %1b, reset %1b, req %3b, done %3b, accmodule %2b, mstate %8b, nb_interrupts %5b", $time, iDUT.clk, iDUT.reset, iDUT.req, iDUT.done, iDUT.accmodule, iDUT.mstate, iDUT.nb_interrupts);
    end



endmodule: tb_if
