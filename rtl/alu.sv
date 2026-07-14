`timescale 1ns/1ns
// Arithmetic Logic Unit
// performs addition (CLA), subtraction, multiplication(?), LT/GT, EQ/NE
module alu #(parameter WIDTH,
parameter [3:0] ALU_ADD, ALU_ADDU, ALU_SUB, ALU_SUBU, ALU_MULT, ALU_MULTU,
parameter [3:0] ALU_DIV, ALU_DIVU, ALU_AND, ALU_OR, ALU_NOR, ALU_SLT, ALU_SLTU, ALU_SRL, ALU_SLL) 
        (input [WIDTH-1:0] in_a, in_b,
            input [3:0] alu_opcode,
            input [4:0] shamt_out,
            output logic zero_flag, overflow_flag,
            output logic [WIDTH-1:0] alu_result
            );
    logic [WIDTH:0] result_extended;

    assign zero_flag = (alu_result == '0);

    always_comb begin
        case(alu_opcode[3:0])
            ALU_AND: begin // AND
                result_extended = 0;
                alu_result = in_a & in_b; 
                overflow_flag = 0;
            end
            ALU_OR: begin // OR
                result_extended = 0;
                alu_result = (in_a | in_b);
                overflow_flag = 0;
            end
            ALU_ADD: begin // ADD (signed)
                result_extended = {in_a[WIDTH-1], in_a} + {in_b[WIDTH-1], in_b};
                alu_result      = result_extended[WIDTH-1:0];
                overflow_flag   = result_extended[WIDTH] ^ result_extended[WIDTH-1];
            end
            ALU_ADDU: begin // ADDU (unsigned — same result, no overflow check)
                result_extended = 0;
                alu_result    = in_a + in_b;
                overflow_flag = 0;
            end
            ALU_SUB: begin // SUB (signed)
                result_extended = {in_a[WIDTH-1], in_a} - {in_b[WIDTH-1], in_b};
                alu_result      = result_extended[WIDTH-1:0];
                overflow_flag   = result_extended[WIDTH] ^ result_extended[WIDTH-1];
            end
            ALU_SUBU: begin // SUBU (unsigned)
                result_extended = 0;
                alu_result    = in_a - in_b;
                overflow_flag = 0;
            end
            ALU_NOR: begin // NOR
                result_extended = 0;
                alu_result = ~(in_a | in_b); 
                overflow_flag = 0;
            end
            ALU_SLT: begin // SLT (signed)
                result_extended = 0;
                alu_result = ($signed(in_a) < $signed(in_b)) ? 32'd1 : 32'd0;
                overflow_flag = 0;
            end
            ALU_SLTU: begin // SLTU (unsigned)
                result_extended = 0;
                alu_result = (in_a < in_b) ? 32'd1 : 32'd0;
                overflow_flag = 0;
            end
            ALU_SLL: begin // SLL (logical shift left)
                result_extended = 0;
                alu_result = in_b << shamt_out;
                overflow_flag = 0;
            end
            ALU_SRL: begin // SRL (logical shift right)
                result_extended = 0;
                alu_result = in_b >> shamt_out;
                overflow_flag = 0;
            end
            ALU_MULT: begin // MULT
                result_extended = 0;
                alu_result = $signed(in_a) * $signed(in_b);
                overflow_flag = 0;
            end
            ALU_MULTU: begin // MULTU
                result_extended = 0;
                alu_result = in_a * in_b;
                overflow_flag = 0;
            end
            ALU_DIV: begin // DIV
                result_extended = 0;
                alu_result = $signed(in_a) / $signed(in_b);
                overflow_flag = 0;
            end
            ALU_DIVU: begin // DIVU
                result_extended = 0;
                alu_result = in_a / in_b;
                overflow_flag = 0;
            end
            default: begin
                result_extended = 0;
                alu_result = '0;
                overflow_flag = 0;
            end
        endcase
    end


endmodule: alu
