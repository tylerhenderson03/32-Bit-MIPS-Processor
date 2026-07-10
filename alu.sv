`timescale 1ns/1ns
// Arithmetic Logic Unit
// performs addition (CLA), subtraction, multiplication(?), LT/GT, EQ/NE
module alu #(parameter WIDTH) (input [WIDTH-1:0] in_a, in_b,
            input [3:0] alu_opcode,
            input [4:0] shamt_out,
            output logic zero_flag, overflow_flag,
            output logic [WIDTH-1:0] alu_result
            );
    logic [WIDTH:0] result_extended;

    assign zero_flag = (alu_result == '0);

    always_comb begin
        case(alu_opcode[3:0])
            4'b0000: begin // AND
                result_extended = 0;
                alu_result = in_a & in_b; 
                overflow_flag = 0;
            end
            4'b0001: begin // OR
                result_extended = 0;
                alu_result = (in_a | in_b);
                overflow_flag = 0;
            end
            4'b0010: begin // ADD (signed)
                result_extended = {in_a[WIDTH-1], in_a} + {in_b[WIDTH-1], in_b};
                alu_result      = result_extended[WIDTH-1:0];
                overflow_flag   = result_extended[WIDTH] ^ result_extended[WIDTH-1];
            end
            4'b0011: begin // ADDU (unsigned — same result, no overflow check)
                result_extended = 0;
                alu_result    = in_a + in_b;
                overflow_flag = 0;
            end
            4'b0110: begin // SUB (signed)
                result_extended = {in_a[WIDTH-1], in_a} - {in_b[WIDTH-1], in_b};
                alu_result      = result_extended[WIDTH-1:0];
                overflow_flag   = result_extended[WIDTH] ^ result_extended[WIDTH-1];
            end
            4'b1001: begin // SUBU (unsigned)
                result_extended = 0;
                alu_result    = in_a - in_b;
                overflow_flag = 0;
            end
            4'b1100: begin // NOR
                result_extended = 0;
                alu_result = ~(in_a | in_b); 
                overflow_flag = 0;
            end
            4'b0111: begin // SLT (signed)
                result_extended = 0;
                alu_result = ($signed(in_a) < $signed(in_b)) ? 32'd1 : 32'd0;
                overflow_flag = 0;
            end
            4'b1101: begin // SLTU (unsigned)
                result_extended = 0;
                alu_result = (in_a < in_b) ? 32'd1 : 32'd0;
                overflow_flag = 0;
            end
            4'b1110: begin // SLL (logical shift left)
                result_extended = 0;
                alu_result = in_b << shamt_out;
                overflow_flag = 0;
            end
            4'b1011: begin // SRL (logical shift right)
                result_extended = 0;
                alu_result = in_b >> shamt_out;
                overflow_flag = 0;
            end
            4'b1111: begin // MUL
                result_extended = 0;
                alu_result = in_a * in_b;
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
