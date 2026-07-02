`timescale 1ns/1ns

module data_mem #(parameter WIDTH) (
    input clk,
    input wr_en, rd_en, // just the mem control signals
    /* verilator lint_off UNUSEDSIGNAL */
    input reg [WIDTH-1:0] addr, wr_data,
    /* verilator lint_on UNUSEDSIGNAL */

    output wire [WIDTH-1:0] rd_data
);

    logic [WIDTH-1:0] data_memory [0:32-1];

    // combinational read - can adjust this to be in always_ff below but adds extra stage to pipeline
    assign rd_data = rd_en ? data_memory[addr[5-1+2:2]] : '0;

    // clocked write
    always_ff @(posedge clk) begin
        if(wr_en) data_memory[addr[5-1+2:2]] <= wr_data;
        //else data_memory[addr[5-1+2:2]] <= data_memory[addr[5-1+2:2]];
    end

endmodule: data_mem
