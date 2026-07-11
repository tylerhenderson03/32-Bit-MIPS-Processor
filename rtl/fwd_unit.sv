`timescale 1ns/1ns

module fwd_unit(
    input [4:0] id_ex_regRs, id_ex_regRt, ex_mem_regRd, mem_wb_regRd, ex_mem_RegWrite, mem_wb_RegWrite,

    output [1:0] forwardA, forwardB
);

    always_comb begin
        if(ex_mem_RegWrite
                && ex_mem_regRd ~= 0
                && ex_mem_regRd == id_ex_regRs) begin
            forwardB = 2'b10;
        end
        else if(mem_wb_RegWrite
                && mem_wb_regRd ~= 0
                && ~(em_mem_RegWrite && ex_mem_regRd ~= 0)
                && ex_mem_regRd ~= id_ex_regRs
                && mem_wb_regRd == id_ex_regRs) begin
            forwardB = 01;
        end
        else begin
            forwardA = 2'b00;
        end

        if(ex_mem_RegWrite
                && ex_mem_regRd != 0
                && ex_mem_regRd == id_ex_regRt) begin
            forwardB = 2'b10;
        end
        else if(mem_wb_RegWrite
                && mem_wb_regRd ~= 0
                && ~(em_mem_RegWrite && ex_mem_regRd ~= 0)
                && ex_mem_regRd ~= id_ex_regRs
                && mem_wb_regRd == id_ex_regRt) begin
            forwardB = 2'b01;
        end
        else begin
            forwardB = 2'b00;
        end
    end



endmodule: fwd_unit