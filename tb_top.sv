`timescale 1ns/1ns
module tb_top();
  parameter WIDTH = 32;
  parameter CLK_PERIOD = 10;
  parameter NUM_INSTRUCTIONS = 32;

// inputs
  reg clk, rst;


// IF instruction memory
  logic [WIDTH-1:0] instruction_memory [NUM_INSTRUCTIONS-1:0]; 
  integer i = 0;
  initial begin
  // add instructions below to be executed by the CPU core, include comment for context
    instruction_memory[0] = 32'b000000_00011_00010_00001_00000_100000; // add r1, r2, r3
    instruction_memory[1] = 32'b100011_10100_10000_00000_00000_000100; // lw r16, 4(r20)
    instruction_memory[2] = 32'b101011_10100_10000_00000_00000_000100; // sw r16, 4(r20)
    instruction_memory[3] = 32'b000100_00001_00101_00000_00000_000111; // beq r1, r5, 7
    instruction_memory[4] = 32'b000100_00001_01111_00000_00000_000111; // beq r1, r15, 7
    for(i = 5; i < NUM_INSTRUCTIONS; i++) begin
      instruction_memory[i] = '0; // load the rest of instruction memory with nop's
    end
  end
// IF outputs
  wire [WIDTH-1:0] if_pc_pp, if_inst;
// IF/ID pipeline registers
  wire [WIDTH-1:0] if_id_pcIncr, if_id_inst;
// ID outputs
  wire [4:0] id_regT, id_regD;
  wire [3:0] id_exCtrl;
  wire [2:0] id_memCtrl;
  wire [1:0] id_wbCtrl;
  wire [WIDTH-1:0] id_pcIncr, id_sgnExt, id_rdDataOne, id_rdDataTwo;
  /* verilator lint_off UNUSEDSIGNAL */
  wire [WIDTH-1:0] reg_file_debug [0:32-1];
  /* verilator lint_on UNUSEDSIGNAL */
// ID/EX pipeline registers
  wire [4:0] id_ex_regT, id_ex_regD;
  wire [3:0] id_ex_exCtrl;
  wire [2:0] id_ex_memCtrl;
  wire [1:0] id_ex_wbCtrl;
  wire [WIDTH-1:0] id_ex_pcIncr, id_ex_sgnExt, id_ex_rdDataOne, id_ex_rdDataTwo;
// EX outputs
  wire [4:0] ex_regDst;
  wire [2:0] ex_memCtrl;
  wire [1:0] ex_wbCtrl;
  wire ex_zeroFlag;
  wire [WIDTH-1:0] ex_aluResult, ex_rdDataTwo, ex_pcAdd;
// EX/MEM pipeline registers
  wire [4:0] ex_mem_regDst;
  wire [2:0] ex_mem_memCtrl;
  wire [1:0] ex_mem_wbCtrl;
  wire ex_mem_zeroFlag;
  wire [WIDTH-1:0] ex_mem_aluResult, ex_mem_rdDataTwo, ex_mem_pcAdd;
// MEM outputs
  wire mem_branchFlag;
  wire [WIDTH-1:0] mem_branchAddr;
  wire [1:0] mem_wbCtrl;
  wire [4:0] mem_regDst;
  wire [WIDTH-1:0] mem_memReadData, mem_aluResult;
// MEM/WB pipeline registers
  wire [1:0] mem_wb_wbCtrl;
  wire [4:0] mem_wb_regDst;
  wire [WIDTH-1:0] mem_wb_memReadData, mem_wb_aluResult;
// WB outputs 
  wire wb_regWrite;
  wire [4:0] wb_regDst;
  wire [WIDTH-1:0] wb_regData;

// module instantiation 
top #(.WIDTH(WIDTH)) top_00 (
  .clk(clk), .rst(rst),
  .if_pc_pp(if_pc_pp), .if_inst(if_inst), .if_instruction_memory(instruction_memory),
  .if_id_pcIncr(if_id_pcIncr), .if_id_inst(if_id_inst),
  .id_regT(id_regT), .id_regD(id_regD),
  .id_exCtrl(id_exCtrl), .id_memCtrl(id_memCtrl), .id_wbCtrl(id_wbCtrl),
  .id_pcIncr(id_pcIncr), .id_sgnExt(id_sgnExt),
  .id_rdDataOne(id_rdDataOne), .id_rdDataTwo(id_rdDataTwo),
  .id_ex_regT(id_ex_regT), .id_ex_regD(id_ex_regD),
  .id_ex_exCtrl(id_ex_exCtrl), .id_ex_memCtrl(id_ex_memCtrl), .id_ex_wbCtrl(id_ex_wbCtrl),
  .id_ex_pcIncr(id_ex_pcIncr), .id_ex_sgnExt(id_ex_sgnExt),
  .id_ex_rdDataOne(id_ex_rdDataOne), .id_ex_rdDataTwo(id_ex_rdDataTwo),
  .reg_file_debug(reg_file_debug),
  .ex_regDst(ex_regDst), .ex_memCtrl(ex_memCtrl), .ex_wbCtrl(ex_wbCtrl),
  .ex_zeroFlag(ex_zeroFlag),
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

    // observe waveform during this period with sample instruction set
    // (instantiate inst. mem. through IF stage)

    #(10*CLK_PERIOD) $finish;

  end


// waveform
  initial begin
    $dumpfile("tb_top.vcd");
    $dumpvars(0, tb_top);
    for (i = 0; i < 32; i++)
      $dumpvars(0, reg_file_debug[i]);
    $monitor("%t: clk %1b, rst %1b, if_pc_pp %32b, if_inst %32b, if_id_pcIncr %32b, if_id_inst %32b, id_regT %5b, id_regD %5b, id_pcIncr %32b, id_exCtrl %4b, id_memCtrl %3b, id_wbCtrl %2b, id_sgnExt %32b, id_rdDataOne %32b, id_rdDataTwo %32b, id_ex_regT %5b, id_ex_regD %5b, id_ex_pcIncr %32b, id_ex_exCtrl %4b, id_ex_memCtrl %3b, id_ex_wbCtrl %2b, id_ex_sgnExt %32b, id_ex_rdDataOne %32b, id_ex_rdDataTwo %32b, ex_regDst %5b, ex_memCtrl %3b, ex_wbCtrl %2b, ex_zeroFlag %1b, ex_aluResult %32b, ex_rdDataTwo %32b, ex_pcAdd %32b, ex_mem_regDst %5b, ex_mem_memCtrl %3b, ex_mem_wbCtrl %2b, ex_mem_zeroFlag %1b, ex_mem_aluResult %32b, ex_mem_rdDataTwo %32b, ex_mem_pcAdd %32b, mem_branchFlag %1b, mem_branchAddr %32b, mem_wbCtrl %2b, mem_regDst %5b, mem_memReadData %32b, mem_aluResult %32b, mem_wb_wbCtrl %2b, mem_wb_regDst %5b, mem_wb_memReadData %32b, mem_wb_aluResult %32b, wb_regWrite %1b, wb_regDst %5b, wb_regData %32b | R0=%0h | R1=%0h | R2=%0h | R3=%0h | R4=%0h | R5=%0h | R6=%0h | R7=%0h | R8=%0h | R9=%0h | R10=%0h | R11=%0h | R12=%0h | R13=%0h | R14=%0h | R15=%0h | R16=%0h | R17=%0h | R18=%0h | R19=%0h | R20=%0h | R21=%0h | R22=%0h | R23=%0h | R24=%0h | R25=%0h | R26=%0h | R27=%0h | R28=%0h | R29=%0h | R30=%0h | R31=%0h",
          $time, clk, rst, if_pc_pp, if_inst, if_id_pcIncr, if_id_inst, id_regT, id_regD, id_pcIncr, id_exCtrl, id_memCtrl, id_wbCtrl, id_sgnExt, id_rdDataOne, id_rdDataTwo, id_ex_regT, id_ex_regD, id_ex_pcIncr, id_ex_exCtrl, id_ex_memCtrl, id_ex_wbCtrl, id_ex_sgnExt, id_ex_rdDataOne, id_ex_rdDataTwo, ex_regDst, ex_memCtrl, ex_wbCtrl, ex_zeroFlag, ex_aluResult, ex_rdDataTwo, ex_pcAdd, ex_mem_regDst, ex_mem_memCtrl, ex_mem_wbCtrl, ex_mem_zeroFlag, ex_mem_aluResult, ex_mem_rdDataTwo, ex_mem_pcAdd, mem_branchFlag, mem_branchAddr, mem_wbCtrl, mem_regDst, mem_memReadData, mem_aluResult, mem_wb_wbCtrl, mem_wb_regDst, mem_wb_memReadData, mem_wb_aluResult, wb_regWrite, wb_regDst, wb_regData,
          reg_file_debug[0],  reg_file_debug[1],  reg_file_debug[2],  reg_file_debug[3],
          reg_file_debug[4],  reg_file_debug[5],  reg_file_debug[6],  reg_file_debug[7],
          reg_file_debug[8],  reg_file_debug[9],  reg_file_debug[10], reg_file_debug[11],
          reg_file_debug[12], reg_file_debug[13], reg_file_debug[14], reg_file_debug[15],
          reg_file_debug[16], reg_file_debug[17], reg_file_debug[18], reg_file_debug[19],
          reg_file_debug[20], reg_file_debug[21], reg_file_debug[22], reg_file_debug[23],
          reg_file_debug[24], reg_file_debug[25], reg_file_debug[26], reg_file_debug[27],
          reg_file_debug[28], reg_file_debug[29], reg_file_debug[30], reg_file_debug[31]);
  end

endmodule: tb_top
