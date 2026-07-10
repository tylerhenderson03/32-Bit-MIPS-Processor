// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP___024ROOT_H_
#define VERILATED_VTB_TOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb_top___024unit;


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top___024root final {
  public:
    // CELLS
    Vtb_top___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_top__DOT__clk;
        CData/*0:0*/ tb_top__DOT__rst;
        CData/*4:0*/ tb_top__DOT__id_regT;
        CData/*4:0*/ tb_top__DOT__id_regD;
        CData/*4:0*/ tb_top__DOT__id_exCtrl;
        CData/*3:0*/ tb_top__DOT__id_memCtrl;
        CData/*3:0*/ tb_top__DOT__id_wbCtrl;
        CData/*0:0*/ tb_top__DOT__id_stallIF;
        CData/*0:0*/ tb_top__DOT__id_PCJmp;
        CData/*4:0*/ tb_top__DOT__id_ex_regT;
        CData/*4:0*/ tb_top__DOT__id_ex_regD;
        CData/*4:0*/ tb_top__DOT__id_ex_shamt_out;
        CData/*4:0*/ tb_top__DOT__id_ex_exCtrl;
        CData/*3:0*/ tb_top__DOT__id_ex_memCtrl;
        CData/*3:0*/ tb_top__DOT__id_ex_wbCtrl;
        CData/*4:0*/ tb_top__DOT__ex_regDst;
        CData/*0:0*/ tb_top__DOT__ex_zeroFlag;
        CData/*0:0*/ tb_top__DOT__ex_overflowFlag;
        CData/*4:0*/ tb_top__DOT__ex_mem_regDst;
        CData/*3:0*/ tb_top__DOT__ex_mem_memCtrl;
        CData/*3:0*/ tb_top__DOT__ex_mem_wbCtrl;
        CData/*0:0*/ tb_top__DOT__ex_mem_zeroFlag;
        CData/*0:0*/ tb_top__DOT__mem_branchFlag;
        CData/*3:0*/ tb_top__DOT__mem_wb_wbCtrl;
        CData/*4:0*/ tb_top__DOT__mem_wb_regDst;
        CData/*0:0*/ tb_top__DOT__wb_regWrite;
        CData/*0:0*/ tb_top__DOT__top_00__DOT__id_top__DOT__linkReg;
        CData/*0:0*/ tb_top__DOT__top_00__DOT__id_top__DOT__signExtSel;
        CData/*3:0*/ tb_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl;
        CData/*0:0*/ __VdlySet__tb_top__DOT__reg_file_debug__v0;
        CData/*4:0*/ __VdlyDim0__tb_top__DOT__reg_file_debug__v32;
        CData/*0:0*/ __VdlySet__tb_top__DOT__reg_file_debug__v32;
        CData/*4:0*/ __VdlyDim0__tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory__v0;
        CData/*0:0*/ __VdlySet__tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory__v0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__clk__0;
        CData/*3:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__ex_mem_memCtrl__0;
        CData/*4:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__ex_mem_regDst__0;
        CData/*3:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__ex_mem_wbCtrl__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__ex_mem_zeroFlag__0;
        CData/*4:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__ex_regDst__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__ex_zeroFlag__0;
        CData/*4:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__id_exCtrl__0;
        CData/*4:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__id_ex_exCtrl__0;
        CData/*3:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__id_ex_memCtrl__0;
        CData/*4:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__id_ex_regD__0;
        CData/*4:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__id_ex_regT__0;
        CData/*3:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__id_ex_wbCtrl__0;
        CData/*3:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__id_memCtrl__0;
        CData/*4:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__id_regD__0;
        CData/*4:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__id_regT__0;
        CData/*3:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__id_wbCtrl__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__mem_branchFlag__0;
        CData/*4:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__mem_wb_regDst__0;
        CData/*3:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__mem_wb_wbCtrl__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__rst__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__wb_regWrite__0;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VinactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        IData/*31:0*/ tb_top__DOT__i;
        IData/*31:0*/ tb_top__DOT__if_pc_pp;
        IData/*31:0*/ tb_top__DOT__if_inst;
    };
    struct {
        IData/*31:0*/ tb_top__DOT__if_id_pcIncr;
        IData/*31:0*/ tb_top__DOT__if_id_inst;
        IData/*31:0*/ tb_top__DOT__id_sgnExt;
        IData/*31:0*/ tb_top__DOT__id_rdDataOne;
        IData/*31:0*/ tb_top__DOT__id_rdDataTwo;
        IData/*31:0*/ tb_top__DOT__id_ex_pcIncr;
        IData/*31:0*/ tb_top__DOT__id_ex_sgnExt;
        IData/*31:0*/ tb_top__DOT__id_ex_rdDataOne;
        IData/*31:0*/ tb_top__DOT__id_ex_rdDataTwo;
        IData/*31:0*/ tb_top__DOT__ex_aluResult;
        IData/*31:0*/ tb_top__DOT__ex_pcAdd;
        IData/*31:0*/ tb_top__DOT__ex_mem_aluResult;
        IData/*31:0*/ tb_top__DOT__ex_mem_rdDataTwo;
        IData/*31:0*/ tb_top__DOT__ex_mem_pcAdd;
        IData/*31:0*/ tb_top__DOT__mem_memReadData;
        IData/*31:0*/ tb_top__DOT__mem_wb_memReadData;
        IData/*31:0*/ tb_top__DOT__mem_wb_aluResult;
        IData/*31:0*/ tb_top__DOT__wb_regData;
        IData/*31:0*/ tb_top__DOT__top_00__DOT__if_top__DOT__pc;
        IData/*31:0*/ tb_top__DOT__top_00__DOT__id_top__DOT__i;
        IData/*31:0*/ tb_top__DOT__top_00__DOT__ex_top__DOT____Vcellinp__alu_00__in_b;
        IData/*31:0*/ tb_top__DOT__top_00__DOT__wb_top__DOT__tempMemData;
        IData/*31:0*/ __Vdly__tb_top__DOT__if_id_inst;
        IData/*31:0*/ __Vdly__tb_top__DOT__ex_mem_pcAdd;
        IData/*31:0*/ __VdlyVal__tb_top__DOT__reg_file_debug__v32;
        IData/*31:0*/ __VdlyVal__tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory__v0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__ex_aluResult__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__ex_mem_aluResult__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__ex_mem_pcAdd__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__ex_mem_rdDataTwo__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__ex_pcAdd__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__id_ex_pcIncr__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__id_ex_rdDataOne__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__id_ex_rdDataTwo__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__id_ex_sgnExt__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__id_rdDataOne__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__id_rdDataTwo__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__id_sgnExt__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__if_id_inst__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__if_id_pcIncr__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__if_inst__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__if_pc_pp__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__mem_memReadData__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__mem_wb_aluResult__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__mem_wb_memReadData__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__tb_top__DOT__wb_regData__0;
        IData/*31:0*/ __VactIterCount;
        IData/*31:0*/ __VinactIterCount;
        IData/*31:0*/ __Vi;
        QData/*32:0*/ tb_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended;
        VlUnpacked<IData/*31:0*/, 32> tb_top__DOT__instruction_memory;
        VlUnpacked<IData/*31:0*/, 32> tb_top__DOT__reg_file_debug;
        VlUnpacked<IData/*31:0*/, 32> tb_top__DOT____Vcellinp__top_00__if_instruction_memory;
        VlUnpacked<IData/*31:0*/, 32> tb_top__DOT__top_00__DOT__if_instruction_memory;
        VlUnpacked<IData/*31:0*/, 32> tb_top__DOT__top_00__DOT__reg_file_debug;
        VlUnpacked<IData/*31:0*/, 32> tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory;
        VlUnpacked<IData/*31:0*/, 32> tb_top__DOT__top_00__DOT__id_top__DOT__register_file;
        VlUnpacked<IData/*31:0*/, 32> tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
        VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
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
