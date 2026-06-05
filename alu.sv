// Arithmetic Logic Unit
// performs addition (CLA), subtraction, multiplication(?), LT/GT, EQ/NE


module alu( input [WIDTH-1:0] in_a, in_b,
            input [3:0] alu_opcode,
            output zero_flag,
            output wire [WIDTH-1:0] alu_out
            );

case(alu_opcode)
    0000: begin // AND
        assign alu_out = in_a & in_b; 
    end
    0001: begin // OR
        assign alu_out = in_a | in_b; 

    end
    0010: begin // add
        assign alu_out = in_a + in_b; 

    end
    0110: begin // subtract

    end
    0111: begin // set-on-less-than
    
    end
    1100: begin // NOR
    
    end
    1111: begin // MUL?
    
    end


endmodule: alu
