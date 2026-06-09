// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_if.h for the primary calling header

#include "Vtb_if__pch.h"

VL_ATTR_COLD void Vtb_if___024root___eval_initial__TOP(Vtb_if___024root* vlSelf);
VlCoroutine Vtb_if___024root___eval_initial__TOP__Vtiming__0(Vtb_if___024root* vlSelf);
VlCoroutine Vtb_if___024root___eval_initial__TOP__Vtiming__1(Vtb_if___024root* vlSelf);

void Vtb_if___024root___eval_initial(Vtb_if___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_if___024root___eval_initial\n"); );
    Vtb_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_if___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_if___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_if___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vtb_if___024root___eval_initial__TOP__Vtiming__0(Vtb_if___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_if___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_if__DOT__clk = 0U;
    vlSelfRef.tb_if__DOT__rst = 1U;
    vlSelfRef.tb_if__DOT__PCSrc = 0U;
    vlSelfRef.tb_if__DOT__pc_br = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "tb_if.sv", 
                                         21);
    vlSelfRef.tb_if__DOT__rst = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000003cULL, 
                                         nullptr, "tb_if.sv", 
                                         22);
    vlSelfRef.tb_if__DOT__PCSrc = 1U;
    vlSelfRef.tb_if__DOT__pc_br = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "tb_if.sv", 
                                         23);
    vlSelfRef.tb_if__DOT__PCSrc = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000001eULL, 
                                         nullptr, "tb_if.sv", 
                                         24);
    vlSelfRef.tb_if__DOT__pc_br = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000014ULL, 
                                         nullptr, "tb_if.sv", 
                                         25);
    VL_FINISH_MT("tb_if.sv", 25, "");
    co_return;
}

VlCoroutine Vtb_if___024root___eval_initial__TOP__Vtiming__1(Vtb_if___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_if___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb_if.sv", 
                                             18);
        vlSelfRef.tb_if__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_if__DOT__clk)));
    }
    co_return;
}

void Vtb_if___024root___eval_triggers_vec__act(Vtb_if___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_if___024root___eval_triggers_vec__act\n"); );
    Vtb_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                      << 8U) 
                                                     | (((((((IData)(vlSelfRef.tb_if__DOT__rst) 
                                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_if__DOT__rst__0))) 
                                                            << 3U) 
                                                           | (((IData)(vlSelfRef.tb_if__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_if__DOT__clk__0))) 
                                                              << 2U)) 
                                                          | ((((IData)(vlSelfRef.tb_if__DOT__rst) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_if__DOT__rst__0)) 
                                                              << 1U) 
                                                             | (vlSelfRef.tb_if__DOT__pc_pp 
                                                                != vlSelfRef.__Vtrigprevexpr___TOP__tb_if__DOT__pc_pp__0))) 
                                                         << 4U) 
                                                        | ((((vlSelfRef.tb_if__DOT__pc_br 
                                                              != vlSelfRef.__Vtrigprevexpr___TOP__tb_if__DOT__pc_br__0) 
                                                             << 3U) 
                                                            | ((vlSelfRef.tb_if__DOT__instruction 
                                                                != vlSelfRef.__Vtrigprevexpr___TOP__tb_if__DOT__instruction__0) 
                                                               << 2U)) 
                                                           | ((((IData)(vlSelfRef.tb_if__DOT__clk) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_if__DOT__clk__0)) 
                                                               << 1U) 
                                                              | ((IData)(vlSelfRef.tb_if__DOT__PCSrc) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_if__DOT__PCSrc__0))))))));
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
}

bool Vtb_if___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_if___024root___trigger_anySet__act\n"); );
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

void Vtb_if___024root___act_sequent__TOP__0(Vtb_if___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_if___024root___act_sequent__TOP__0\n"); );
    Vtb_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_if__DOT__instruction = ((IData)(vlSelfRef.tb_if__DOT__rst)
                                          ? 0U : vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory
                                         [(0x0000001fU 
                                           & vlSelfRef.tb_if__DOT__if_00__DOT__pc)]);
}

void Vtb_if___024root___eval_act(Vtb_if___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_if___024root___eval_act\n"); );
    Vtb_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000100ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb_if___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtb_if___024root___nba_sequent__TOP__0(Vtb_if___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_if___024root___nba_sequent__TOP__0\n"); );
    Vtb_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                      & (1U == vlSymsp->TOP____024unit.__VmonitorNum))))) {
        VL_WRITEF_NX("%t: clk %1b, rst %1b, PCSrc %1b, pc_br %5b, pc_pp %5b, instruction %32b\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,1,(IData)(vlSelfRef.tb_if__DOT__clk),
                     1,vlSelfRef.tb_if__DOT__rst,1,
                     (IData)(vlSelfRef.tb_if__DOT__PCSrc),
                     32,vlSelfRef.tb_if__DOT__pc_br,
                     32,((IData)(4U) + vlSelfRef.tb_if__DOT__if_00__DOT__pc),
                     32,((IData)(vlSelfRef.tb_if__DOT__rst)
                          ? 0U : vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory
                         [(0x0000001fU & vlSelfRef.tb_if__DOT__if_00__DOT__pc)]));
    }
}

void Vtb_if___024root___nba_sequent__TOP__1(Vtb_if___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_if___024root___nba_sequent__TOP__1\n"); );
    Vtb_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_if__DOT__if_00__DOT__pc = ((IData)(vlSelfRef.tb_if__DOT__rst)
                                             ? 0U : 
                                            ((IData)(vlSelfRef.tb_if__DOT__PCSrc)
                                              ? vlSelfRef.tb_if__DOT__pc_br
                                              : ((IData)(4U) 
                                                 + vlSelfRef.tb_if__DOT__if_00__DOT__pc)));
    vlSelfRef.tb_if__DOT__pc_pp = ((IData)(4U) + vlSelfRef.tb_if__DOT__if_00__DOT__pc);
}

void Vtb_if___024root___eval_nba(Vtb_if___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_if___024root___eval_nba\n"); );
    Vtb_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x000000000000003fULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_if___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x00000000000000c0ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_if___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x00000000000001c0ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_if___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtb_if___024root___timing_resume(Vtb_if___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_if___024root___timing_resume\n"); );
    Vtb_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000100ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_if___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_if___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_if___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_if___024root___eval_phase__act(Vtb_if___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_if___024root___eval_phase__act\n"); );
    Vtb_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_if___024root___eval_triggers_vec__act(vlSelf);
    Vtb_if___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_if___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_if___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_if___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_if___024root___timing_resume(vlSelf);
        Vtb_if___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_if___024root___eval_phase__inact(Vtb_if___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_if___024root___eval_phase__inact\n"); );
    Vtb_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb_if.sv", 4, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_if___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_if___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_if___024root___eval_phase__nba(Vtb_if___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_if___024root___eval_phase__nba\n"); );
    Vtb_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_if___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_if___024root___eval_nba(vlSelf);
        Vtb_if___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_if___024root___eval(Vtb_if___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_if___024root___eval\n"); );
    Vtb_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_if___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb_if.sv", 4, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tb_if.sv", 4, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_if___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tb_if.sv", 4, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_if___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_if___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_if___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vtb_if___024root___eval_debug_assertions(Vtb_if___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_if___024root___eval_debug_assertions\n"); );
    Vtb_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
