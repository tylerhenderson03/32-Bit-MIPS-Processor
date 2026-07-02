`timescale 1ns/1ns
// ALU
// Forwarding unit logic
module ex_stage #(parameter WIDTH) (
    input reg [3:0] ex_ctrl,
    input reg [2:0] mem_ctrl_in,
    input reg [1:0] wb_ctrl_in,
    input reg [WIDTH-1:0] pc_incr_in, sgn_extend_out, rd_data_one, rd_data_two_in,
    input reg [4:0] rd_out, rt_out,

    output wire [2:0] mem_ctrl_out,
    output wire [1:0] wb_ctrl_out,
    output wire [WIDTH-1:0] pc_slt_add, alu_result, rd_data_two_out,
    output wire zero_flag,
    output reg [4:0] reg_dst_mux
    );
// branch address arithmetic
    assign pc_slt_add = pc_incr_in + {sgn_extend_out[29:0], 2'b00};

// assign register write destination
    assign reg_dst_mux = ex_ctrl[3] ? rd_out : rt_out;

// pass wires through module
    assign rd_data_two_out = rd_data_two_in;
    assign mem_ctrl_out = mem_ctrl_in;
    assign wb_ctrl_out = wb_ctrl_in;

// instantiate forwarding unit here
    //fwd_unit (.WIDTH(WIDTH)) forward_exStage_00 ();

/* "ex_ctrl" is 3 bits:
    [0] - ALUSrc
    [1] - ALUOp0
    [2] - ALUOp1
    [3] - RegDst
*/
    reg [3:0] alu_ctrl;
// ALU Control Logic
    always_comb begin
        case({ex_ctrl[2], ex_ctrl[1]})
            2'b00: begin // load word, store word
                alu_ctrl = 4'b0010;
            end
            2'b01: begin // branch equal
                alu_ctrl = 4'b0110;
            end
            2'b10: begin // r-type
                if(sgn_extend_out[5:0] == 6'b100000) alu_ctrl = 4'b0010;
                else if(sgn_extend_out[5:0] == 6'b100010) alu_ctrl = 4'b0110;
                else if(sgn_extend_out[5:0] == 6'b100100) alu_ctrl = 4'b0000;
                else if(sgn_extend_out[5:0] == 6'b100101) alu_ctrl = 4'b0001;
                else if(sgn_extend_out[5:0] == 6'b101010) alu_ctrl = 4'b0111;
                else alu_ctrl = '0;
            end
            //2'b11: begin
            //end
            default: alu_ctrl = '0;
        endcase
    end

// ALU declaration
    alu #(.WIDTH(WIDTH)) alu_00 (.in_a(rd_data_one), .in_b(ex_ctrl[0] ? sgn_extend_out : rd_data_two_in), .alu_opcode(alu_ctrl), .zero_flag(zero_flag), .alu_result(alu_result));



endmodule: ex_stage
