// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP___024ROOT_H_
#define VERILATED_VTB_TOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_top__DOT__clk;
        CData/*0:0*/ tb_top__DOT__rst;
        CData/*4:0*/ tb_top__DOT__id_exCtrl;
        CData/*3:0*/ tb_top__DOT__id_memCtrl;
        CData/*3:0*/ tb_top__DOT__id_wbCtrl;
        CData/*0:0*/ tb_top__DOT__id_stallIF;
        CData/*0:0*/ tb_top__DOT__id_PCJmp;
        CData/*4:0*/ tb_top__DOT__id_ex_regT;
        CData/*4:0*/ tb_top__DOT__id_ex_regD;
        CData/*4:0*/ tb_top__DOT__id_ex_regS;
        CData/*4:0*/ tb_top__DOT__id_ex_shamt_out;
        CData/*4:0*/ tb_top__DOT__id_ex_exCtrl;
        CData/*3:0*/ tb_top__DOT__id_ex_memCtrl;
        CData/*3:0*/ tb_top__DOT__id_ex_wbCtrl;
        CData/*0:0*/ tb_top__DOT__ex_overflowFlag;
        CData/*4:0*/ tb_top__DOT__ex_mem_regDst;
        CData/*3:0*/ tb_top__DOT__ex_mem_memCtrl;
        CData/*3:0*/ tb_top__DOT__ex_mem_wbCtrl;
        CData/*0:0*/ tb_top__DOT__ex_mem_zeroFlag;
        CData/*3:0*/ tb_top__DOT__mem_wb_wbCtrl;
        CData/*4:0*/ tb_top__DOT__mem_wb_regDst;
        CData/*1:0*/ tb_top__DOT__top_00__DOT__ex_top__DOT__forwardA;
        CData/*1:0*/ tb_top__DOT__top_00__DOT__ex_top__DOT__forwardB;
        CData/*3:0*/ tb_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl;
        CData/*0:0*/ tb_top__DOT__top_00__DOT__id_top__DOT__linkReg;
        CData/*0:0*/ tb_top__DOT__top_00__DOT__id_top__DOT__signExtSel;
        CData/*0:0*/ tb_top__DOT__top_00__DOT__if_top__DOT__PCSrc;
        CData/*0:0*/ tb_top__DOT__top_00__DOT__if_top__DOT__PCWrite;
        CData/*4:0*/ __VdlyDim0__tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory__v0;
        CData/*0:0*/ __VdlySet__tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory__v0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__rst__0;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VinactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        IData/*31:0*/ tb_top__DOT__i;
        IData/*31:0*/ tb_top__DOT__NUM_INSTRUCTIONS;
        IData/*31:0*/ tb_top__DOT__if_id_pcIncr;
        IData/*31:0*/ tb_top__DOT__if_id_inst;
        IData/*31:0*/ tb_top__DOT__id_ex_pcIncr;
        IData/*31:0*/ tb_top__DOT__id_ex_sgnExt;
        IData/*31:0*/ tb_top__DOT__id_ex_rdDataOne;
        IData/*31:0*/ tb_top__DOT__id_ex_rdDataTwo;
        IData/*31:0*/ tb_top__DOT__ex_aluResult;
        IData/*31:0*/ tb_top__DOT__ex_mem_aluResult;
        IData/*31:0*/ tb_top__DOT__ex_mem_rdDataTwo;
        IData/*31:0*/ tb_top__DOT__ex_mem_pcAdd;
        IData/*31:0*/ tb_top__DOT__mem_wb_memReadData;
        IData/*31:0*/ tb_top__DOT__mem_wb_aluResult;
        IData/*31:0*/ tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_a;
        IData/*31:0*/ tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b;
        IData/*31:0*/ tb_top__DOT__top_00__DOT__id_top__DOT__wr_data;
        IData/*31:0*/ tb_top__DOT__top_00__DOT__id_top__DOT__rd_data_one;
        IData/*31:0*/ tb_top__DOT__top_00__DOT__id_top__DOT__i;
        IData/*31:0*/ tb_top__DOT__top_00__DOT__wb_top__DOT__tempMemData;
        IData/*31:0*/ tb_top__DOT__top_00__DOT__if_top__DOT__pc_pp;
        IData/*31:0*/ tb_top__DOT__top_00__DOT__if_top__DOT__pc;
        IData/*16:0*/ __VcaseTableOut0;
        IData/*31:0*/ __Vdly__tb_top__DOT__if_id_inst;
        IData/*31:0*/ __VdlyVal__tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory__v0;
        IData/*31:0*/ __VactIterCount;
        IData/*31:0*/ __VinactIterCount;
    };
    struct {
        IData/*31:0*/ __Vi;
        QData/*32:0*/ tb_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended;
        VlUnpacked<IData/*31:0*/, 15> tb_top__DOT__instruction_memory;
        VlUnpacked<IData/*31:0*/, 32> tb_top__DOT__reg_file_debug;
        VlUnpacked<IData/*31:0*/, 15> tb_top__DOT____Vcellinp__top_00__if_instruction_memory;
        VlUnpacked<IData/*31:0*/, 15> tb_top__DOT__top_00__DOT____Vcellinp__if_top__instruction_memory;
        VlUnpacked<IData/*31:0*/, 32> tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
        VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top___024root(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top___024root();
    VL_UNCOPYABLE(Vtb_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
