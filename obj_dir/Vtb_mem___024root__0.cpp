// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mem.h for the primary calling header

#include "Vtb_mem__pch.h"

VL_ATTR_COLD void Vtb_mem___024root___eval_initial__TOP(Vtb_mem___024root* vlSelf);
VlCoroutine Vtb_mem___024root___eval_initial__TOP__Vtiming__0(Vtb_mem___024root* vlSelf);
VlCoroutine Vtb_mem___024root___eval_initial__TOP__Vtiming__1(Vtb_mem___024root* vlSelf);

void Vtb_mem___024root___eval_initial(Vtb_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem___024root___eval_initial\n"); );
    Vtb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_mem___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_mem___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_mem___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vtb_mem___024root___eval_initial__TOP__Vtiming__0(Vtb_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_mem__DOT__clk = 0U;
    vlSelfRef.tb_mem__DOT__rst = 1U;
    vlSelfRef.tb_mem__DOT__mem_ctrl = 0U;
    vlSelfRef.tb_mem__DOT__wb_ctrl_in = 0U;
    vlSelfRef.tb_mem__DOT__pc_slt_add = 0U;
    vlSelfRef.tb_mem__DOT__alu_result = 0U;
    vlSelfRef.tb_mem__DOT__rd_data_two_out = 0U;
    vlSelfRef.tb_mem__DOT__zero_flag = 0U;
    vlSelfRef.tb_mem__DOT__reg_dst_mux = 0U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "tb_mem.sv", 
                                         46);
    vlSelfRef.tb_mem__DOT__rst = 0U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "tb_mem.sv", 
                                         49);
    vlSelfRef.tb_mem__DOT__mem_ctrl = (4U | (IData)(vlSelfRef.tb_mem__DOT__mem_ctrl));
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "tb_mem.sv", 
                                         50);
    vlSelfRef.tb_mem__DOT__mem_ctrl = (3U & (IData)(vlSelfRef.tb_mem__DOT__mem_ctrl));
    vlSelfRef.tb_mem__DOT__zero_flag = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "tb_mem.sv", 
                                         51);
    vlSelfRef.tb_mem__DOT__mem_ctrl = (4U | (IData)(vlSelfRef.tb_mem__DOT__mem_ctrl));
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "tb_mem.sv", 
                                         56);
    vlSelfRef.tb_mem__DOT__alu_result = 6U;
    vlSelfRef.tb_mem__DOT__mem_ctrl = (2U | (1U & (IData)(vlSelfRef.tb_mem__DOT__mem_ctrl)));
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "tb_mem.sv", 
                                         58);
    vlSelfRef.tb_mem__DOT__alu_result = 6U;
    vlSelfRef.tb_mem__DOT__mem_ctrl = (1U | (4U & (IData)(vlSelfRef.tb_mem__DOT__mem_ctrl)));
    vlSelfRef.tb_mem__DOT__rd_data_two_out = 0x00000043U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "tb_mem.sv", 
                                         60);
    vlSelfRef.tb_mem__DOT__alu_result = 6U;
    vlSelfRef.tb_mem__DOT__mem_ctrl = (2U | (4U & (IData)(vlSelfRef.tb_mem__DOT__mem_ctrl)));
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000014ULL, 
                                         nullptr, "tb_mem.sv", 
                                         62);
    VL_FINISH_MT("tb_mem.sv", 62, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_return;
}

VlCoroutine Vtb_mem___024root___eval_initial__TOP__Vtiming__1(Vtb_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb_mem.sv", 
                                             23);
        vlSelfRef.tb_mem__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_mem__DOT__clk)));
    }
    co_return;
}

void Vtb_mem___024root___eval_triggers_vec__act(Vtb_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem___024root___eval_triggers_vec__act\n"); );
    Vtb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (((((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                         << 3U) 
                                                        | (((IData)(vlSelfRef.tb_mem__DOT__clk) 
                                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_mem__DOT__clk__0))) 
                                                           << 2U)) 
                                                       | ((((IData)(vlSelfRef.tb_mem__DOT__wb_ctrl_in) 
                                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_mem__DOT__wb_ctrl_in__0)) 
                                                           << 1U) 
                                                          | ((IData)(vlSelfRef.tb_mem__DOT__rst) 
                                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_mem__DOT__rst__0)))) 
                                                      << 8U) 
                                                     | (((((((IData)(vlSelfRef.tb_mem__DOT__reg_dst_mux) 
                                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_mem__DOT__reg_dst_mux__0)) 
                                                            << 3U) 
                                                           | ((vlSelfRef.tb_mem__DOT__rd_data_two_out 
                                                               != vlSelfRef.__Vtrigprevexpr___TOP__tb_mem__DOT__rd_data_two_out__0) 
                                                              << 2U)) 
                                                          | (((vlSelfRef.tb_mem__DOT__pc_slt_add 
                                                               != vlSelfRef.__Vtrigprevexpr___TOP__tb_mem__DOT__pc_slt_add__0) 
                                                              << 1U) 
                                                             | (vlSelfRef.tb_mem__DOT__mem_read_data 
                                                                != vlSelfRef.__Vtrigprevexpr___TOP__tb_mem__DOT__mem_read_data__0))) 
                                                         << 4U) 
                                                        | (((((IData)(vlSelfRef.tb_mem__DOT__mem_ctrl) 
                                                              != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_mem__DOT__mem_ctrl__0)) 
                                                             << 3U) 
                                                            | (((IData)(vlSelfRef.tb_mem__DOT__clk) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_mem__DOT__clk__0)) 
                                                               << 2U)) 
                                                           | ((((IData)(vlSelfRef.tb_mem__DOT__branch_flag) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_mem__DOT__branch_flag__0)) 
                                                               << 1U) 
                                                              | (vlSelfRef.tb_mem__DOT__alu_result 
                                                                 != vlSelfRef.__Vtrigprevexpr___TOP__tb_mem__DOT__alu_result__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_mem__DOT__alu_result__0 
        = vlSelfRef.tb_mem__DOT__alu_result;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_mem__DOT__branch_flag__0 
        = vlSelfRef.tb_mem__DOT__branch_flag;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_mem__DOT__clk__0 
        = vlSelfRef.tb_mem__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_mem__DOT__mem_ctrl__0 
        = vlSelfRef.tb_mem__DOT__mem_ctrl;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_mem__DOT__mem_read_data__0 
        = vlSelfRef.tb_mem__DOT__mem_read_data;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_mem__DOT__pc_slt_add__0 
        = vlSelfRef.tb_mem__DOT__pc_slt_add;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_mem__DOT__rd_data_two_out__0 
        = vlSelfRef.tb_mem__DOT__rd_data_two_out;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_mem__DOT__reg_dst_mux__0 
        = vlSelfRef.tb_mem__DOT__reg_dst_mux;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_mem__DOT__rst__0 
        = vlSelfRef.tb_mem__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_mem__DOT__wb_ctrl_in__0 
        = vlSelfRef.tb_mem__DOT__wb_ctrl_in;
}

bool Vtb_mem___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem___024root___trigger_anySet__act\n"); );
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

void Vtb_mem___024root___act_sequent__TOP__0(Vtb_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem___024root___act_sequent__TOP__0\n"); );
    Vtb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_mem__DOT__branch_flag = (((IData)(vlSelfRef.tb_mem__DOT__mem_ctrl) 
                                           >> 2U) & (IData)(vlSelfRef.tb_mem__DOT__zero_flag));
    vlSelfRef.tb_mem__DOT__mem_read_data = ((2U & (IData)(vlSelfRef.tb_mem__DOT__mem_ctrl))
                                             ? vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory
                                            [(0x0000001fU 
                                              & vlSelfRef.tb_mem__DOT__alu_result)]
                                             : 0U);
}

void Vtb_mem___024root___eval_act(Vtb_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem___024root___eval_act\n"); );
    Vtb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000800ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb_mem___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtb_mem___024root___nba_sequent__TOP__0(Vtb_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem___024root___nba_sequent__TOP__0\n"); );
    Vtb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                      & (1U == vlSymsp->TOP____024unit.__VmonitorNum))))) {
        VL_WRITEF_NX("%t: clk %1b, rst %1b, mem_ctrl %3b, wb_ctrl_in %2b, pc_slt_add %32b, alu_result %32b, rd_data_two_out %32b, wb_ctrl_out %2b, branch_flag %1b, mem_read_data %32b, branch_addr %32b, alu_result_out %32b, wr_reg_dest_out %5b\n",0,
                     64,VL_TIME_UNITED_Q(1),-9,1,(IData)(vlSelfRef.tb_mem__DOT__clk),
                     1,vlSelfRef.tb_mem__DOT__rst,3,
                     (IData)(vlSelfRef.tb_mem__DOT__mem_ctrl),
                     2,vlSelfRef.tb_mem__DOT__wb_ctrl_in,
                     32,vlSelfRef.tb_mem__DOT__pc_slt_add,
                     32,vlSelfRef.tb_mem__DOT__alu_result,
                     32,vlSelfRef.tb_mem__DOT__rd_data_two_out,
                     2,(IData)(vlSelfRef.tb_mem__DOT__wb_ctrl_in),
                     1,(((IData)(vlSelfRef.tb_mem__DOT__mem_ctrl) 
                         >> 2U) & (IData)(vlSelfRef.tb_mem__DOT__zero_flag)),
                     32,((2U & (IData)(vlSelfRef.tb_mem__DOT__mem_ctrl))
                          ? vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory
                         [(0x0000001fU & vlSelfRef.tb_mem__DOT__alu_result)]
                          : 0U),32,vlSelfRef.tb_mem__DOT__pc_slt_add,
                     32,vlSelfRef.tb_mem__DOT__alu_result,
                     5,(IData)(vlSelfRef.tb_mem__DOT__reg_dst_mux));
    }
}

void Vtb_mem___024root___nba_sequent__TOP__1(Vtb_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem___024root___nba_sequent__TOP__1\n"); );
    Vtb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdlyVal__tb_mem__DOT__mem_00__DOT__data_memory__v0;
    __VdlyVal__tb_mem__DOT__mem_00__DOT__data_memory__v0 = 0;
    CData/*4:0*/ __VdlyDim0__tb_mem__DOT__mem_00__DOT__data_memory__v0;
    __VdlyDim0__tb_mem__DOT__mem_00__DOT__data_memory__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_mem__DOT__mem_00__DOT__data_memory__v0;
    __VdlySet__tb_mem__DOT__mem_00__DOT__data_memory__v0 = 0;
    // Body
    __VdlySet__tb_mem__DOT__mem_00__DOT__data_memory__v0 = 0U;
    if ((1U & ((IData)(vlSelfRef.tb_mem__DOT__mem_ctrl) 
               & (~ (IData)(vlSelfRef.tb_mem__DOT__rst))))) {
        __VdlyVal__tb_mem__DOT__mem_00__DOT__data_memory__v0 
            = vlSelfRef.tb_mem__DOT__rd_data_two_out;
        __VdlyDim0__tb_mem__DOT__mem_00__DOT__data_memory__v0 
            = (0x0000001fU & vlSelfRef.tb_mem__DOT__alu_result);
        __VdlySet__tb_mem__DOT__mem_00__DOT__data_memory__v0 = 1U;
    }
    if (__VdlySet__tb_mem__DOT__mem_00__DOT__data_memory__v0) {
        vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[__VdlyDim0__tb_mem__DOT__mem_00__DOT__data_memory__v0] 
            = __VdlyVal__tb_mem__DOT__mem_00__DOT__data_memory__v0;
    }
}

void Vtb_mem___024root___nba_comb__TOP__0(Vtb_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem___024root___nba_comb__TOP__0\n"); );
    Vtb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_mem__DOT__mem_read_data = ((2U & (IData)(vlSelfRef.tb_mem__DOT__mem_ctrl))
                                             ? vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory
                                            [(0x0000001fU 
                                              & vlSelfRef.tb_mem__DOT__alu_result)]
                                             : 0U);
}

void Vtb_mem___024root___eval_nba(Vtb_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem___024root___eval_nba\n"); );
    Vtb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x00000000000003ffULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_mem___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x0000000000000400ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_mem___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((0x0000000000000c00ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_mem___024root___nba_comb__TOP__0(vlSelf);
    }
}

void Vtb_mem___024root___timing_resume(Vtb_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem___024root___timing_resume\n"); );
    Vtb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000800ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_mem___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vtb_mem___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_mem___024root___eval_phase__act(Vtb_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem___024root___eval_phase__act\n"); );
    Vtb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_mem___024root___eval_triggers_vec__act(vlSelf);
    Vtb_mem___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_mem___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_mem___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_mem___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_mem___024root___timing_resume(vlSelf);
        Vtb_mem___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_mem___024root___eval_phase__inact(Vtb_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem___024root___eval_phase__inact\n"); );
    Vtb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb_mem.sv", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_mem___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_mem___024root___eval_phase__nba(Vtb_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem___024root___eval_phase__nba\n"); );
    Vtb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_mem___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_mem___024root___eval_nba(vlSelf);
        Vtb_mem___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_mem___024root___eval(Vtb_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem___024root___eval\n"); );
    Vtb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_mem___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb_mem.sv", 3, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tb_mem.sv", 3, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_mem___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tb_mem.sv", 3, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_mem___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_mem___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_mem___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vtb_mem___024root___eval_debug_assertions(Vtb_mem___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem___024root___eval_debug_assertions\n"); );
    Vtb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
