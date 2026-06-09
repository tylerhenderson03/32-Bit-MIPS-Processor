// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_id.h for the primary calling header

#include "Vtb_id__pch.h"

VL_ATTR_COLD void Vtb_id___024root___eval_initial__TOP(Vtb_id___024root* vlSelf);
VlCoroutine Vtb_id___024root___eval_initial__TOP__Vtiming__0(Vtb_id___024root* vlSelf);
VlCoroutine Vtb_id___024root___eval_initial__TOP__Vtiming__1(Vtb_id___024root* vlSelf);

void Vtb_id___024root___eval_initial(Vtb_id___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_id___024root___eval_initial\n"); );
    Vtb_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_id___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_id___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_id___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vtb_id___024root___eval_initial__TOP__Vtiming__0(Vtb_id___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_id___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_id__DOT__clk = 0U;
    vlSelfRef.tb_id__DOT__rst = 1U;
    vlSelfRef.tb_id__DOT__if_out = 0U;
    vlSelfRef.tb_id__DOT__pc_incr_in = 0U;
    vlSelfRef.tb_id__DOT__wr_reg = 0U;
    vlSelfRef.tb_id__DOT__wr_data = 0U;
    vlSelfRef.tb_id__DOT__RegWrite = 0U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "tb_id.sv", 
                                         33);
    vlSelfRef.tb_id__DOT__rst = 0U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_return;
}

VlCoroutine Vtb_id___024root___eval_initial__TOP__Vtiming__1(Vtb_id___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_id___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb_id.sv", 
                                             28);
        vlSelfRef.tb_id__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_id__DOT__clk)));
    }
    co_return;
}

void Vtb_id___024root___eval_triggers_vec__act(Vtb_id___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_id___024root___eval_triggers_vec__act\n"); );
    Vtb_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                      << 0x00000010U) 
                                                     | (((((((vlSelfRef.tb_id__DOT__wr_reg 
                                                              != vlSelfRef.__Vtrigprevexpr___TOP__tb_id__DOT__wr_reg__0) 
                                                             << 3U) 
                                                            | ((vlSelfRef.tb_id__DOT__wr_data 
                                                                != vlSelfRef.__Vtrigprevexpr___TOP__tb_id__DOT__wr_data__0) 
                                                               << 2U)) 
                                                           | ((((IData)(vlSelfRef.tb_id__DOT__wb_ctrl) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_id__DOT__wb_ctrl__0)) 
                                                               << 1U) 
                                                              | (vlSelfRef.tb_id__DOT__sgn_extend_out 
                                                                 != vlSelfRef.__Vtrigprevexpr___TOP__tb_id__DOT__sgn_extend_out__0))) 
                                                          << 0x0000000cU) 
                                                         | ((((((IData)(vlSelfRef.tb_id__DOT__rt_out) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_id__DOT__rt_out__0)) 
                                                               << 3U) 
                                                              | (((IData)(vlSelfRef.tb_id__DOT__rst) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_id__DOT__rst__0)) 
                                                                 << 2U)) 
                                                             | ((((IData)(vlSelfRef.tb_id__DOT__rd_out) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_id__DOT__rd_out__0)) 
                                                                 << 1U) 
                                                                | (vlSelfRef.tb_id__DOT__rd_data_two 
                                                                   != vlSelfRef.__Vtrigprevexpr___TOP__tb_id__DOT__rd_data_two__0))) 
                                                            << 8U)) 
                                                        | ((((((vlSelfRef.tb_id__DOT__rd_data_one 
                                                                != vlSelfRef.__Vtrigprevexpr___TOP__tb_id__DOT__rd_data_one__0) 
                                                               << 3U) 
                                                              | ((vlSelfRef.tb_id__DOT__pc_incr_out 
                                                                  != vlSelfRef.__Vtrigprevexpr___TOP__tb_id__DOT__pc_incr_out__0) 
                                                                 << 2U)) 
                                                             | (((vlSelfRef.tb_id__DOT__pc_incr_in 
                                                                  != vlSelfRef.__Vtrigprevexpr___TOP__tb_id__DOT__pc_incr_in__0) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelfRef.tb_id__DOT__mem_ctrl) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_id__DOT__mem_ctrl__0)))) 
                                                            << 4U) 
                                                           | ((((vlSelfRef.tb_id__DOT__if_out 
                                                                 != vlSelfRef.__Vtrigprevexpr___TOP__tb_id__DOT__if_out__0) 
                                                                << 3U) 
                                                               | (((IData)(vlSelfRef.tb_id__DOT__ex_ctrl) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_id__DOT__ex_ctrl__0)) 
                                                                  << 2U)) 
                                                              | ((((IData)(vlSelfRef.tb_id__DOT__clk) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_id__DOT__clk__0)) 
                                                                  << 1U) 
                                                                 | ((IData)(vlSelfRef.tb_id__DOT__RegWrite) 
                                                                    != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_id__DOT__RegWrite__0)))))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_id__DOT__RegWrite__0 
        = vlSelfRef.tb_id__DOT__RegWrite;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_id__DOT__clk__0 
        = vlSelfRef.tb_id__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_id__DOT__ex_ctrl__0 
        = vlSelfRef.tb_id__DOT__ex_ctrl;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_id__DOT__if_out__0 
        = vlSelfRef.tb_id__DOT__if_out;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_id__DOT__mem_ctrl__0 
        = vlSelfRef.tb_id__DOT__mem_ctrl;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_id__DOT__pc_incr_in__0 
        = vlSelfRef.tb_id__DOT__pc_incr_in;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_id__DOT__pc_incr_out__0 
        = vlSelfRef.tb_id__DOT__pc_incr_out;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_id__DOT__rd_data_one__0 
        = vlSelfRef.tb_id__DOT__rd_data_one;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_id__DOT__rd_data_two__0 
        = vlSelfRef.tb_id__DOT__rd_data_two;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_id__DOT__rd_out__0 
        = vlSelfRef.tb_id__DOT__rd_out;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_id__DOT__rst__0 
        = vlSelfRef.tb_id__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_id__DOT__rt_out__0 
        = vlSelfRef.tb_id__DOT__rt_out;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_id__DOT__sgn_extend_out__0 
        = vlSelfRef.tb_id__DOT__sgn_extend_out;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_id__DOT__wb_ctrl__0 
        = vlSelfRef.tb_id__DOT__wb_ctrl;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_id__DOT__wr_data__0 
        = vlSelfRef.tb_id__DOT__wr_data;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_id__DOT__wr_reg__0 
        = vlSelfRef.tb_id__DOT__wr_reg;
}

bool Vtb_id___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_id___024root___trigger_anySet__act\n"); );
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

void Vtb_id___024root___act_sequent__TOP__0(Vtb_id___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_id___024root___act_sequent__TOP__0\n"); );
    Vtb_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_id__DOT__sgn_extend_out = (0x0000ffffU 
                                            & vlSelfRef.tb_id__DOT__if_out);
    vlSelfRef.tb_id__DOT__rd_out = (0x0000001fU & (vlSelfRef.tb_id__DOT__if_out 
                                                   >> 0x0000000bU));
    vlSelfRef.tb_id__DOT__rt_out = (0x0000001fU & (vlSelfRef.tb_id__DOT__if_out 
                                                   >> 0x00000010U));
    if (vlSelfRef.tb_id__DOT__RegWrite) {
        vlSelfRef.tb_id__DOT__id_00__DOT__register_file[(0x0000001fU 
                                                         & vlSelfRef.tb_id__DOT__wr_reg)] 
            = vlSelfRef.tb_id__DOT__wr_data;
    }
    vlSelfRef.tb_id__DOT__rd_data_one = vlSelfRef.tb_id__DOT__id_00__DOT__register_file
        [(0x0000001fU & (vlSelfRef.tb_id__DOT__if_out 
                         >> 0x15U))];
    vlSelfRef.tb_id__DOT__rd_data_two = vlSelfRef.tb_id__DOT__id_00__DOT__register_file
        [(0x0000001fU & (vlSelfRef.tb_id__DOT__if_out 
                         >> 0x10U))];
}

void Vtb_id___024root___eval_act(Vtb_id___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_id___024root___eval_act\n"); );
    Vtb_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000010000ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb_id___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

void Vtb_id___024root___nba_sequent__TOP__0(Vtb_id___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_id___024root___nba_sequent__TOP__0\n"); );
    Vtb_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                      & (1U == vlSymsp->TOP____024unit.__VmonitorNum))))) {
        VL_WRITEF_NX("%t: clk %1b, rst %1b, if_out %32b, pc_incr_in %32b, wr_reg %32b, wr_data %32b, RegWrite %1b, wb_ctrl %1b, mem_ctrl %3b, ex_ctrl %3b, pc_incr_out %32b, sgn_extend_out %32b, rd_data_one %32b, rd_data_two %32b, rd_out %5b, rt_out %5b\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,1,(IData)(vlSelfRef.tb_id__DOT__clk),
                     1,vlSelfRef.tb_id__DOT__rst,32,
                     vlSelfRef.tb_id__DOT__if_out,32,
                     vlSelfRef.tb_id__DOT__pc_incr_in,
                     32,vlSelfRef.tb_id__DOT__wr_reg,
                     32,vlSelfRef.tb_id__DOT__wr_data,
                     1,(IData)(vlSelfRef.tb_id__DOT__RegWrite),
                     1,vlSelfRef.tb_id__DOT__wb_ctrl,
                     3,(IData)(vlSelfRef.tb_id__DOT__mem_ctrl),
                     3,vlSelfRef.tb_id__DOT__ex_ctrl,
                     32,vlSelfRef.tb_id__DOT__pc_incr_out,
                     32,(0x0000ffffU & vlSelfRef.tb_id__DOT__if_out),
                     32,vlSelfRef.tb_id__DOT__rd_data_one,
                     32,vlSelfRef.tb_id__DOT__rd_data_two,
                     5,(0x0000001fU & (vlSelfRef.tb_id__DOT__if_out 
                                       >> 0x0000000bU)),
                     5,(0x0000001fU & (vlSelfRef.tb_id__DOT__if_out 
                                       >> 0x00000010U)));
    }
}

void Vtb_id___024root___eval_nba(Vtb_id___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_id___024root___eval_nba\n"); );
    Vtb_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x000000000000ffffULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_id___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vtb_id___024root___timing_resume(Vtb_id___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_id___024root___timing_resume\n"); );
    Vtb_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000010000ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_id___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_id___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vtb_id___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_id___024root___eval_phase__act(Vtb_id___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_id___024root___eval_phase__act\n"); );
    Vtb_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_id___024root___eval_triggers_vec__act(vlSelf);
    Vtb_id___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_id___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_id___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_id___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_id___024root___timing_resume(vlSelf);
        Vtb_id___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_id___024root___eval_phase__inact(Vtb_id___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_id___024root___eval_phase__inact\n"); );
    Vtb_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb_id.sv", 4, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_id___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_id___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_id___024root___eval_phase__nba(Vtb_id___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_id___024root___eval_phase__nba\n"); );
    Vtb_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_id___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_id___024root___eval_nba(vlSelf);
        Vtb_id___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_id___024root___eval(Vtb_id___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_id___024root___eval\n"); );
    Vtb_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_id___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb_id.sv", 4, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tb_id.sv", 4, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_id___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tb_id.sv", 4, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_id___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_id___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_id___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vtb_id___024root___eval_debug_assertions(Vtb_id___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_id___024root___eval_debug_assertions\n"); );
    Vtb_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
