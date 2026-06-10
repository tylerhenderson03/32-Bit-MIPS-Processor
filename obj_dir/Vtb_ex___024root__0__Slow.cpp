// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ex.h for the primary calling header

#include "Vtb_ex__pch.h"

VL_ATTR_COLD void Vtb_ex___024root___eval_static(Vtb_ex___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ex___024root___eval_static\n"); );
    Vtb_ex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000100ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000200ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000400ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000800ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000001000ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000002000ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000004000ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ex__DOT__alu_result__0 
        = vlSelfRef.tb_ex__DOT__alu_result;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ex__DOT__clk__0 
        = vlSelfRef.tb_ex__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ex__DOT__ex_ctrl__0 
        = vlSelfRef.tb_ex__DOT__ex_ctrl;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ex__DOT__mem_ctrl_in__0 
        = vlSelfRef.tb_ex__DOT__mem_ctrl_in;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ex__DOT__pc_incr_in__0 
        = vlSelfRef.tb_ex__DOT__pc_incr_in;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ex__DOT__pc_slt_add__0 
        = vlSelfRef.tb_ex__DOT__pc_slt_add;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ex__DOT__rd_data_one__0 
        = vlSelfRef.tb_ex__DOT__rd_data_one;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ex__DOT__rd_data_two_in__0 
        = vlSelfRef.tb_ex__DOT__rd_data_two_in;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ex__DOT__rd_out__0 
        = vlSelfRef.tb_ex__DOT__rd_out;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ex__DOT__reg_dst_mux__0 
        = vlSelfRef.tb_ex__DOT__reg_dst_mux;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ex__DOT__rst__0 
        = vlSelfRef.tb_ex__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ex__DOT__rt_out__0 
        = vlSelfRef.tb_ex__DOT__rt_out;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ex__DOT__sgn_extend_out__0 
        = vlSelfRef.tb_ex__DOT__sgn_extend_out;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ex__DOT__wb_ctrl_in__0 
        = vlSelfRef.tb_ex__DOT__wb_ctrl_in;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ex__DOT__zero_flag__0 
        = vlSelfRef.tb_ex__DOT__zero_flag;
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_ex___024root___eval_initial__TOP(Vtb_ex___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ex___024root___eval_initial__TOP\n"); );
    Vtb_ex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("tb_ex.vcd"s);
    vlSymsp->_traceDumpOpen();
    vlSymsp->TOP____024unit.__VmonitorNum = 1U;
}

VL_ATTR_COLD void Vtb_ex___024root___eval_final(Vtb_ex___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ex___024root___eval_final\n"); );
    Vtb_ex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ex___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_ex___024root___eval_phase__stl(Vtb_ex___024root* vlSelf);

VL_ATTR_COLD void Vtb_ex___024root___eval_settle(Vtb_ex___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ex___024root___eval_settle\n"); );
    Vtb_ex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_ex___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("tb_ex.sv", 3, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_ex___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vtb_ex___024root___eval_triggers_vec__stl(Vtb_ex___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ex___024root___eval_triggers_vec__stl\n"); );
    Vtb_ex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vtb_ex___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ex___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ex___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_ex___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_ex___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ex___024root___trigger_anySet__stl\n"); );
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

void Vtb_ex___024root___act_sequent__TOP__0(Vtb_ex___024root* vlSelf);

VL_ATTR_COLD void Vtb_ex___024root___eval_stl(Vtb_ex___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ex___024root___eval_stl\n"); );
    Vtb_ex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtb_ex___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vtb_ex___024root___eval_phase__stl(Vtb_ex___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ex___024root___eval_phase__stl\n"); );
    Vtb_ex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_ex___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_ex___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_ex___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtb_ex___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtb_ex___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ex___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ex___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_ex___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @( tb_ex.alu_result)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @( tb_ex.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @( tb_ex.ex_ctrl)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @( tb_ex.mem_ctrl_in)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @( tb_ex.pc_incr_in)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @( tb_ex.pc_slt_add)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @( tb_ex.rd_data_one)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 7 is active: @( tb_ex.rd_data_two_in)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 8U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 8 is active: @( tb_ex.rd_out)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 9U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 9 is active: @( tb_ex.reg_dst_mux)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000aU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 10 is active: @( tb_ex.rst)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000bU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 11 is active: @( tb_ex.rt_out)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000cU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 12 is active: @( tb_ex.sgn_extend_out)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000dU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 13 is active: @( tb_ex.wb_ctrl_in)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000eU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 14 is active: @( tb_ex.zero_flag)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000fU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 15 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_ex___024root___ctor_var_reset(Vtb_ex___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ex___024root___ctor_var_reset\n"); );
    Vtb_ex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_ex__DOT__ex_ctrl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14818291633542932526ull);
    vlSelf->tb_ex__DOT__mem_ctrl_in = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2030148638554174869ull);
    vlSelf->tb_ex__DOT__wb_ctrl_in = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1737933339270129221ull);
    vlSelf->tb_ex__DOT__pc_incr_in = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4401835053009086162ull);
    vlSelf->tb_ex__DOT__sgn_extend_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1523244635656123095ull);
    vlSelf->tb_ex__DOT__rd_data_one = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15767148622832798774ull);
    vlSelf->tb_ex__DOT__rd_data_two_in = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13497326036030699899ull);
    vlSelf->tb_ex__DOT__rd_out = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14140341474092372177ull);
    vlSelf->tb_ex__DOT__rt_out = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13818572736035386969ull);
    vlSelf->tb_ex__DOT__pc_slt_add = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13490822430685135450ull);
    vlSelf->tb_ex__DOT__alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 535048679508133750ull);
    vlSelf->tb_ex__DOT__zero_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1997616118915365949ull);
    vlSelf->tb_ex__DOT__reg_dst_mux = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4546034328695753359ull);
    vlSelf->tb_ex__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 110637648836547247ull);
    vlSelf->tb_ex__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11037387342582503836ull);
    vlSelf->tb_ex__DOT__ex_00__DOT__alu_ctrl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8212852104573961908ull);
    vlSelf->tb_ex__DOT__ex_00__DOT__alu_00__DOT__in_b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5782983052293403580ull);
    vlSelf->__VdfgRegularize_hebeb780c_0_0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_ex__DOT__alu_result__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_ex__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_ex__DOT__ex_ctrl__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_ex__DOT__mem_ctrl_in__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_ex__DOT__pc_incr_in__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_ex__DOT__pc_slt_add__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_ex__DOT__rd_data_one__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_ex__DOT__rd_data_two_in__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_ex__DOT__rd_out__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_ex__DOT__reg_dst_mux__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_ex__DOT__rst__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_ex__DOT__rt_out__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_ex__DOT__sgn_extend_out__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_ex__DOT__wb_ctrl_in__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_ex__DOT__zero_flag__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
