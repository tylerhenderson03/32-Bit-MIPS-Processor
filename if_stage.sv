`timescale 1ns/1ns

// will contain PC Logic, Instruction Memory reading
module if_stage #(parameter WIDTH)
                (input clk, rst,
                input PCSrc,
                input [WIDTH-1:0] pc_br,
                output reg [WIDTH-1:0] pc_pp,
                output wire [WIDTH-1:0] inst_mem_out);

    // program counter
    reg [WIDTH-1:0] pc;

    // need Instruction Memory
    reg [WIDTH-1:0] instruction_memory [32-1:0]; // for 32 instructions, can adjust
    integer i = 0;
    initial begin
        for(i = 0; i < 32; i++) begin
            instruction_memory[i] = i;
        end
    end

    always_ff @(posedge clk or posedge rst) begin
        if(rst)     pc <= '0;
        else        pc <= PCSrc ? pc_br : pc_pp; // condition ? value_if_true : value_if_false
    end

    assign pc_pp        = pc + 4;
    assign inst_mem_out = rst ? '0 : instruction_memory[pc];

endmodule: if_stage
