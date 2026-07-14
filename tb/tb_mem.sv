`timescale 1ns/1ns
// Memory Access (MEM) Stage
module tb_mem();
// parameters
    parameter WIDTH = 32;
    parameter CLK_PERIOD = 10;

// input regs declaration
    reg [2:0] mem_ctrl;
    reg [1:0] wb_ctrl_in;
    reg [WIDTH-1:0] pc_slt_add, alu_result, rd_data_two_out;
    reg zero_flag;
    reg [4:0] reg_dst_mux;

// output wire declaration
    wire branch_flag;
    wire [1:0] wb_ctrl_out;
    wire [WIDTH-1:0] mem_read_data, branch_addr, alu_result_out;
    wire [4:0] wr_reg_dest_out;

// initialize clk, period 10ns
    reg clk, rst;
    always #(CLK_PERIOD/2) clk = ~clk;

// module instantiation
    mem_stage # (.WIDTH(WIDTH)) mem_00 (.mem_ctrl(mem_ctrl),
        .rst(rst),
        .clk(clk),
        .wb_ctrl_in(wb_ctrl_in),
        .pc_slt_add(pc_slt_add),
        .alu_result(alu_result),
        .rd_data_two_out(rd_data_two_out),
        .zero_flag(zero_flag),
        .reg_dst_mux(reg_dst_mux),
        .branch_flag(branch_flag),
        .wb_ctrl_out(wb_ctrl_out),
        .mem_read_data(mem_read_data),
        .branch_addr(branch_addr),
        .alu_result_out(alu_result_out),
        .wr_reg_dest_out(wr_reg_dest_out)
);

// module stimulus
    initial begin
        clk = 0; rst = 1; mem_ctrl = '0; wb_ctrl_in = '0; pc_slt_add = '0; alu_result = '0; rd_data_two_out = '0; zero_flag = '0; reg_dst_mux = '0;
        #(CLK_PERIOD) rst = 0;

    // test branch flag functionality
        #(CLK_PERIOD) mem_ctrl[2] = 1;
        #(CLK_PERIOD) mem_ctrl[2] = 0; zero_flag = 1;
        #(CLK_PERIOD) mem_ctrl[2] = 1; zero_flag = 0;


    // test data memory
            // read value from address a in data memory
        #(CLK_PERIOD) alu_result = 6; mem_ctrl[2] = 0; mem_ctrl[1] = 1; 
            // write to address a
        #(CLK_PERIOD) alu_result = 6; mem_ctrl[1] = 0; mem_ctrl[0] = 1; rd_data_two_out = 67;
            // read again from address a
        #(CLK_PERIOD) alu_result = 6; mem_ctrl[1] = 1; mem_ctrl[0] = 0;

        #(2*CLK_PERIOD) $finish;
    end


// waveform instantiation
    initial begin
        $dumpfile("./vcd/tb_mem.vcd");
        $dumpvars(1, tb_mem);
        $monitor("%t: clk %1b, rst %1b, mem_ctrl %3b, wb_ctrl_in %2b, pc_slt_add %32b, alu_result %32b, rd_data_two_out %32b, wb_ctrl_out %2b, branch_flag %1b, mem_read_data %32b, branch_addr %32b, alu_result_out %32b, wr_reg_dest_out %5b",
          $time, clk, rst, mem_ctrl, wb_ctrl_in, pc_slt_add, alu_result, rd_data_two_out, wb_ctrl_out, branch_flag, mem_read_data, branch_addr, alu_result_out, wr_reg_dest_out);
    end



endmodule: tb_mem
