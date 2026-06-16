// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_wb.h for the primary calling header

#ifndef VERILATED_VTB_WB___024ROOT_H_
#define VERILATED_VTB_WB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb_wb___024unit;


class Vtb_wb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_wb___024root final {
  public:
    // CELLS
    Vtb_wb___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*1:0*/ tb_wb__DOT__wb_ctrl;
    CData/*4:0*/ tb_wb__DOT__wr_reg_dest_in;
    CData/*0:0*/ tb_wb__DOT__RegWrite;
    CData/*0:0*/ tb_wb__DOT__clk;
    CData/*0:0*/ tb_wb__DOT__rst;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_wb__DOT__RegWrite__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_wb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_wb__DOT__rst__0;
    CData/*1:0*/ __Vtrigprevexpr___TOP__tb_wb__DOT__wb_ctrl__0;
    CData/*4:0*/ __Vtrigprevexpr___TOP__tb_wb__DOT__wr_reg_dest_in__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ tb_wb__DOT__mem_read_data;
    IData/*31:0*/ tb_wb__DOT__alu_result_out;
    IData/*31:0*/ tb_wb__DOT__wr_data;
    IData/*31:0*/ __Vtrigprevexpr___TOP__tb_wb__DOT__alu_result_out__0;
    IData/*31:0*/ __Vtrigprevexpr___TOP__tb_wb__DOT__mem_read_data__0;
    IData/*31:0*/ __Vtrigprevexpr___TOP__tb_wb__DOT__wr_data__0;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;

    // INTERNAL VARIABLES
    Vtb_wb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_wb___024root(Vtb_wb__Syms* symsp, const char* namep);
    ~Vtb_wb___024root();
    VL_UNCOPYABLE(Vtb_wb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
