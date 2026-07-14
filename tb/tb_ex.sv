`timescale 1ns/1ns
// Execute Module (EX) testbench
module tb_ex();
// parameter declaration
    parameter WIDTH = 32;
    parameter CLK_PERIOD = 10;

// input register declaration
    reg [3:0] ex_ctrl;
    reg [2:0] mem_ctrl_in;
    reg [1:0] wb_ctrl_in;
    reg [WIDTH-1:0] pc_incr_in, sgn_extend_out, rd_data_one, rd_data_two_in;
    reg [4:0] rd_out, rt_out;

// output wire declaration
    wire [2:0] mem_ctrl_out;
    wire [1:0] wb_ctrl_out;
    wire [WIDTH-1:0] pc_slt_add, alu_result, rd_data_two_out;
    wire zero_flag;
    reg [4:0] reg_dst_mux;


// module instantiation
    ex_stage #(.WIDTH(WIDTH)) ex_00 (.ex_ctrl(ex_ctrl), .mem_ctrl_in(mem_ctrl_in), .wb_ctrl_in(wb_ctrl_in), .pc_incr_in(pc_incr_in), .sgn_extend_out(sgn_extend_out), .rd_data_one(rd_data_one), .rd_data_two_in(rd_data_two_in), .rd_out(rd_out), .rt_out(rt_out), .mem_ctrl_out(mem_ctrl_out), .wb_ctrl_out(wb_ctrl_out), .pc_slt_add(pc_slt_add), .alu_result(alu_result), .rd_data_two_out(rd_data_two_out), .zero_flag(zero_flag), .reg_dst_mux(reg_dst_mux));

// initialize clk, period 10ns
    reg clk, rst;
    always #(CLK_PERIOD/2) clk = ~clk;

// module stimulus
    initial begin
        clk = 0; rst = 1; ex_ctrl = 0; mem_ctrl_in = 0; wb_ctrl_in = 0; pc_incr_in = 0;  sgn_extend_out = 0;  rd_data_one = 0;  rd_data_two_in = 0; rd_out = 0;  rt_out = 0;
         #(CLK_PERIOD) rst = 0;
        /*
        the first test case is going to test how the shift left functionality works
        add 000...000 to 00...0001 (1<<), and monitor output
        try another couple cases

        #(CLK_PERIOD) pc_incr_in = '0; sgn_extend_out = 1;
        #(CLK_PERIOD) pc_incr_in = '0; sgn_extend_out = 7;
        #(CLK_PERIOD) pc_incr_in = '0; sgn_extend_out = '0;
        #(CLK_PERIOD) pc_incr_in = 12; sgn_extend_out = 12;
        */


        /*
        test out ALU on different inputs, both ALUSrc (de-)asserted
        watch zero flag
        observe outputs for add, sub, AND, OR
        
        #(CLK_PERIOD) rd_data_one = 10; sgn_extend_out = 10; ex_ctrl[2:0] = 3'b001; // [2:1] = addition, [0] = sgn_ext->alu
        #(CLK_PERIOD) rd_data_two_in = 5; ex_ctrl[2:0] = 3'b000; // [2:1] = addition, [0] = rd_data_2->alu
        #(CLK_PERIOD) ex_ctrl[2:0] = 3'b010; // [2:1] = subtraction, [0] = rd_data_2->alu
        #(CLK_PERIOD) ex_ctrl[2:0] = 3'b011; // [2:1] = subtraction, [0] = sgn_extend->alu
        */

        /*
        testing RegDst 

        #(CLK_PERIOD) rd_out = 2; rt_out = 5; ex_ctrl[3] = 1;
        #(CLK_PERIOD) ex_ctrl[3] = 0;
        #(CLK_PERIOD) rd_out = 4; rt_out = 1; ex_ctrl[3] = 1;
        #(CLK_PERIOD) ex_ctrl[3] = 0;
        */


        #(3*CLK_PERIOD) $finish;
    end

// waveform instantiation
    initial begin
        $dumpfile("./vcd/tb_ex.vcd");
        $dumpvars(1, tb_ex);
        $monitor("%t: clk %1b, rst %1b, ex_ctrl %4b, mem_ctrl_in %3b, wb_ctrl_in %2b, pc_incr_in %32b, sgn_extend_out %32b, rd_data_one %32b, rd_data_two_in %32b, rd_out %5b, rt_out %5b, mem_ctrl_out %3b, wb_ctrl_out %2b, pc_slt_add %32b, alu_result %32b, rd_data_two_out %32b, zero_flag %1b, reg_dst_mux %5b", $time, clk, rst, ex_ctrl, mem_ctrl_in, wb_ctrl_in, pc_incr_in, sgn_extend_out, rd_data_one, rd_data_two_in, rd_out, rt_out, mem_ctrl_out, wb_ctrl_out, pc_slt_add, alu_result, rd_data_two_out, zero_flag, reg_dst_mux);
    end



endmodule: tb_ex
