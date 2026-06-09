// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_id.h for the primary calling header

#ifndef VERILATED_VTB_ID___024ROOT_H_
#define VERILATED_VTB_ID___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb_id___024unit;


class Vtb_id__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_id___024root final {
  public:
    // CELLS
    Vtb_id___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_id__DOT__clk;
    CData/*0:0*/ tb_id__DOT__rst;
    CData/*0:0*/ tb_id__DOT__RegWrite;
    CData/*0:0*/ tb_id__DOT__wb_ctrl;
    CData/*2:0*/ tb_id__DOT__mem_ctrl;
    CData/*2:0*/ tb_id__DOT__ex_ctrl;
    CData/*4:0*/ tb_id__DOT__rd_out;
    CData/*4:0*/ tb_id__DOT__rt_out;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_id__DOT__RegWrite__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_id__DOT__clk__0;
    CData/*2:0*/ __Vtrigprevexpr___TOP__tb_id__DOT__ex_ctrl__0;
    CData/*2:0*/ __Vtrigprevexpr___TOP__tb_id__DOT__mem_ctrl__0;
    CData/*4:0*/ __Vtrigprevexpr___TOP__tb_id__DOT__rd_out__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_id__DOT__rst__0;
    CData/*4:0*/ __Vtrigprevexpr___TOP__tb_id__DOT__rt_out__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_id__DOT__wb_ctrl__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ tb_id__DOT__if_out;
    IData/*31:0*/ tb_id__DOT__pc_incr_in;
    IData/*31:0*/ tb_id__DOT__wr_reg;
    IData/*31:0*/ tb_id__DOT__wr_data;
    IData/*31:0*/ tb_id__DOT__pc_incr_out;
    IData/*31:0*/ tb_id__DOT__sgn_extend_out;
    IData/*31:0*/ tb_id__DOT__rd_data_one;
    IData/*31:0*/ tb_id__DOT__rd_data_two;
    IData/*31:0*/ __Vtrigprevexpr___TOP__tb_id__DOT__if_out__0;
    IData/*31:0*/ __Vtrigprevexpr___TOP__tb_id__DOT__pc_incr_in__0;
    IData/*31:0*/ __Vtrigprevexpr___TOP__tb_id__DOT__pc_incr_out__0;
    IData/*31:0*/ __Vtrigprevexpr___TOP__tb_id__DOT__rd_data_one__0;
    IData/*31:0*/ __Vtrigprevexpr___TOP__tb_id__DOT__rd_data_two__0;
    IData/*31:0*/ __Vtrigprevexpr___TOP__tb_id__DOT__sgn_extend_out__0;
    IData/*31:0*/ __Vtrigprevexpr___TOP__tb_id__DOT__wr_data__0;
    IData/*31:0*/ __Vtrigprevexpr___TOP__tb_id__DOT__wr_reg__0;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<IData/*31:0*/, 32> tb_id__DOT__id_00__DOT__register_file;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;

    // INTERNAL VARIABLES
    Vtb_id__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_id___024root(Vtb_id__Syms* symsp, const char* namep);
    ~Vtb_id___024root();
    VL_UNCOPYABLE(Vtb_id___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
