`timescale 1ns/1ns
module tb_top();
  parameter WIDTH = 32;
  parameter CLK_PERIOD = 10;

// ── inputs ───────────────────────────────────────────────────────────
  reg clk, rst;

// ── IF outputs ───────────────────────────────────────────────────────
  wire [WIDTH-1:0] if_pc_pp, if_inst;
// ── IF/ID pipeline registers ─────────────────────────────────────────
  wire [WIDTH-1:0] if_id_pcIncr, if_id_inst;
// ── ID outputs ───────────────────────────────────────────────────────
  wire [4:0] id_regT, id_regD;
  wire [3:0] id_exCtrl;
  wire [2:0] id_memCtrl;
  wire [1:0] id_wbCtrl;
  wire [WIDTH-1:0] id_pcIncr, id_sgnExt, id_rdDataOne, id_rdDataTwo;
// ── ID/EX pipeline registers ─────────────────────────────────────────
  wire [4:0] id_ex_regT, id_ex_regD;
  wire [3:0] id_ex_exCtrl;
  wire [2:0] id_ex_memCtrl;
  wire [1:0] id_ex_wbCtrl;
  wire [WIDTH-1:0] id_ex_pcIncr, id_ex_sgnExt, id_ex_rdDataOne, id_ex_rdDataTwo;
// ── EX outputs ───────────────────────────────────────────────────────
  wire [4:0] ex_regDst;
  wire [2:0] ex_memCtrl;
  wire [1:0] ex_wbCtrl;
  wire ex_zeroFlag;
  wire [WIDTH-1:0] ex_aluResult, ex_rdDataTwo, ex_pcAdd;
// ── EX/MEM pipeline registers ────────────────────────────────────────
  wire [4:0] ex_mem_regDst;
  wire [2:0] ex_mem_memCtrl;
  wire [1:0] ex_mem_wbCtrl;
  wire ex_mem_zeroFlag;
  wire [WIDTH-1:0] ex_mem_aluResult, ex_mem_rdDataTwo, ex_mem_pcAdd;
// ── MEM outputs ──────────────────────────────────────────────────────
  wire mem_branchFlag;
  wire [WIDTH-1:0] mem_branchAddr;
  wire [1:0] mem_wbCtrl;
  wire [4:0] mem_regDst;
  wire [WIDTH-1:0] mem_memReadData, mem_aluResult;
// ── MEM/WB pipeline registers ────────────────────────────────────────
  wire [1:0] mem_wb_wbCtrl;
  wire [4:0] mem_wb_regDst;
  wire [WIDTH-1:0] mem_wb_memReadData, mem_wb_aluResult;
// ── WB outputs ───────────────────────────────────────────────────────
  wire wb_regWrite;
  wire [4:0] wb_regDst;
  wire [WIDTH-1:0] wb_regData;

// ── module instantiation ─────────────────────────────────────────────
top #(.WIDTH(WIDTH)) top_00 (
  .clk(clk), .rst(rst),
  .if_pc_pp(if_pc_pp), .if_inst(if_inst),
  .if_id_pcIncr(if_id_pcIncr), .if_id_inst(if_id_inst),
  .id_regT(id_regT), .id_regD(id_regD),
  .id_exCtrl(id_exCtrl), .id_memCtrl(id_memCtrl), .id_wbCtrl(id_wbCtrl),
  .id_pcIncr(id_pcIncr), .id_sgnExt(id_sgnExt),
  .id_rdDataOne(id_rdDataOne), .id_rdDataTwo(id_rdDataTwo),
  .id_ex_regT(id_ex_regT), .id_ex_regD(id_ex_regD),
  .id_ex_exCtrl(id_ex_exCtrl), .id_ex_memCtrl(id_ex_memCtrl), .id_ex_wbCtrl(id_ex_wbCtrl),
  .id_ex_pcIncr(id_ex_pcIncr), .id_ex_sgnExt(id_ex_sgnExt),
  .id_ex_rdDataOne(id_ex_rdDataOne), .id_ex_rdDataTwo(id_ex_rdDataTwo),
  .ex_regDst(ex_regDst), .ex_memCtrl(ex_memCtrl), .ex_wbCtrl(ex_wbCtrl),
  .ex_zeroFlag(ex_zeroFlag),
  .ex_aluResult(ex_aluResult), .ex_rdDataTwo(ex_rdDataTwo), .ex_pcAdd(ex_pcAdd),
  .ex_mem_regDst(ex_mem_regDst), .ex_mem_memCtrl(ex_mem_memCtrl), .ex_mem_wbCtrl(ex_mem_wbCtrl),
  .ex_mem_zeroFlag(ex_mem_zeroFlag),
  .ex_mem_aluResult(ex_mem_aluResult), .ex_mem_rdDataTwo(ex_mem_rdDataTwo), .ex_mem_pcAdd(ex_mem_pcAdd),
  .mem_branchFlag(mem_branchFlag), .mem_branchAddr(mem_branchAddr),
  .mem_wbCtrl(mem_wbCtrl), .mem_regDst(mem_regDst),
  .mem_memReadData(mem_memReadData), .mem_aluResult(mem_aluResult),
  .mem_wb_wbCtrl(mem_wb_wbCtrl), .mem_wb_regDst(mem_wb_regDst),
  .mem_wb_memReadData(mem_wb_memReadData), .mem_wb_aluResult(mem_wb_aluResult),
  .wb_regWrite(wb_regWrite), .wb_regDst(wb_regDst), .wb_regData(wb_regData)
);

// ── clock ─────────────────────────────────────────────────────────────
  always #(CLK_PERIOD/2) clk = ~clk;

// ── stimulus ──────────────────────────────────────────────────────────
  initial begin
    clk = 0; rst = 1;
    #(CLK_PERIOD) rst = 0;

    // observe waveform during this period with sample instruction set
    // (instantiate inst. mem. through IF stage)

    #(10*CLK_PERIOD) $finish;

  end


// ── waveform ──────────────────────────────────────────────────────────
  initial begin
    $dumpfile("tb_top.vcd");
    $dumpvars(1, tb_top);
    $monitor("%t: clk %1b, rst %1b, if_pc_pp %32b, if_inst %32b, if_id_pcIncr %32b, if_id_inst %32b, id_exCtrl %4b, id_memCtrl %3b, id_wbCtrl %2b, id_sgnExt %32b, id_rdDataOne %32b, id_rdDataTwo %32b, id_ex_exCtrl %4b, id_ex_memCtrl %3b, id_ex_wbCtrl %2b, id_ex_sgnExt %32b, id_ex_rdDataOne %32b, id_ex_rdDataTwo %32b, ex_regDst %5b, ex_zeroFlag %1b, ex_aluResult %32b, ex_pcAdd %32b, ex_mem_regDst %5b, ex_mem_zeroFlag %1b, ex_mem_aluResult %32b, ex_mem_pcAdd %32b, mem_branchFlag %1b, mem_branchAddr %32b, mem_memReadData %32b, mem_aluResult %32b, mem_wb_regDst %5b, mem_wb_memReadData %32b, mem_wb_aluResult %32b, wb_regWrite %1b, wb_regDst %5b, wb_regData %32b",
      $time, clk, rst, if_pc_pp, if_inst, if_id_pcIncr, if_id_inst, id_exCtrl, id_memCtrl, id_wbCtrl, id_sgnExt, id_rdDataOne, id_rdDataTwo, id_ex_exCtrl, id_ex_memCtrl, id_ex_wbCtrl, id_ex_sgnExt, id_ex_rdDataOne, id_ex_rdDataTwo, ex_regDst, ex_zeroFlag, ex_aluResult, ex_pcAdd, ex_mem_regDst, ex_mem_zeroFlag, ex_mem_aluResult, ex_mem_pcAdd, mem_branchFlag, mem_branchAddr, mem_memReadData, mem_aluResult, mem_wb_regDst, mem_wb_memReadData, mem_wb_aluResult, wb_regWrite, wb_regDst, wb_regData);
  end

endmodule: tb_top