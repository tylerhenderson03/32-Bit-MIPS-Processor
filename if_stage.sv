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
        for(i = 0; i < 31; i++) begin
            instruction_memory[i] = i;
        end
    end

    always_ff @(posedge clk or posedge rst) begin
        // condition ? value_if_true : value_if_false
        if(rst)   pc <= '0;
        else        pc <= PCSrc ? pc_br : (pc + 4);
    end

    always_comb  begin
        // could keep this, or change to be an ALU which ONLY adds by 4
        pc_pp = (pc + 4);
        if(rst) begin
            inst_mem_out = 32'b0;
        end
        else begin 
            inst_mem_out = instruction_memory[pc];
        end
    end



endmodule: if_stage
