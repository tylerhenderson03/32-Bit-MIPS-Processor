// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_mem.h for the primary calling header

#ifndef VERILATED_VTB_MEM___024ROOT_H_
#define VERILATED_VTB_MEM___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb_mem___024unit;


class Vtb_mem__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_mem___024root final {
  public:
    // CELLS
    Vtb_mem___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*2:0*/ tb_mem__DOT__mem_ctrl;
    CData/*1:0*/ tb_mem__DOT__wb_ctrl_in;
    CData/*0:0*/ tb_mem__DOT__zero_flag;
    CData/*4:0*/ tb_mem__DOT__reg_dst_mux;
    CData/*0:0*/ tb_mem__DOT__branch_flag;
    CData/*0:0*/ tb_mem__DOT__clk;
    CData/*0:0*/ tb_mem__DOT__rst;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_mem__DOT__branch_flag__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_mem__DOT__clk__0;
    CData/*2:0*/ __Vtrigprevexpr___TOP__tb_mem__DOT__mem_ctrl__0;
    CData/*4:0*/ __Vtrigprevexpr___TOP__tb_mem__DOT__reg_dst_mux__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_mem__DOT__rst__0;
    CData/*1:0*/ __Vtrigprevexpr___TOP__tb_mem__DOT__wb_ctrl_in__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ tb_mem__DOT__pc_slt_add;
    IData/*31:0*/ tb_mem__DOT__alu_result;
    IData/*31:0*/ tb_mem__DOT__rd_data_two_out;
    IData/*31:0*/ tb_mem__DOT__mem_read_data;
    IData/*31:0*/ tb_mem__DOT__mem_00__DOT__i;
    IData/*31:0*/ __Vtrigprevexpr___TOP__tb_mem__DOT__alu_result__0;
    IData/*31:0*/ __Vtrigprevexpr___TOP__tb_mem__DOT__mem_read_data__0;
    IData/*31:0*/ __Vtrigprevexpr___TOP__tb_mem__DOT__pc_slt_add__0;
    IData/*31:0*/ __Vtrigprevexpr___TOP__tb_mem__DOT__rd_data_two_out__0;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<IData/*31:0*/, 32> tb_mem__DOT__mem_00__DOT__data_memory;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;

    // INTERNAL VARIABLES
    Vtb_mem__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_mem___024root(Vtb_mem__Syms* symsp, const char* namep);
    ~Vtb_mem___024root();
    VL_UNCOPYABLE(Vtb_mem___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
