`timescale 1ns/1ns

// will contain PC Logic, Instruction Memory reading
module if_stage #(parameter WIDTH, parameter MAX_INSTRUCTIONS)
                (input clk, rst,
                input logic [WIDTH-1:0] instruction_memory [0:MAX_INSTRUCTIONS-1],
                input logic PCSrc, PCJmp, PCWrite,
                input [WIDTH-1:0] pc_br,
                input [WIDTH-1:0] jump_addr,
                output reg [WIDTH-1:0] pc_pp,
                output reg [WIDTH-1:0] inst_mem_out
);

    // program counter
    reg [WIDTH-1:0] pc;

    always_ff @(posedge clk or posedge rst) begin
        if(rst)     pc <= '0; // add else if PCWrite then pc gets current pc to preserve current instruction on a stall
        else if(PCSrc)      pc <= pc_br;    // branch address calculated by ALU
        else if (PCJmp)     pc <= jump_addr;// jump address from instruction
        else if (PCWrite) pc <= pc;       // stall pipeline, delay instruction
        else                pc <= pc_pp;    // else continue with PC + 4
    end

    /* condition ? value_if_true : value_if_false */

    assign pc_pp        = pc + 4;
    assign inst_mem_out = rst ? '0 : instruction_memory[{2'b00, pc[WIDTH-1:2]}];

endmodule: if_stage
