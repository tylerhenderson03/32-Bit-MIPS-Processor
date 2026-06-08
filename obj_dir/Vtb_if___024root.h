// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_if.h for the primary calling header

#ifndef VERILATED_VTB_IF___024ROOT_H_
#define VERILATED_VTB_IF___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb_if___024unit;


class Vtb_if__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_if___024root final {
  public:
    // CELLS
    Vtb_if___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_if__DOT__clk;
    CData/*0:0*/ tb_if__DOT__rst;
    CData/*0:0*/ tb_if__DOT__PCSrc;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_if__DOT__PCSrc__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_if__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_if__DOT__rst__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ tb_if__DOT__pc_br;
    IData/*31:0*/ tb_if__DOT__pc_pp;
    IData/*31:0*/ tb_if__DOT__instruction;
    IData/*31:0*/ tb_if__DOT__if_00__DOT__pc;
    IData/*31:0*/ tb_if__DOT__if_00__DOT__i;
    IData/*31:0*/ __Vtrigprevexpr___TOP__tb_if__DOT__instruction__0;
    IData/*31:0*/ __Vtrigprevexpr___TOP__tb_if__DOT__pc_br__0;
    IData/*31:0*/ __Vtrigprevexpr___TOP__tb_if__DOT__pc_pp__0;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<IData/*31:0*/, 32> tb_if__DOT__if_00__DOT__instruction_memory;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;

    // INTERNAL VARIABLES
    Vtb_if__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_if___024root(Vtb_if__Syms* symsp, const char* namep);
    ~Vtb_if___024root();
    VL_UNCOPYABLE(Vtb_if___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
