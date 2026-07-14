`timescale 1ns/1ns

module hazard_detection(
    input logic id_ex_MemRead,
    input logic [4:0] id_ex_regRt, 
    input logic [4:0] if_id_regRs, if_id_regRt,

    output logic PCWrite,
    output logic if_id_write,
    output logic flushCtrlSignals
);

    always_comb begin
        if( id_ex_MemRead                       // make sure the current instruction is a "load" inst.
            && (id_ex_regRt == if_id_regRs      // check if destination reg of load matches ...
                || id_ex_regRt == if_id_regRt)  // ...either source reg in next instruction
        ) begin
            // stall the instruction
            flushCtrlSignals = 1'b1;
            PCWrite = 1'b1;
            if_id_write = 1'b1;
        end
        else begin
            flushCtrlSignals = 1'b0;
            PCWrite = 1'b0;
            if_id_write = 1'b0;
        end
    end


endmodule: hazard_detection
