`timescale 1ns/1ns

module fwd_unit(
    input [4:0] id_ex_regRs, id_ex_regRt, ex_mem_regRd, mem_wb_regRd,
    input logic ex_mem_RegWrite, mem_wb_RegWrite,

    output [1:0] forwardA, forwardB
);

    always_comb begin
        // default values - read from register file
        forwardA = 2'b00;
        forwardB = 2'b00;
        // EX/MEM hazard
        if(ex_mem_RegWrite
                && (ex_mem_regRd != 0)
                && (ex_mem_regRd == id_ex_regRs)) begin
            forwardA = 2'b10;
        end
        // MEM/WB hazard — only if EX/MEM isn't already forwarding to same reg
        if (mem_wb_RegWrite
            && (mem_wb_regRd != 5'b0)
            && !(ex_mem_RegWrite && (ex_mem_regRd != 5'b0) && (ex_mem_regRd == id_ex_regRs))
            && (mem_wb_regRd == id_ex_regRs)) begin
            forwardA = 2'b01;
        end

            /*else if(mem_wb_RegWrite
                    && mem_wb_regRd != 0
                    && !(ex_mem_RegWrite && (ex_mem_regRd != 0) && (ex_mem_regRd != id_ex_regRs))
                    && mem_wb_regRd == id_ex_regRs) begin
                forwardA = 2'b01;
            end
            else if (mem_wb_RegWrite 
                    && (mem_wb_regRd != 0)
                    && (mem_wb_regRd == id_ex_regRs)) begin
                forwardA = 2'b01;
            end*/

        // EX/MEM hazard
        if(ex_mem_RegWrite
                && ex_mem_regRd != 0
                && ex_mem_regRd == id_ex_regRt) begin
            forwardB = 2'b10;
        end
        // MEM/WB hazard — only if EX/MEM isn't already forwarding to same reg
        if (mem_wb_RegWrite
            && (mem_wb_regRd != 5'b0)
            && !(ex_mem_RegWrite && (ex_mem_regRd != 5'b0) && (ex_mem_regRd == id_ex_regRt))
            && (mem_wb_regRd == id_ex_regRt)) begin
            forwardB = 2'b01;
        end

            /*else if(mem_wb_RegWrite
                    && mem_wb_regRd != 0
                    && !(ex_mem_RegWrite && (ex_mem_regRd != 0) && (ex_mem_regRd != id_ex_regRt))
                    && mem_wb_regRd == id_ex_regRt) begin
                forwardB = 2'b01;
            end
            else if (mem_wb_RegWrite 
                    && (mem_wb_regRd != 0)
                    && (mem_wb_regRd == id_ex_regRt)) begin
                forwardA = 2'b01
            end*/

    end



endmodule: fwd_unit
