`timescale 1ns/1ns

// will contain PC Logic, Instruction Memory reading
module if_stage #(parameter WIDTH, parameter MAX_INSTRUCTIONS)
                (input clk, rst,
                input logic [WIDTH-1:0] instruction_memory [MAX_INSTRUCTIONS-1:0],
                input logic PCSrc, PCJmp, PCWrite,
                input [WIDTH-1:0] pc_br,
                input [WIDTH-1:0] jump_addr,
                output reg [WIDTH-1:0] pc_pp,
                output reg [WIDTH-1:0] inst_mem_out
);

    // program counter
    reg [WIDTH-1:0] pc;

    always_ff @(posedge clk or posedge rst) begin
        if(rst)     pc <= '0; 
        else if(PCSrc)      pc <= pc_br;    // branch address calculated by ALU
        else if (PCJmp)     pc <= jump_addr;// jump address from instruction
        else if (PCWrite) pc <= pc;       // stall pipeline, delay instruction
        else                pc <= pc_pp;    // else continue with PC + 4
    end
    always @(posedge clk) begin
        $display("pc=%0d index=%0d inst=%h",
                pc,
                pc >> 2,
                instruction_memory[pc >> 2]);
    end

    /* condition ? value_if_true : value_if_false */

    assign pc_pp        = pc + 4;
    assign inst_mem_out = rst ? '0 : instruction_memory[pc >> 2];

endmodule: if_stage
