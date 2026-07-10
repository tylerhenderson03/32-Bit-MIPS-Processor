`timescale 1ns/1ns

// Register Write-Back
module wb_stage #(parameter WIDTH) (
    input reg [WIDTH-1:0] mem_read_data, alu_result_out,
    input reg [3:0] wb_ctrl,
    input reg [4:0] wr_reg_dest_in,

    output wire [4:0] wr_reg_dest_out,
    output wire [WIDTH-1:0] wr_data,
    output logic RegWrite
    );

    logic [WIDTH-1:0] tempMemData;

/* "wb_ctrl" is 2 bits:
    [0] - MemToReg // 0 to write-back ALU result, 1 to write back data memory result (needs mem read enable)
    [1] - RegWrite // register write enable signal used during W.B.
    [2] - LoadSel0 // Load Instruction Select bits (for truncating outputs)
    [3] - LoadSel1
*/

// pass-through
    assign wr_reg_dest_out = wr_reg_dest_in;

// output control signal to ID
    assign RegWrite = wb_ctrl[1];

// data to be written back to register file
    assign tempMemData = wb_ctrl[0] ? mem_read_data : alu_result_out;
    always_comb begin
        case(wb_ctrl[3:2])
            2'b00: begin // default for lw and all other instructions, use full 32 bits
                wr_data = tempMemData;
            end
            2'b01: begin // load byte - lower 8 bits
                wr_data = {{24{1'b0}}, tempMemData[7:0]};
            end
            2'b10: begin // load half-word - lower 16 bits
                wr_data = {{16{1'b0}}, tempMemData[15:0]};
            end
            2'b11: begin // load upper - shifts left 16 bits
                wr_data = {tempMemData[15:0], {16{1'b0}}};
            end
        endcase
    end



endmodule: wb_stage
