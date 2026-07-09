`timescale 1ns/1ns
// Arithmetic Logic Unit
// performs addition (CLA), subtraction, multiplication(?), LT/GT, EQ/NE
module alu #(parameter WIDTH) (input [WIDTH-1:0] in_a, in_b,
            input [3:0] alu_opcode,

            output logic zero_flag, overflow_flag, lessThan_flag,
            output logic [WIDTH-1:0] alu_result
            );
    logic [WIDTH:0] result_extended;

    assign zero_flag = (alu_result == '0);

    always_comb begin
        case(alu_opcode[3:0])
            4'b0000: begin // AND
                alu_result = in_a & in_b; 
            end
            4'b0001: begin // OR
                alu_result = in_a | in_b; 
            end
            4'b0010: begin // ADD (signed)
                result_extended = {in_a[WIDTH-1], in_a} + {in_b[WIDTH-1], in_b};
                alu_result      = result_extended[WIDTH-1:0];
                overflow_flag   = result_extended[WIDTH] ^ result_extended[WIDTH-1];
            end
            4'b0011: begin // ADDU (unsigned — same result, no overflow check)
                alu_result    = in_a + in_b;
                overflow_flag = 0;
            end
            4'b0110: begin // SUB (signed)
                result_extended = {in_a[WIDTH-1], in_a} - {in_b[WIDTH-1], in_b};
                alu_result      = result_extended[WIDTH-1:0];
                overflow_flag   = result_extended[WIDTH] ^ result_extended[WIDTH-1];
            end
            4'b0111: begin // SUBU (unsigned)
                alu_result    = in_a - in_b;
                overflow_flag = 0;
            end
            4'b0111: begin // set-on-less-than
                lessThan_flag = in_a < in_b; // in_a is data at regRs, in_b is regRt
            end
            4'b1100: begin // NOR
                alu_result = ~(in_a | in_b); 
            end
            4'b1111: begin // MUL
                alu_result = in_a * in_b;
            end
            default: alu_result = '0;
        endcase
    end


endmodule: alu
