// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_wb.h for the primary calling header

#include "Vtb_wb__pch.h"

VL_ATTR_COLD void Vtb_wb___024root___eval_initial__TOP(Vtb_wb___024root* vlSelf);
VlCoroutine Vtb_wb___024root___eval_initial__TOP__Vtiming__0(Vtb_wb___024root* vlSelf);
VlCoroutine Vtb_wb___024root___eval_initial__TOP__Vtiming__1(Vtb_wb___024root* vlSelf);

void Vtb_wb___024root___eval_initial(Vtb_wb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wb___024root___eval_initial\n"); );
    Vtb_wb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_wb___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_wb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_wb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vtb_wb___024root___eval_initial__TOP__Vtiming__0(Vtb_wb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_wb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_wb__DOT__clk = 0U;
    vlSelfRef.tb_wb__DOT__rst = 1U;
    vlSelfRef.tb_wb__DOT__mem_read_data = 0U;
    vlSelfRef.tb_wb__DOT__alu_result_out = 0U;
    vlSelfRef.tb_wb__DOT__wb_ctrl = 0U;
    vlSelfRef.tb_wb__DOT__wr_reg_dest_in = 0U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "tb_wb.sv", 
                                         36);
    vlSelfRef.tb_wb__DOT__rst = 0U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "tb_wb.sv", 
                                         37);
    vlSelfRef.tb_wb__DOT__wb_ctrl = (1U | (IData)(vlSelfRef.tb_wb__DOT__wb_ctrl));
    vlSelfRef.tb_wb__DOT__mem_read_data = 0x00000053U;
    vlSelfRef.tb_wb__DOT__alu_result_out = 0x00000019U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "tb_wb.sv", 
                                         38);
    vlSelfRef.tb_wb__DOT__wb_ctrl = (2U & (IData)(vlSelfRef.tb_wb__DOT__wb_ctrl));
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "tb_wb.sv", 
                                         39);
    vlSelfRef.tb_wb__DOT__mem_read_data = 0x0000002bU;
    vlSelfRef.tb_wb__DOT__alu_result_out = 0x00000046U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "tb_wb.sv", 
                                         40);
    vlSelfRef.tb_wb__DOT__wb_ctrl = (1U | (IData)(vlSelfRef.tb_wb__DOT__wb_ctrl));
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "tb_wb.sv", 
                                         41);
    vlSelfRef.tb_wb__DOT__wb_ctrl = 2U;
    vlSelfRef.tb_wb__DOT__mem_read_data = 0U;
    vlSelfRef.tb_wb__DOT__alu_result_out = 0U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000014ULL, 
                                         nullptr, "tb_wb.sv", 
                                         43);
    VL_FINISH_MT("tb_wb.sv", 43, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_return;
}

VlCoroutine Vtb_wb___024root___eval_initial__TOP__Vtiming__1(Vtb_wb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_wb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                             nullptr, 
                                             "tb_wb.sv", 
                                             16);
        vlSelfRef.tb_wb__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_wb__DOT__clk)));
    }
    co_return;
}

void Vtb_wb___024root___eval_triggers_vec__act(Vtb_wb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wb___024root___eval_triggers_vec__act\n"); );
    Vtb_wb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                      << 8U) 
                                                     | (((((((IData)(vlSelfRef.tb_wb__DOT__wr_reg_dest_in) 
                                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_wb__DOT__wr_reg_dest_in__0)) 
                                                            << 3U) 
                                                           | ((vlSelfRef.tb_wb__DOT__wr_data 
                                                               != vlSelfRef.__Vtrigprevexpr___TOP__tb_wb__DOT__wr_data__0) 
                                                              << 2U)) 
                                                          | ((((IData)(vlSelfRef.tb_wb__DOT__wb_ctrl) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_wb__DOT__wb_ctrl__0)) 
                                                              << 1U) 
                                                             | ((IData)(vlSelfRef.tb_wb__DOT__rst) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_wb__DOT__rst__0)))) 
                                                         << 4U) 
                                                        | ((((vlSelfRef.tb_wb__DOT__mem_read_data 
                                                              != vlSelfRef.__Vtrigprevexpr___TOP__tb_wb__DOT__mem_read_data__0) 
                                                             << 3U) 
                                                            | (((IData)(vlSelfRef.tb_wb__DOT__clk) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_wb__DOT__clk__0)) 
                                                               << 2U)) 
                                                           | (((vlSelfRef.tb_wb__DOT__alu_result_out 
                                                                != vlSelfRef.__Vtrigprevexpr___TOP__tb_wb__DOT__alu_result_out__0) 
                                                               << 1U) 
                                                              | ((IData)(vlSelfRef.tb_wb__DOT__RegWrite) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_wb__DOT__RegWrite__0))))))));
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
}

bool Vtb_wb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wb___024root___trigger_anySet__act\n"); );
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

void Vtb_wb___024root___act_sequent__TOP__0(Vtb_wb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wb___024root___act_sequent__TOP__0\n"); );
    Vtb_wb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_wb__DOT__RegWrite = (1U & ((IData)(vlSelfRef.tb_wb__DOT__wb_ctrl) 
                                            >> 1U));
    vlSelfRef.tb_wb__DOT__wr_data = ((1U & (IData)(vlSelfRef.tb_wb__DOT__wb_ctrl))
                                      ? vlSelfRef.tb_wb__DOT__alu_result_out
                                      : vlSelfRef.tb_wb__DOT__mem_read_data);
}

void Vtb_wb___024root___eval_act(Vtb_wb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wb___024root___eval_act\n"); );
    Vtb_wb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000100ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb_wb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtb_wb___024root___nba_sequent__TOP__0(Vtb_wb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wb___024root___nba_sequent__TOP__0\n"); );
    Vtb_wb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                      & (1U == vlSymsp->TOP____024unit.__VmonitorNum))))) {
        VL_WRITEF_NX("%t: clk %1b, rst %1b, wb_ctrl %2b, mem_read_data %32b, alu_result_out %32b, wr_reg_dest_in %5b, wr_reg_dest_out %5b, wr_data %32b, RegWrite %1b\n",0,
                     64,VL_TIME_UNITED_Q(1),-9,1,(IData)(vlSelfRef.tb_wb__DOT__clk),
                     1,vlSelfRef.tb_wb__DOT__rst,2,
                     (IData)(vlSelfRef.tb_wb__DOT__wb_ctrl),
                     32,vlSelfRef.tb_wb__DOT__mem_read_data,
                     32,vlSelfRef.tb_wb__DOT__alu_result_out,
                     5,(IData)(vlSelfRef.tb_wb__DOT__wr_reg_dest_in),
                     5,vlSelfRef.tb_wb__DOT__wr_reg_dest_in,
                     32,((1U & (IData)(vlSelfRef.tb_wb__DOT__wb_ctrl))
                          ? vlSelfRef.tb_wb__DOT__alu_result_out
                          : vlSelfRef.tb_wb__DOT__mem_read_data),
                     1,(1U & ((IData)(vlSelfRef.tb_wb__DOT__wb_ctrl) 
                              >> 1U)));
    }
}

void Vtb_wb___024root___eval_nba(Vtb_wb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wb___024root___eval_nba\n"); );
    Vtb_wb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x00000000000000ffULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_wb___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vtb_wb___024root___timing_resume(Vtb_wb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wb___024root___timing_resume\n"); );
    Vtb_wb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000100ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_wb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wb___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vtb_wb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_wb___024root___eval_phase__act(Vtb_wb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wb___024root___eval_phase__act\n"); );
    Vtb_wb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_wb___024root___eval_triggers_vec__act(vlSelf);
    Vtb_wb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_wb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_wb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_wb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_wb___024root___timing_resume(vlSelf);
        Vtb_wb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_wb___024root___eval_phase__inact(Vtb_wb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wb___024root___eval_phase__inact\n"); );
    Vtb_wb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb_wb.sv", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_wb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_wb___024root___eval_phase__nba(Vtb_wb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wb___024root___eval_phase__nba\n"); );
    Vtb_wb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_wb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_wb___024root___eval_nba(vlSelf);
        Vtb_wb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_wb___024root___eval(Vtb_wb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wb___024root___eval\n"); );
    Vtb_wb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_wb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb_wb.sv", 3, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tb_wb.sv", 3, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_wb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tb_wb.sv", 3, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_wb___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_wb___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_wb___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vtb_wb___024root___eval_debug_assertions(Vtb_wb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wb___024root___eval_debug_assertions\n"); );
    Vtb_wb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
