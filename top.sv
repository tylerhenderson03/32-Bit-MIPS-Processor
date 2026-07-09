`timescale 1ns/1ns
module top #(parameter WIDTH = 32) (
    input wire clk, rst,
    input [WIDTH-1:0] if_instruction_memory[0:31], // for 32 instructions

// IF outputs
    output wire [WIDTH-1:0] if_pc_pp, if_inst,
// IF/ID pipeline registers
    output reg [WIDTH-1:0] if_id_pcIncr, if_id_inst,
// ID outputs
    output wire [4:0] id_regT, id_regD,
    output wire [4:0] id_exCtrl,
    output wire [3:0] id_memCtrl,
    output wire [1:0] id_wbCtrl,
    output wire [WIDTH-1:0] id_pcIncr, id_sgnExt, id_rdDataOne, id_rdDataTwo,
    output wire [WIDTH-1:0] reg_file_debug [0:32-1],
// ID/EX pipeline registers
    output reg [4:0] id_ex_regT, id_ex_regD,
    output reg [4:0] id_ex_exCtrl,
    output reg [3:0] id_ex_memCtrl,
    output reg [1:0] id_ex_wbCtrl,
    output reg [WIDTH-1:0] id_ex_pcIncr, id_ex_sgnExt, id_ex_rdDataOne, id_ex_rdDataTwo,
// EX outputs
    output wire [4:0] ex_regDst,
    output wire [3:0] ex_memCtrl,
    output wire [1:0] ex_wbCtrl,
    output wire ex_zeroFlag,
    output wire [WIDTH-1:0] ex_aluResult, ex_rdDataTwo, ex_pcAdd,
// EX/MEM pipeline registers
    output reg [4:0] ex_mem_regDst,
    output reg [3:0] ex_mem_memCtrl,
    output reg [1:0] ex_mem_wbCtrl,
    output reg ex_mem_zeroFlag,
    output reg [WIDTH-1:0] ex_mem_aluResult, ex_mem_rdDataTwo, ex_mem_pcAdd,
// MEM outputs
    output wire mem_branchFlag,
    output wire [WIDTH-1:0] mem_branchAddr,
    output wire [1:0] mem_wbCtrl,
    output wire [4:0] mem_regDst,
    output wire [WIDTH-1:0] mem_memReadData, mem_aluResult,
// MEM/WB pipeline registers
    output reg [1:0] mem_wb_wbCtrl,
    output reg [4:0] mem_wb_regDst,
    output reg [WIDTH-1:0] mem_wb_memReadData, mem_wb_aluResult,
// WB outputs
    output wire wb_regWrite,
    output wire [4:0] wb_regDst,
    output wire [WIDTH-1:0] wb_regData
);

// IF/ID pipeline registers
    always_ff @(posedge clk or posedge rst) begin
        if(rst) begin
            if_id_pcIncr <= '0;
            if_id_inst   <= 'X;
        /* end else if(if_id_write) begin // in the event of a stall, preserve previous instruction state in this stage of processor
            if_id_pcIncr <= if_id_pcIncr;
            if_id_inst   <= if_id_inst;
        */
        end else begin
            if_id_pcIncr <= if_pc_pp;
            if_id_inst   <= if_inst;
        end
    end

// ID/EX pipeline registers
    always_ff @(posedge clk or posedge rst) begin
        if(rst) begin
            id_ex_regT      <= '0; id_ex_regD      <= '0;
            id_ex_exCtrl    <= '0; id_ex_memCtrl   <= '0; id_ex_wbCtrl    <= '0;
            id_ex_pcIncr    <= '0; id_ex_sgnExt    <= '0;
            id_ex_rdDataOne <= '0; id_ex_rdDataTwo <= '0;
        end else begin
            id_ex_regT      <= id_regT;     id_ex_regD      <= id_regD;
            id_ex_exCtrl    <= id_exCtrl;   id_ex_memCtrl   <= id_memCtrl;
            id_ex_wbCtrl    <= id_wbCtrl;   id_ex_pcIncr    <= id_pcIncr;
            id_ex_sgnExt    <= id_sgnExt;   id_ex_rdDataOne <= id_rdDataOne;
            id_ex_rdDataTwo <= id_rdDataTwo;
        end
    end

// EX/MEM pipeline registers
    always_ff @(posedge clk or posedge rst) begin
        if(rst) begin
            ex_mem_regDst    <= '0; ex_mem_memCtrl   <= '0; ex_mem_wbCtrl   <= '0;
            ex_mem_zeroFlag  <= '0; ex_mem_aluResult <= '0;
            ex_mem_rdDataTwo <= '0; ex_mem_pcAdd     <= '0;
        end else begin
            ex_mem_regDst    <= ex_regDst;    ex_mem_memCtrl   <= ex_memCtrl;
            ex_mem_wbCtrl    <= ex_wbCtrl;    ex_mem_zeroFlag  <= ex_zeroFlag;
            ex_mem_aluResult <= ex_aluResult; ex_mem_rdDataTwo <= ex_rdDataTwo;
            ex_mem_pcAdd     <= ex_pcAdd;
        end
    end

// MEM/WB pipeline registers
    always_ff @(posedge clk or posedge rst) begin
        if(rst) begin
            mem_wb_wbCtrl      <= '0; mem_wb_regDst      <= '0;
            mem_wb_memReadData <= '0; mem_wb_aluResult   <= '0;
        end else begin
            mem_wb_wbCtrl      <= mem_wbCtrl;      mem_wb_regDst      <= mem_regDst;
            mem_wb_memReadData <= mem_memReadData;  mem_wb_aluResult   <= mem_aluResult;
        end
    end

// module instantiations
    if_stage #(.WIDTH(WIDTH)) if_top (
        .clk(clk), .rst(rst),
        .instruction_memory(if_instruction_memory),
        .PCSrc(mem_branchFlag),
        .pc_br(mem_branchAddr),
        .pc_pp(if_pc_pp),
        .inst_mem_out(if_inst)
    );
    id_stage #(.WIDTH(WIDTH)) id_top (
        .clk(clk),
        .rst(rst),
        .if_out(if_id_inst),
        .pc_incr_in(if_id_pcIncr),
        .wr_reg(wb_regDst),
        .wr_data(wb_regData),
        .RegWrite(wb_regWrite),
        .ex_ctrl(id_exCtrl),
        .mem_ctrl(id_memCtrl),
        .wb_ctrl(id_wbCtrl),
        .pc_incr_out(id_pcIncr),
        .sgn_extend_out(id_sgnExt),
        .rd_data_one(id_rdDataOne), .rd_data_two(id_rdDataTwo),
        .rd_out(id_regD), .rt_out(id_regT),
        .register_file(reg_file_debug)
    );
    ex_stage #(.WIDTH(WIDTH)) ex_top (
        .ex_ctrl(id_ex_exCtrl),
        .mem_ctrl_in(id_ex_memCtrl),
        .wb_ctrl_in(id_ex_wbCtrl),
        .pc_incr_in(id_ex_pcIncr),
        .sgn_extend_out(id_ex_sgnExt),
        .rd_data_one(id_ex_rdDataOne),
        .rd_data_two_in(id_ex_rdDataTwo),
        .rd_out(id_ex_regD), .rt_out(id_ex_regT),
        .mem_ctrl_out(ex_memCtrl),
        .wb_ctrl_out(ex_wbCtrl),
        .pc_slt_add(ex_pcAdd),
        .alu_result(ex_aluResult),
        .rd_data_two_out(ex_rdDataTwo),
        .zero_flag(ex_zeroFlag),
        .reg_dst_mux(ex_regDst)
    );
    mem_stage #(.WIDTH(WIDTH)) mem_top (
        .clk(clk), .rst(rst),
        .zero_flag(ex_mem_zeroFlag),
        .mem_ctrl(ex_mem_memCtrl),
        .wb_ctrl_in(ex_mem_wbCtrl),
        .alu_result(ex_mem_aluResult),
        .rd_data_two_out(ex_mem_rdDataTwo),
        .pc_slt_add(ex_mem_pcAdd),
        .reg_dst_mux(ex_mem_regDst),
        .branch_flag(mem_branchFlag),
        .mem_read_data(mem_memReadData),
        .branch_addr(mem_branchAddr),
        .alu_result_out(mem_aluResult),
        .wb_ctrl_out(mem_wbCtrl),
        .wr_reg_dest_out(mem_regDst)
    );
    wb_stage #(.WIDTH(WIDTH)) wb_top (
        .mem_read_data(mem_wb_memReadData),
        .alu_result_out(mem_wb_aluResult),
        .wb_ctrl(mem_wb_wbCtrl),
        .wr_reg_dest_in(mem_wb_regDst),
        .wr_reg_dest_out(wb_regDst),
        .wr_data(wb_regData),
        .RegWrite(wb_regWrite)
    );

endmodule: top
