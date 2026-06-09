// instruction decode (ID) testbench


module tb_id();
// declare parameters
    parameter WIDTH = 32;
    parameter CLK_PERIOD = 10;

// internal regs/inputs to dut
    reg clk, rst;
    reg [WIDTH-1:0] if_out;
    reg [WIDTH-1:0] pc_incr_in;
    reg [WIDTH-1:0] wr_reg, wr_data;
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
    id_stage #(.WIDTH(WIDTH)) id_00 (.clk(clk), .rst(rst), .if_out(if_out), .pc_incr_in(pc_incr_in), .wr_reg(wr_reg), .wr_data(wr_data), .RegWrite(RegWrite), .wb_ctrl(wb_ctrl), .mem_ctrl(mem_ctrl), .ex_ctrl(ex_ctrl), .pc_incr_out(pc_incr_out), .sgn_extend_out(sgn_extend_out), .rd_data_one(rd_data_one), .rd_data_two(rd_data_two), .rd_out(rd_out), .rt_out(rt_out));
 
// clock declaration
    always #(CLK_PERIOD/2) clk = ~clk;

// primary module stimulus
    initial begin
        clk = 0; rst = 1; if_out = '0; pc_incr_in = '0; wr_reg = '0; wr_data = '0; RegWrite = '0;
        #(CLK_PERIOD) rst = 0;

    end

// waveform instantiation
    initial begin
        $dumpfile("tb_id.vcd");
        $dumpvars(1, tb_id);
        $monitor("%t: clk %1b, rst %1b, if_out %32b, pc_incr_in %32b, wr_reg %32b, wr_data %32b, RegWrite %1b, wb_ctrl %2b, mem_ctrl %3b, ex_ctrl %4b, pc_incr_out %32b, sgn_extend_out %32b, rd_data_one %32b, rd_data_two %32b, rd_out %5b, rt_out %5b", $time, clk, rst, if_out, pc_incr_in, wr_reg, wr_data, RegWrite, wb_ctrl, mem_ctrl, ex_ctrl, pc_incr_out, sgn_extend_out, rd_data_one, rd_data_two, rd_out, rt_out);
    end

endmodule: tb_id
