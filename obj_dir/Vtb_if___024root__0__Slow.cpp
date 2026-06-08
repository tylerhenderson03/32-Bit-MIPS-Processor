// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_if.h for the primary calling header

#include "Vtb_if__pch.h"

VL_ATTR_COLD void Vtb_if___024root___eval_static__TOP(Vtb_if___024root* vlSelf);
VL_ATTR_COLD void Vtb_if___024root____Vm_traceActivitySetAll(Vtb_if___024root* vlSelf);

VL_ATTR_COLD void Vtb_if___024root___eval_static(Vtb_if___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_if___024root___eval_static\n"); );
    Vtb_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_if___024root___eval_static__TOP(vlSelf);
    Vtb_if___024root____Vm_traceActivitySetAll(vlSelf);
    vlSelfRef.__VactTriggered[0U] = (1ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (2ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (4ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (8ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000010ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000020ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_if__DOT__PCSrc__0 
        = vlSelfRef.tb_if__DOT__PCSrc;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_if__DOT__clk__0 
        = vlSelfRef.tb_if__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_if__DOT__instruction__0 
        = vlSelfRef.tb_if__DOT__instruction;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_if__DOT__pc_br__0 
        = vlSelfRef.tb_if__DOT__pc_br;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_if__DOT__pc_pp__0 
        = vlSelfRef.tb_if__DOT__pc_pp;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_if__DOT__rst__0 
        = vlSelfRef.tb_if__DOT__rst;
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_if___024root___eval_static__TOP(Vtb_if___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_if___024root___eval_static__TOP\n"); );
    Vtb_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_if__DOT__if_00__DOT__i = 0U;
}

VL_ATTR_COLD void Vtb_if___024root___eval_initial__TOP(Vtb_if___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_if___024root___eval_initial__TOP\n"); );
    Vtb_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("tb_if.vcd"s);
    vlSymsp->_traceDumpOpen();
    vlSymsp->TOP____024unit.__VmonitorNum = 1U;
    vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[0U] = 0U;
    vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[1U] = 1U;
    vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[2U] = 2U;
    vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[3U] = 3U;
    vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[4U] = 4U;
    vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[5U] = 5U;
    vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[6U] = 6U;
    vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[7U] = 7U;
    vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[8U] = 8U;
    vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[9U] = 9U;
    vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[10U] = 0x0000000aU;
    vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[11U] = 0x0000000bU;
    vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[12U] = 0x0000000cU;
    vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[13U] = 0x0000000dU;
    vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[14U] = 0x0000000eU;
    vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[15U] = 0x0000000fU;
    vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[16U] = 0x00000010U;
    vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[17U] = 0x00000011U;
    vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[18U] = 0x00000012U;
    vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[19U] = 0x00000013U;
    vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[20U] = 0x00000014U;
    vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[21U] = 0x00000015U;
    vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[22U] = 0x00000016U;
    vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[23U] = 0x00000017U;
    vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[24U] = 0x00000018U;
    vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[25U] = 0x00000019U;
    vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[26U] = 0x0000001aU;
    vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[27U] = 0x0000001bU;
    vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[28U] = 0x0000001cU;
    vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[29U] = 0x0000001dU;
    vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[30U] = 0x0000001eU;
    vlSelfRef.tb_if__DOT__if_00__DOT__i = 0x0000001fU;
}

VL_ATTR_COLD void Vtb_if___024root___eval_final(Vtb_if___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_if___024root___eval_final\n"); );
    Vtb_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_if___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_if___024root___eval_phase__stl(Vtb_if___024root* vlSelf);

VL_ATTR_COLD void Vtb_if___024root___eval_settle(Vtb_if___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_if___024root___eval_settle\n"); );
    Vtb_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_if___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("tb_if.sv", 4, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_if___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vtb_if___024root___eval_triggers_vec__stl(Vtb_if___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_if___024root___eval_triggers_vec__stl\n"); );
    Vtb_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vtb_if___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_if___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_if___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_if___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_if___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_if___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vtb_if___024root___stl_sequent__TOP__0(Vtb_if___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_if___024root___stl_sequent__TOP__0\n"); );
    Vtb_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_if__DOT__pc_pp = ((IData)(4U) + vlSelfRef.tb_if__DOT__if_00__DOT__pc);
    vlSelfRef.tb_if__DOT__instruction = ((IData)(vlSelfRef.tb_if__DOT__rst)
                                          ? 0U : vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory
                                         [(0x0000001fU 
                                           & vlSelfRef.tb_if__DOT__if_00__DOT__pc)]);
}

VL_ATTR_COLD void Vtb_if___024root___eval_stl(Vtb_if___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_if___024root___eval_stl\n"); );
    Vtb_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtb_if___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vtb_if___024root___eval_phase__stl(Vtb_if___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_if___024root___eval_phase__stl\n"); );
    Vtb_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_if___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_if___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_if___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtb_if___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtb_if___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_if___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_if___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_if___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @( tb_if.PCSrc)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @( tb_if.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @( tb_if.instruction)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @( tb_if.pc_br)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @( tb_if.pc_pp)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @( tb_if.rst)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @(posedge tb_if.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 7 is active: @(posedge tb_if.rst)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 8U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 8 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_if___024root____Vm_traceActivitySetAll(Vtb_if___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_if___024root____Vm_traceActivitySetAll\n"); );
    Vtb_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void Vtb_if___024root___ctor_var_reset(Vtb_if___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_if___024root___ctor_var_reset\n"); );
    Vtb_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_if__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11587406029052870254ull);
    vlSelf->tb_if__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3810673368153099842ull);
    vlSelf->tb_if__DOT__PCSrc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7617472277034164309ull);
    vlSelf->tb_if__DOT__pc_br = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7009400293178905093ull);
    vlSelf->tb_if__DOT__pc_pp = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4712090929893080252ull);
    vlSelf->tb_if__DOT__instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4834695466775205499ull);
    vlSelf->tb_if__DOT__if_00__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 478847888313686049ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_if__DOT__if_00__DOT__instruction_memory[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7498500968579096425ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_if__DOT__PCSrc__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_if__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_if__DOT__instruction__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_if__DOT__pc_br__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_if__DOT__pc_pp__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_if__DOT__rst__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
