`timescale 1ns/1ns
// Arithmetic Logic Unit
// performs addition (CLA), subtraction, multiplication(?), LT/GT, EQ/NE
module alu #(parameter WIDTH) (input [WIDTH-1:0] in_a, in_b,
            input [3:0] alu_opcode,

            output logic zero_flag,
            output logic [WIDTH-1:0] alu_result
            );

    assign zero_flag = (alu_result == '0);

    always_comb begin
        case(alu_opcode[3:0])
            4'b0000: begin // AND
                alu_result = in_a & in_b; 
            end
            4'b0001: begin // OR
                alu_result = in_a | in_b; 

            end
            4'b0010: begin // add
                alu_result = in_a + in_b; 

            end
            4'b0110: begin // subtract
                alu_result = in_a - in_b; 
            end
            //4'b0111: begin // set-on-less-than
            //end
            4'b1100: begin // NOR
                alu_result = ~(in_a | in_b); 
            end
            4'b1111: begin // MUL...?
                alu_result = in_a * in_b;
            end
            default: alu_result = '0;
        endcase
    end


endmodule: alu
