// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_ex.h for the primary calling header

#ifndef VERILATED_VTB_EX___024ROOT_H_
#define VERILATED_VTB_EX___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb_ex___024unit;


class Vtb_ex__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_ex___024root final {
  public:
    // CELLS
    Vtb_ex___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*3:0*/ tb_ex__DOT__ex_ctrl;
    CData/*2:0*/ tb_ex__DOT__mem_ctrl_in;
    CData/*1:0*/ tb_ex__DOT__wb_ctrl_in;
    CData/*4:0*/ tb_ex__DOT__rd_out;
    CData/*4:0*/ tb_ex__DOT__rt_out;
    CData/*0:0*/ tb_ex__DOT__zero_flag;
    CData/*4:0*/ tb_ex__DOT__reg_dst_mux;
    CData/*0:0*/ tb_ex__DOT__clk;
    CData/*0:0*/ tb_ex__DOT__rst;
    CData/*3:0*/ tb_ex__DOT__ex_00__DOT__alu_ctrl;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_ex__DOT__clk__0;
    CData/*3:0*/ __Vtrigprevexpr___TOP__tb_ex__DOT__ex_ctrl__0;
    CData/*2:0*/ __Vtrigprevexpr___TOP__tb_ex__DOT__mem_ctrl_in__0;
    CData/*4:0*/ __Vtrigprevexpr___TOP__tb_ex__DOT__rd_out__0;
    CData/*4:0*/ __Vtrigprevexpr___TOP__tb_ex__DOT__reg_dst_mux__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_ex__DOT__rst__0;
    CData/*4:0*/ __Vtrigprevexpr___TOP__tb_ex__DOT__rt_out__0;
    CData/*1:0*/ __Vtrigprevexpr___TOP__tb_ex__DOT__wb_ctrl_in__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_ex__DOT__zero_flag__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ tb_ex__DOT__pc_incr_in;
    IData/*31:0*/ tb_ex__DOT__sgn_extend_out;
    IData/*31:0*/ tb_ex__DOT__rd_data_one;
    IData/*31:0*/ tb_ex__DOT__rd_data_two_in;
    IData/*31:0*/ tb_ex__DOT__pc_slt_add;
    IData/*31:0*/ tb_ex__DOT__alu_result;
    IData/*31:0*/ tb_ex__DOT__ex_00__DOT__alu_00__DOT__in_b;
    IData/*31:0*/ __VdfgRegularize_hebeb780c_0_0;
    IData/*31:0*/ __Vtrigprevexpr___TOP__tb_ex__DOT__alu_result__0;
    IData/*31:0*/ __Vtrigprevexpr___TOP__tb_ex__DOT__pc_incr_in__0;
    IData/*31:0*/ __Vtrigprevexpr___TOP__tb_ex__DOT__pc_slt_add__0;
    IData/*31:0*/ __Vtrigprevexpr___TOP__tb_ex__DOT__rd_data_one__0;
    IData/*31:0*/ __Vtrigprevexpr___TOP__tb_ex__DOT__rd_data_two_in__0;
    IData/*31:0*/ __Vtrigprevexpr___TOP__tb_ex__DOT__sgn_extend_out__0;
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
    Vtb_ex__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_ex___024root(Vtb_ex__Syms* symsp, const char* namep);
    ~Vtb_ex___024root();
    VL_UNCOPYABLE(Vtb_ex___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
