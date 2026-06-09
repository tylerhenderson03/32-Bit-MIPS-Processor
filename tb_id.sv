`timescale 1ns/1ns

// instruction decode (ID) testbench


module tb_id();
// declare parameters
    parameter WIDTH = 32;
    parameter CLK_PERIOD = 10;

// internal regs/inputs to dut
    reg clk, rst;
    reg [WIDTH-1:0] if_out;
    reg [WIDTH-1:0] pc_incr_in;
    reg [5-1:0] wr_reg;
    reg [WIDTH-1:0] wr_data;
    reg RegWrite;

// internal wires/outputs from dut
    wire [3:0] ex_ctrl;
    wire [2:0] mem_ctrl;
    wire [1:0] wb_ctrl;
    wire [WIDTH-1:0] pc_incr_out;
    wire [WIDTH-1:0] sgn_extend_out;
    wire [WIDTH-1:0] rd_data_one, rd_data_two;
    wire [5-1:0] rd_out, rt_out;

// module instantiation
    id_stage #(.WIDTH(WIDTH)) id_00 (.rst(rst), .if_out(if_out), .pc_incr_in(pc_incr_in), .wr_reg(wr_reg), .wr_data(wr_data), .RegWrite(RegWrite), .wb_ctrl(wb_ctrl), .mem_ctrl(mem_ctrl), .ex_ctrl(ex_ctrl), .pc_incr_out(pc_incr_out), .sgn_extend_out(sgn_extend_out), .rd_data_one(rd_data_one), .rd_data_two(rd_data_two), .rd_out(rd_out), .rt_out(rt_out));
 
// clock declaration
    always #(CLK_PERIOD/2) clk = ~clk;

/* for copy and paste:
    R-type: 32'b000000_00000_00000_00000_00000_000000

    load word: 32'b100011_00000_00000_0000000000000000
        (the second 5-bit register specifies destination register, last 15 bits specifies offset)

    store word: 32'b101011_00000_00000_0000000000000000

    branch instruction: 32'b000100_00000_00000_0000000000000000
*/

// primary module stimulus
    initial begin
        clk = 0; rst = 1; if_out = '0; pc_incr_in = '0; wr_reg = '0; wr_data = '0; RegWrite = '0;
        #(CLK_PERIOD) rst = 0;

        // test sign-extension unit to confirm 32 bit output with upper 16 bits all zeros
        #(CLK_PERIOD) if_out = 32'b000100_00000_00000_1111111111111111; // branch

        // test read and write data to ensure correct registers are read with the pre-instantiation of register file to integers 0-31
        #(2*CLK_PERIOD) if_out =  32'b100011_00011_00101_0000000000000000; // load word

        // test register writeback to check write register/data functionality
            // read data from written registers on next clock cycle
        #(2*CLK_PERIOD) if_out = 32'b100011_01010_01011_0000000000000000;
        #(2*CLK_PERIOD) RegWrite = 1; wr_reg = 10; wr_data = 32'hFFFF_FFFF; if_out = 32'b100011_01010_01011_0000000000000000;
        #(2*CLK_PERIOD) RegWrite = 0; wr_reg = '0; wr_data = '0;
        #(2*CLK_PERIOD) if_out = 32'b100011_01010_01011_0000000000000000;

        // check rd_out and rt_out match if_out[15:11] and if_out[20:16] respectively

        #(10*CLK_PERIOD); $finish;
    end

// waveform instantiation
    initial begin
        $dumpfile("tb_id.vcd");
        $dumpvars(1, tb_id);
        $monitor("%t: clk %1b, rst %1b, if_out %32b, pc_incr_in %32b, wr_reg %32b, wr_data %32b, RegWrite %1b, wb_ctrl %2b, mem_ctrl %3b, ex_ctrl %4b, pc_incr_out %32b, sgn_extend_out %32b, rd_data_one %32b, rd_data_two %32b, rd_out %5b, rt_out %5b", $time, clk, rst, if_out, pc_incr_in, wr_reg, wr_data, RegWrite, wb_ctrl, mem_ctrl, ex_ctrl, pc_incr_out, sgn_extend_out, rd_data_one, rd_data_two, rd_out, rt_out);
    end

endmodule: tb_id
