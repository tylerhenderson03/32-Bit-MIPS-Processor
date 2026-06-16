// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_wb.h for the primary calling header

#include "Vtb_wb__pch.h"

VL_ATTR_COLD void Vtb_wb___024root___eval_static(Vtb_wb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wb___024root___eval_static\n"); );
    Vtb_wb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (1ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (2ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (4ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (8ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000010ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000020ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000040ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000080ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_wb__DOT__RegWrite__0 
        = vlSelfRef.tb_wb__DOT__RegWrite;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_wb__DOT__alu_result_out__0 
        = vlSelfRef.tb_wb__DOT__alu_result_out;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_wb__DOT__clk__0 
        = vlSelfRef.tb_wb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_wb__DOT__mem_read_data__0 
        = vlSelfRef.tb_wb__DOT__mem_read_data;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_wb__DOT__rst__0 
        = vlSelfRef.tb_wb__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_wb__DOT__wb_ctrl__0 
        = vlSelfRef.tb_wb__DOT__wb_ctrl;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_wb__DOT__wr_data__0 
        = vlSelfRef.tb_wb__DOT__wr_data;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_wb__DOT__wr_reg_dest_in__0 
        = vlSelfRef.tb_wb__DOT__wr_reg_dest_in;
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_wb___024root___eval_initial__TOP(Vtb_wb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wb___024root___eval_initial__TOP\n"); );
    Vtb_wb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("tb_wb.vcd"s);
    vlSymsp->_traceDumpOpen();
    vlSymsp->TOP____024unit.__VmonitorNum = 1U;
}

VL_ATTR_COLD void Vtb_wb___024root___eval_final(Vtb_wb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wb___024root___eval_final\n"); );
    Vtb_wb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_wb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_wb___024root___eval_phase__stl(Vtb_wb___024root* vlSelf);

VL_ATTR_COLD void Vtb_wb___024root___eval_settle(Vtb_wb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wb___024root___eval_settle\n"); );
    Vtb_wb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_wb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("tb_wb.sv", 3, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_wb___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vtb_wb___024root___eval_triggers_vec__stl(Vtb_wb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wb___024root___eval_triggers_vec__stl\n"); );
    Vtb_wb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vtb_wb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_wb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_wb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_wb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wb___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtb_wb___024root___act_sequent__TOP__0(Vtb_wb___024root* vlSelf);

VL_ATTR_COLD void Vtb_wb___024root___eval_stl(Vtb_wb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wb___024root___eval_stl\n"); );
    Vtb_wb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtb_wb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vtb_wb___024root___eval_phase__stl(Vtb_wb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wb___024root___eval_phase__stl\n"); );
    Vtb_wb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_wb___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_wb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_wb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtb_wb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtb_wb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_wb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_wb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @( tb_wb.RegWrite)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @( tb_wb.alu_result_out)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @( tb_wb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @( tb_wb.mem_read_data)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @( tb_wb.rst)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @( tb_wb.wb_ctrl)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @( tb_wb.wr_data)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 7 is active: @( tb_wb.wr_reg_dest_in)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 8U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 8 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_wb___024root___ctor_var_reset(Vtb_wb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wb___024root___ctor_var_reset\n"); );
    Vtb_wb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_wb__DOT__mem_read_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14556038233326634509ull);
    vlSelf->tb_wb__DOT__alu_result_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9306819559535887152ull);
    vlSelf->tb_wb__DOT__wb_ctrl = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16502111468941215082ull);
    vlSelf->tb_wb__DOT__wr_reg_dest_in = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10736416273673423584ull);
    vlSelf->tb_wb__DOT__wr_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15107329573691005546ull);
    vlSelf->tb_wb__DOT__RegWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3412133894162417067ull);
    vlSelf->tb_wb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3319468705215491128ull);
    vlSelf->tb_wb__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12888661264198807849ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_wb__DOT__RegWrite__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_wb__DOT__alu_result_out__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_wb__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_wb__DOT__mem_read_data__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_wb__DOT__rst__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_wb__DOT__wb_ctrl__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_wb__DOT__wr_data__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_wb__DOT__wr_reg_dest_in__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
