`timescale 1ns/1ns

// Register Write-Back
module wb_stage(
    input reg [WIDTH-1:0]mem_read_data, alu_result_out,
    input reg [1:0] wb_ctrl,
    input reg [4:0] wr_reg_dest_in,

    output wire [4:0] wr_reg_dest_out,
    output wire [WIDTH-1:0] wr_data,
    output logic RegWrite
    );

// pass-through
    assign wr_reg_dest_out = wr_reg_dest_in;

// output control signal to ID
    assign RegWrite = wb_ctrl[1];

// data to be written back to register file
    assign wr_data = wb_ctrl[0] ? alu_result_out : mem_read_data;



endmodule: wb_stage
