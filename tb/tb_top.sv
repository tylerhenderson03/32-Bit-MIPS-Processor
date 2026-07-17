`timescale 1ns/1ns

/* verilator lint_off DECLFILENAME */
/* verilator lint_off UNUSEDSIGNAL */


module tb_top();
  parameter WIDTH = 32;
  parameter CLK_PERIOD = 10;
  parameter MAX_INSTRUCTIONS = 15;
/* verilator lint_off UNUSEDPARAM */
  parameter R_TYPE_OP = 6'd0;
    parameter ADD_FUNCT = 6'h20;
    parameter ADDU_FUNCT = 6'h21;
    parameter AND_FUNCT = 6'h24;
    parameter JR_FUNCT = 6'h08;
    parameter NOR_FUNCT = 6'h27;
    parameter OR_FUNCT = 6'h25;
    parameter SLT_FUNCT = 6'h2a;
    parameter SLTU_FUNCT = 6'h2b;
    parameter SLL_FUNCT = 6'h00;
    parameter SRL_FUNCT = 6'h02;
    parameter SUB_FUNCT = 6'h22;
    parameter SUBU_FUNCT = 6'h23;
  parameter ADDI_OP = 6'h8;
  parameter ADDIU_OP = 6'h9;
  parameter ANDI_OP = 6'hc;
  parameter BEQ_OP = 6'h4;
  parameter BNE_OP = 6'h5;
  parameter J_OP = 6'h2;
  parameter JAL_OP = 6'h3;
  parameter LBU_OP = 6'h24;
  parameter LHU_OP = 6'h25;
  parameter LUI_OP = 6'hf;
  parameter LW_OP = 6'h23;
  parameter ORI_OP = 6'hd;
  parameter SLTI_OP = 6'ha;
  parameter SLTIU_OP = 6'hb;
  parameter SB_OP = 6'h28;
  parameter SC_OP = 6'h38;
  parameter SH_OP = 6'h29;
  parameter SW_OP = 6'h2b;

localparam logic [4:0] R0  = 5'd0;
localparam logic [4:0] R1  = 5'd1;
localparam logic [4:0] R2  = 5'd2;
localparam logic [4:0] R3  = 5'd3;
localparam logic [4:0] R4  = 5'd4;
localparam logic [4:0] R5  = 5'd5;
localparam logic [4:0] R6  = 5'd6;
localparam logic [4:0] R7  = 5'd7;
localparam logic [4:0] R8  = 5'd8;
localparam logic [4:0] R9  = 5'd9;
localparam logic [4:0] R10 = 5'd10;
localparam logic [4:0] R11 = 5'd11;
localparam logic [4:0] R12 = 5'd12;
localparam logic [4:0] R13 = 5'd13;
localparam logic [4:0] R14 = 5'd14;
localparam logic [4:0] R15 = 5'd15;
localparam logic [4:0] R16 = 5'd16;
localparam logic [4:0] R17 = 5'd17;
localparam logic [4:0] R18 = 5'd18;
localparam logic [4:0] R19 = 5'd19;
localparam logic [4:0] R20 = 5'd20;
localparam logic [4:0] R21 = 5'd21;
localparam logic [4:0] R22 = 5'd22;
localparam logic [4:0] R23 = 5'd23;
localparam logic [4:0] R24 = 5'd24;
localparam logic [4:0] R25 = 5'd25;
localparam logic [4:0] R26 = 5'd26;
localparam logic [4:0] R27 = 5'd27;
localparam logic [4:0] R28 = 5'd28;
localparam logic [4:0] R29 = 5'd29;
localparam logic [4:0] R30 = 5'd30;
localparam logic [4:0] R31 = 5'd31;

// Supported MIPS opcodes
const logic [5:0] OPCODES [] = '{
    R_TYPE_OP,
    ADDI_OP,
    ADDIU_OP,
    ANDI_OP,
    BEQ_OP,
    BNE_OP,
    J_OP,
    JAL_OP,
    LBU_OP,
    LHU_OP,
    LUI_OP,
    LW_OP,
    ORI_OP,
    SLTI_OP,
    SLTIU_OP,
    SB_OP,
    SC_OP,
    SH_OP,
    SW_OP
};

// Supported R-type function codes
const logic [5:0] FUNCTS [] = '{
    ADD_FUNCT,
    ADDU_FUNCT,
    AND_FUNCT,
    JR_FUNCT,
    NOR_FUNCT,
    OR_FUNCT,
    SLT_FUNCT,
    SLTU_FUNCT,
    SLL_FUNCT,
    SRL_FUNCT,
    SUB_FUNCT,
    SUBU_FUNCT
};
/* verilator lint_on UNUSEDPARAM */

/* verilator lint_off UNUSEDSIGNAL */
  // R-type: op=0, rs, rt, rd, shamt, funct
  // write_r_type(.rs(), .rt(), .rd(), .shamt(), .funct());
  task automatic write_r_type(
      input logic [4:0] rs, rt, rd, shamt,
      input logic [5:0] funct
  );
    instruction_memory[NUM_INSTRUCTIONS] = {6'd0, rs, rt, rd, shamt, funct};
    NUM_INSTRUCTIONS += 1;
  endtask

  // I-type: opcode, rs, rt, imm
  // write_i_type(.opcode(), .rs(), .rt(), .imm());
  task automatic write_i_type(
      input logic [5:0] opcode,
      input logic [4:0] rs, rt,
      input logic [15:0] imm
  );
    instruction_memory[NUM_INSTRUCTIONS] = {opcode, rs, rt, imm};
    NUM_INSTRUCTIONS += 1;
  endtask

  // J-type: opcode, target address
  // write_j_type(.opcode(), .addr());
  task automatic write_j_type(
      input logic [5:0] opcode,
      input logic [25:0] addr
  );
    instruction_memory[NUM_INSTRUCTIONS] = {opcode, addr};
    NUM_INSTRUCTIONS += 1;
  endtask

  task automatic write_addBranchTest();
    // add r1, r2, r3
    write_r_type(.rs(R2), .rt(R3), .rd(R1), .shamt(5'd0), .funct(ADD_FUNCT));
    // add r2, r0, r15
    write_r_type(.rs(R0), .rt(R15), .rd(R2), .shamt(5'b00000), .funct(ADD_FUNCT));
    // beq r1, r3, 0
    write_i_type(.opcode(BNE_OP), .rs(R1), .rt(R3), .imm(16'd0));
    // add r3, r2, r3 uses old r2 value, new is in ex stage
    write_r_type(.rs(R2), .rt(R3), .rd(R3), .shamt(5'd0), .funct(ADD_FUNCT));
    // add r4, r2, r6 uses old r2 value, new is in mem
    write_r_type(.rs(R6), .rt(R2), .rd(R4), .shamt(5'd0), .funct(ADD_FUNCT));
    // add r5, r2, r5 should use new r2 value, r2 is W.B.
    write_r_type(.rs(R5), .rt(R2), .rd(R5), .shamt(5'd0), .funct(ADD_FUNCT));
    // beq r1, r3, 0
    write_i_type(.opcode(BEQ_OP), .rs(R1), .rt(R3), .imm(16'd0));
  endtask

/* verilator lint_on UNUSEDSIGNAL */

// inputs
  reg clk, rst;

// instantiate instruction memory
  logic [WIDTH-1:0] instruction_memory [MAX_INSTRUCTIONS-1:0]; 
  integer i = 0;
  integer NUM_INSTRUCTIONS;

initial begin
  NUM_INSTRUCTIONS = 0;
    // add instructions below to be executed by the CPU core, include comment for specific instruction
    write_i_type(.opcode(ADDI_OP), .rs(R0), .rt(R3), .imm(16'h0FFF)); // load first number to multiply
    write_i_type(.opcode(ADDI_OP), .rs(R0), .rt(R2), .imm(16'h0FFF)); // load second number to multiply

    write_i_type(.opcode(ADDI_OP), .rs(R0), .rt(R5), .imm(16'd16));
    write_i_type(.opcode(ADDI_OP), .rs(R0), .rt(R7), .imm(16'd0));
    write_i_type(.opcode(ANDI_OP), .rs(R2), .rt(R6), .imm(16'd1));
    write_i_type(.opcode(BEQ_OP), .rs(R6), .rt(R0), .imm(16'd1));
    write_r_type(.rs(R3), .rt(R7), .rd(R7), .shamt(5'd0), .funct(ADDU_FUNCT));
    write_r_type(.rs(5'd0), .rt(R3), .rd(R3), .shamt(5'd1), .funct(SLL_FUNCT));
    write_r_type(.rs(5'd0), .rt(R2), .rd(R2), .shamt(5'd1), .funct(SRL_FUNCT));
    write_i_type(.opcode(ADDI_OP), .rs(R5), .rt(R5), .imm((~16'd1 + 1'b1)));
    write_i_type(.opcode(BNE_OP), .rs(R0), .rt(R5), .imm((~16'd7 + 1'b1)));
    write_r_type(.rs(R0), .rt(R7), .rd(R4), .shamt(5'd0), .funct(ADDU_FUNCT));

      /*
      for(i = 7; i < MAX_INSTRUCTIONS; i++) begin
        instruction_memory[i] = '0; // load the rest of instruction memory with nop's
      end
      */
  end
  




/* verilator lint_off UNUSEDSIGNAL */

// IF outputs
  wire [WIDTH-1:0] if_pc_pp, if_inst;
// IF/ID pipeline registers
  wire [WIDTH-1:0] if_id_pcIncr, if_id_inst;
// ID outputs
  wire [4:0] id_regT, id_regD, id_regS;
  wire [4:0] id_exCtrl;
  wire [3:0] id_memCtrl;
  wire [3:0] id_wbCtrl;
  wire [WIDTH-1:0] id_pcIncr, id_sgnExt, id_rdDataOne, id_rdDataTwo;
  wire [WIDTH-1:0] reg_file_debug [0:32-1];
  wire id_PCJmp;
  wire [WIDTH-1:0] id_jump_addr;
  wire [4:0] id_shamt_out;
  wire if_id_write, PCWrite;
// ID/EX pipeline registers
  wire [4:0] id_ex_regT, id_ex_regD, id_ex_regS, id_ex_shamt_out;
  wire [4:0] id_ex_exCtrl;
  wire [3:0] id_ex_memCtrl;
  wire [3:0] id_ex_wbCtrl;
  wire [WIDTH-1:0] id_ex_pcIncr, id_ex_sgnExt, id_ex_rdDataOne, id_ex_rdDataTwo;
// EX outputs
  wire [4:0] ex_regDst;
  wire [3:0] ex_memCtrl;
  wire [3:0] ex_wbCtrl;
  wire ex_zeroFlag;
  wire ex_overflowFlag;
  wire [WIDTH-1:0] ex_aluResult, ex_rdDataTwo, ex_pcAdd;
// EX/MEM pipeline registers
  wire [4:0] ex_mem_regDst;
  wire [3:0] ex_mem_memCtrl;
  wire [3:0] ex_mem_wbCtrl;
  wire ex_mem_zeroFlag;
  wire [WIDTH-1:0] ex_mem_aluResult, ex_mem_rdDataTwo, ex_mem_pcAdd;
// MEM outputs
  wire mem_branchFlag;
  wire [WIDTH-1:0] mem_branchAddr;
  wire [3:0] mem_wbCtrl;
  wire [4:0] mem_regDst;
  wire [WIDTH-1:0] mem_memReadData, mem_aluResult;
// MEM/WB pipeline registers
  wire [3:0] mem_wb_wbCtrl;
  wire [4:0] mem_wb_regDst;
  wire [WIDTH-1:0] mem_wb_memReadData, mem_wb_aluResult;
// WB outputs 
  wire wb_regWrite;
  wire [4:0] wb_regDst;
  wire [WIDTH-1:0] wb_regData;
  /* verilator lint_on UNUSEDSIGNAL */

// module instantiation 
top #(.WIDTH(WIDTH), .MAX_INSTRUCTIONS(MAX_INSTRUCTIONS)) top_00 (
  .clk(clk), .rst(rst),
  .if_pc_pp(if_pc_pp), .if_inst(if_inst), .if_instruction_memory(instruction_memory),
  .if_id_pcIncr(if_id_pcIncr), .if_id_inst(if_id_inst),
  .id_regT(id_regT), .id_regD(id_regD), .id_regS(id_regS),
  .id_exCtrl(id_exCtrl), .id_memCtrl(id_memCtrl), .id_wbCtrl(id_wbCtrl),
  .id_pcIncr(id_pcIncr), .id_sgnExt(id_sgnExt), .id_PCJmp(id_PCJmp),
  .id_rdDataOne(id_rdDataOne), .id_rdDataTwo(id_rdDataTwo), .jump_addr(id_jump_addr),
  .id_shamt_out(id_shamt_out),
  .id_ex_regT(id_ex_regT), .id_ex_regD(id_ex_regD), .id_ex_regS(id_ex_regS),
  .id_ex_exCtrl(id_ex_exCtrl), .id_ex_memCtrl(id_ex_memCtrl), .id_ex_wbCtrl(id_ex_wbCtrl),
  .id_ex_pcIncr(id_ex_pcIncr), .id_ex_sgnExt(id_ex_sgnExt),
  .id_ex_rdDataOne(id_ex_rdDataOne), .id_ex_rdDataTwo(id_ex_rdDataTwo),
  .if_id_write(if_id_write), .PCWrite(PCWrite),
  .reg_file_debug(reg_file_debug), .id_ex_shamt_out(id_ex_shamt_out),
  .ex_regDst(ex_regDst), .ex_memCtrl(ex_memCtrl), .ex_wbCtrl(ex_wbCtrl),
  .ex_zeroFlag(ex_zeroFlag), .ex_overflowFlag(ex_overflowFlag),
  .ex_aluResult(ex_aluResult), .ex_rdDataTwo(ex_rdDataTwo), .ex_pcAdd(ex_pcAdd),
  .ex_mem_regDst(ex_mem_regDst), .ex_mem_memCtrl(ex_mem_memCtrl), .ex_mem_wbCtrl(ex_mem_wbCtrl),
  .ex_mem_zeroFlag(ex_mem_zeroFlag),
  .ex_mem_aluResult(ex_mem_aluResult), .ex_mem_rdDataTwo(ex_mem_rdDataTwo), .ex_mem_pcAdd(ex_mem_pcAdd),
  .mem_branchFlag(mem_branchFlag), .mem_branchAddr(mem_branchAddr), .mem_wbCtrl(mem_wbCtrl), .mem_regDst(mem_regDst),
  .mem_memReadData(mem_memReadData), .mem_aluResult(mem_aluResult),
  .mem_wb_wbCtrl(mem_wb_wbCtrl), .mem_wb_regDst(mem_wb_regDst),
  .mem_wb_memReadData(mem_wb_memReadData), .mem_wb_aluResult(mem_wb_aluResult),
  .wb_regWrite(wb_regWrite), .wb_regDst(wb_regDst), .wb_regData(wb_regData)
);

// clock 
  always #(CLK_PERIOD/2) clk = ~clk;

// stimulus
  initial begin
    clk = 0; rst = 1;
    #(CLK_PERIOD) rst = 0;
    #(10*CLK_PERIOD); // wait until counter value overrwrites current 0 value in register 
    do begin
      #(CLK_PERIOD); // check every clock cycle
    end while (reg_file_debug[5] != 0); // check until
    #(2*CLK_PERIOD);
    $display("Expected R7 = 0x%0h, Got R7 = 0x%0h", 
      32'h00FFE001, reg_file_debug[7]);
    $finish;

    // observe waveform during this period with sample instruction set
    // (instantiate inst. mem. through IF stage)
    #(180*CLK_PERIOD); // to allow pipeline to fully flush out previous instructions (assuming no backwards jumping/branches)
  end


// waveform
  initial begin
    $dumpfile("./vcd/tb_top.vcd");
    $dumpvars(0, tb_top);
    for (i = 0; i < 32; i++)
      $dumpvars(0, reg_file_debug[i]);
    /*$monitor("%t: clk %1b, rst %1b, if_pc_pp %32b, if_inst %32b, if_id_pcIncr %32b, if_id_inst %32b, id_regT %5b, id_regD %5b, id_pcIncr %32b, id_exCtrl %4b, id_memCtrl %3b, id_wbCtrl %2b, id_sgnExt %32b, id_rdDataOne %32b, id_rdDataTwo %32b, id_ex_regT %5b, id_ex_regD %5b, id_ex_pcIncr %32b, id_ex_exCtrl %4b, id_ex_memCtrl %3b, id_ex_wbCtrl %2b, id_ex_sgnExt %32b, id_ex_rdDataOne %32b, id_ex_rdDataTwo %32b, ex_regDst %5b, ex_memCtrl %3b, ex_wbCtrl %2b, ex_zeroFlag %1b, ex_aluResult %32b, ex_rdDataTwo %32b, ex_pcAdd %32b, ex_mem_regDst %5b, ex_mem_memCtrl %3b, ex_mem_wbCtrl %2b, ex_mem_zeroFlag %1b, ex_mem_aluResult %32b, ex_mem_rdDataTwo %32b, ex_mem_pcAdd %32b, mem_branchFlag %1b, mem_branchAddr %32b, mem_wbCtrl %2b, mem_regDst %5b, mem_memReadData %32b, mem_aluResult %32b, mem_wb_wbCtrl %2b, mem_wb_regDst %5b, mem_wb_memReadData %32b, mem_wb_aluResult %32b, wb_regWrite %1b, wb_regDst %5b, wb_regData %32b | R0=%0h | R1=%0h | R2=%0h | R3=%0h | R4=%0h | R5=%0h | R6=%0h | R7=%0h | R8=%0h | R9=%0h | R10=%0h | R11=%0h | R12=%0h | R13=%0h | R14=%0h | R15=%0h | R16=%0h | R17=%0h | R18=%0h | R19=%0h | R20=%0h | R21=%0h | R22=%0h | R23=%0h | R24=%0h | R25=%0h | R26=%0h | R27=%0h | R28=%0h | R29=%0h | R30=%0h | R31=%0h",
          $time, clk, rst, if_pc_pp, if_inst, if_id_pcIncr, if_id_inst, id_regT, id_regD, id_pcIncr, id_exCtrl, id_memCtrl, id_wbCtrl, id_sgnExt, id_rdDataOne, id_rdDataTwo, id_ex_regT, id_ex_regD, id_ex_pcIncr, id_ex_exCtrl, id_ex_memCtrl, id_ex_wbCtrl, id_ex_sgnExt, id_ex_rdDataOne, id_ex_rdDataTwo, ex_regDst, ex_memCtrl, ex_wbCtrl, ex_zeroFlag, ex_aluResult, ex_rdDataTwo, ex_pcAdd, ex_mem_regDst, ex_mem_memCtrl, ex_mem_wbCtrl, ex_mem_zeroFlag, ex_mem_aluResult, ex_mem_rdDataTwo, ex_mem_pcAdd, mem_branchFlag, mem_branchAddr, mem_wbCtrl, mem_regDst, mem_memReadData, mem_aluResult, mem_wb_wbCtrl, mem_wb_regDst, mem_wb_memReadData, mem_wb_aluResult, wb_regWrite, wb_regDst, wb_regData,
          reg_file_debug[0],  reg_file_debug[1],  reg_file_debug[2],  reg_file_debug[3],
          reg_file_debug[4],  reg_file_debug[5],  reg_file_debug[6],  reg_file_debug[7],
          reg_file_debug[8],  reg_file_debug[9],  reg_file_debug[10], reg_file_debug[11],
          reg_file_debug[12], reg_file_debug[13], reg_file_debug[14], reg_file_debug[15],
          reg_file_debug[16], reg_file_debug[17], reg_file_debug[18], reg_file_debug[19],
          reg_file_debug[20], reg_file_debug[21], reg_file_debug[22], reg_file_debug[23],
          reg_file_debug[24], reg_file_debug[25], reg_file_debug[26], reg_file_debug[27],
          reg_file_debug[28], reg_file_debug[29], reg_file_debug[30], reg_file_debug[31]);
          */
  end

endmodule: tb_top

/* verilator lint_on UNUSEDSIGNAL */
/* verilator lint_on DECLFILENAME */
