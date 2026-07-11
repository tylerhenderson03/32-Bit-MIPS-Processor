`timescale 1ns/1ns

module tb_wb();
    parameter WIDTH = 32;
    parameter CLK_PERIOD = 10;
    
    reg [WIDTH-1:0]mem_read_data, alu_result_out;
    reg [1:0] wb_ctrl;
    reg [4:0] wr_reg_dest_in;

    wire [4:0] wr_reg_dest_out;
    wire [WIDTH-1:0] wr_data;
    logic RegWrite;

    reg clk, rst;
    always #(CLK_PERIOD) clk = ~clk;

    wb_stage #(.WIDTH(WIDTH)) wb_00 (
        .mem_read_data(mem_read_data),
        .alu_result_out(alu_result_out),
        .wb_ctrl(wb_ctrl),
        .wr_reg_dest_in(wr_reg_dest_in),
        .wr_reg_dest_out(wr_reg_dest_out),
        .wr_data(wr_data),
        .RegWrite(RegWrite)
    );

/* "wb_ctrl" is 2 bits:
    [0] - MemToReg
    [1] - PCSrc/RegWrite
*/

// module stimulus
    initial begin
        clk = 0; rst = 1; mem_read_data = '0; alu_result_out = '0; wb_ctrl = '0; wr_reg_dest_in = '0;
        #(CLK_PERIOD) rst = 0;
        #(CLK_PERIOD) wb_ctrl[0] = 1; mem_read_data = 83; alu_result_out = 25; 
        #(CLK_PERIOD) wb_ctrl[0] = 0;
        #(CLK_PERIOD) mem_read_data = 43; alu_result_out = 70; 
        #(CLK_PERIOD) wb_ctrl[0] = 1;
        #(CLK_PERIOD) wb_ctrl = 2'b10; mem_read_data = '0; alu_result_out = '0;

        #(2*CLK_PERIOD) $finish;
    end

// waveform stimulus
    initial begin
        $dumpfile("tb_wb.vcd");
        $dumpvars(1, tb_wb);
        $monitor("%t: clk %1b, rst %1b, wb_ctrl %2b, mem_read_data %32b, alu_result_out %32b, wr_reg_dest_in %5b, wr_reg_dest_out %5b, wr_data %32b, RegWrite %1b",
          $time, clk, rst, wb_ctrl, mem_read_data, alu_result_out, wr_reg_dest_in, wr_reg_dest_out, wr_data, RegWrite);
    end

endmodule: tb_wb
