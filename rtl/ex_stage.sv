`timescale 1ns/1ns
// ALU
// Forwarding unit logic
module ex_stage #(parameter WIDTH) (
    input reg [4:0] ex_ctrl, shamt_out,
    input reg [3:0] mem_ctrl_in,
    input reg [3:0] wb_ctrl_in,
    input reg [WIDTH-1:0] pc_incr_in, sgn_extend_out, rd_data_one, rd_data_two_in,
    input reg [4:0] rd_out, rt_out, rs_out,
    // inputs for forwarding logic
    input logic ex_mem_RegWrite, mem_wb_RegWrite,
    input reg [4:0] ex_mem_regRd, mem_wb_regRd,
    input wire [WIDTH-1:0] ex_mem_aluResult, wb_regData,

    output wire [3:0] mem_ctrl_out,
    output wire [3:0] wb_ctrl_out,
    output wire [WIDTH-1:0] pc_slt_add, alu_result, rd_data_two_out,
    output wire zero_flag, overflow_flag,
    output reg [4:0] reg_dst_mux
    );
// arithmetic operations
    localparam ALU_ADD  = 4'b0010;
    localparam ALU_ADDU = 4'b0011;
    localparam ALU_SUB  = 4'b0110;
    localparam ALU_SUBU = 4'b1000;
    localparam ALU_MULT = 4'b1111;
    localparam ALU_MULTU = 4'b1101;
    localparam ALU_DIV = 4'b0101;
    localparam ALU_DIVU = 4'b0100;

// bitwise, logical operators
    localparam ALU_AND  = 4'b0000;
    localparam ALU_OR   = 4'b0001;
    localparam ALU_NOR  = 4'b1100;

// comparison operators
    localparam ALU_SLT  = 4'b0111;
    localparam ALU_SLTU = 4'b1001;

// logical shifts
    localparam ALU_SLL  = 4'b1110;
    localparam ALU_SRL  = 4'b1011;

    logic [1:0] forwardA, forwardB;


// branch address arithmetic
    assign pc_slt_add = pc_incr_in + {sgn_extend_out[29:0], 2'b00};

// assign register write destination
    assign reg_dst_mux = ex_ctrl[3] ? rd_out : rt_out;

// pass wires through module
    assign rd_data_two_out = rd_data_two_in;
    assign mem_ctrl_out = mem_ctrl_in;
    assign wb_ctrl_out = wb_ctrl_in;

// instantiate forwarding unit here
    fwd_unit fwd_00 (.id_ex_regRs(rs_out), .id_ex_regRt(rt_out),
        .ex_mem_regRd(ex_mem_regRd), .ex_mem_RegWrite(ex_mem_RegWrite),
        .mem_wb_regRd(mem_wb_regRd), .mem_wb_RegWrite(mem_wb_RegWrite),
        
        .forwardA(forwardA), .forwardB(forwardB)
    );

/* "ex_ctrl" is 3 bits:
    [0] - ALUSrc
    [1] - ALUOp0
    [2] - ALUOp1
    [3] - RegDst
*/
    reg [3:0] alu_ctrl;

// ALU Input Control Logic
    //input reg [WIDTH-1:0] alu_buffered_a, alu_buffered_b;
    reg [WIDTH-1:0] alu_in_a, alu_in_b;
    //assign alu_buffered_a = rd_data_one;
    //assign alu_buffered_b = ex_ctrl[0] ? sgn_extend_out : rd_data_two_in;
    always_comb begin // input 'A'
        case(forwardA)
            2'b00: begin // input comes from register file (ID/EX)
                alu_in_a = rd_data_one;
            end
            2'b10: begin // input forwarded from prior ALU result (EX/MEM)
                alu_in_a = ex_mem_aluResult;
            end
            2'b01: begin // input forwarded from data memory or previous alu result (MEM/WB)
                alu_in_a = wb_regData;
            end
            default: begin
                alu_in_a = '0;
            end
        endcase
    end

    always_comb begin // input 'B'
        case(forwardB)
            2'b00: begin // input comes from register file (ID/EX)
                alu_in_b = ex_ctrl[0] ? sgn_extend_out : rd_data_two_in;
            end
            2'b10: begin // input forwarded from prior ALU result (EX/MEM)
                alu_in_b = ex_mem_aluResult;
            end
            2'b01: begin // input forwarded from data memory or previous alu result (MEM/WB)
                alu_in_b = wb_regData;
            end
            default: begin
                alu_in_b = '0;
            end
        endcase
    end

// ALU Control Logic
    always_comb begin
        case({ex_ctrl[4], ex_ctrl[2], ex_ctrl[1]})
            3'b000: begin // i-type - load word, store word
                alu_ctrl = ALU_ADD;
            end
            3'b001: begin // i-type - branch
                alu_ctrl = ALU_SUB;
                // expand this section 
            end
            3'b010: begin // r-type, has funct (function code) in lower 6 bits
                if(sgn_extend_out[5:0] == 6'b100000) alu_ctrl = ALU_ADD;
                else if(sgn_extend_out[5:0] == 6'h22) alu_ctrl = ALU_SUB;
                else if(sgn_extend_out[5:0] == 6'b100100) alu_ctrl = ALU_AND;
                else if(sgn_extend_out[5:0] == 6'b101010) alu_ctrl = ALU_SLT;
                else if(sgn_extend_out[5:0] == 6'b100001) alu_ctrl = ALU_ADDU;
                else if(sgn_extend_out[5:0] == 6'h23) alu_ctrl = ALU_SUBU;
                else if(sgn_extend_out[5:0] == 6'h18) alu_ctrl = ALU_MULT;
                else if(sgn_extend_out[5:0] == 6'h27) alu_ctrl = ALU_NOR;
                else if(sgn_extend_out[5:0] == 6'h25) alu_ctrl = ALU_OR;
                else if(sgn_extend_out[5:0] == 6'h2a) alu_ctrl = ALU_SLT;
                else if(sgn_extend_out[5:0] == 6'h2b) alu_ctrl = ALU_SLTU;
                else if(sgn_extend_out[5:0] == 6'h00) alu_ctrl = ALU_SLL;
                else if(sgn_extend_out[5:0] == 6'h02) alu_ctrl = ALU_SRL;
                else if(sgn_extend_out[5:0] == 6'h19) alu_ctrl = ALU_MULTU;
                //else if(sgn_extend_out[5:0] == 6'h1a) alu_ctrl = ALU_DIV;
                //else if(sgn_extend_out[5:0] == 6'h1b) alu_ctrl = ALU_DIVU;
                else alu_ctrl = '0;
            end
            3'b011: begin
                alu_ctrl = ALU_AND;
            end
            3'b100: begin
                alu_ctrl = ALU_OR;
            end
            3'b101: begin
                alu_ctrl = ALU_SLT;
            end
            3'b110: begin
                alu_ctrl = ALU_SLTU;
            end
            default: alu_ctrl = '0;
        endcase
    end

// ALU declaration
    alu #(.WIDTH(WIDTH), .ALU_ADD(ALU_ADD) , .ALU_ADDU(ALU_ADDU), .ALU_SUB(ALU_SUB), .ALU_SUBU(ALU_SUBU), .ALU_MULT(ALU_MULT), .ALU_MULTU(ALU_MULTU), .ALU_DIV(ALU_DIV), .ALU_DIVU(ALU_DIVU), .ALU_AND(ALU_AND), .ALU_OR(ALU_OR), .ALU_NOR(ALU_NOR), .ALU_SLT(ALU_SLT), .ALU_SLTU(ALU_SLTU), .ALU_SLL(ALU_SLL), .ALU_SRL(ALU_SRL)) alu_00 (.in_a(alu_in_a), .in_b(alu_in_b), .alu_opcode(alu_ctrl), .zero_flag(zero_flag), .overflow_flag(overflow_flag), .alu_result(alu_result), .shamt_out(shamt_out));



endmodule: ex_stage
