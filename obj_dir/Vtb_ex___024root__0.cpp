// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ex.h for the primary calling header

#include "Vtb_ex__pch.h"

VL_ATTR_COLD void Vtb_ex___024root___eval_initial__TOP(Vtb_ex___024root* vlSelf);
VlCoroutine Vtb_ex___024root___eval_initial__TOP__Vtiming__0(Vtb_ex___024root* vlSelf);
VlCoroutine Vtb_ex___024root___eval_initial__TOP__Vtiming__1(Vtb_ex___024root* vlSelf);

void Vtb_ex___024root___eval_initial(Vtb_ex___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ex___024root___eval_initial\n"); );
    Vtb_ex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_ex___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_ex___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_ex___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vtb_ex___024root___eval_initial__TOP__Vtiming__0(Vtb_ex___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ex___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_ex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_ex__DOT__clk = 0U;
    vlSelfRef.tb_ex__DOT__rst = 1U;
    vlSelfRef.tb_ex__DOT__ex_ctrl = 0U;
    vlSelfRef.tb_ex__DOT__mem_ctrl_in = 0U;
    vlSelfRef.tb_ex__DOT__wb_ctrl_in = 0U;
    vlSelfRef.tb_ex__DOT__pc_incr_in = 0U;
    vlSelfRef.tb_ex__DOT__sgn_extend_out = 0U;
    vlSelfRef.tb_ex__DOT__rd_data_one = 0U;
    vlSelfRef.tb_ex__DOT__rd_data_two_in = 0U;
    vlSelfRef.tb_ex__DOT__rd_out = 0U;
    vlSelfRef.tb_ex__DOT__rt_out = 0U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "tb_ex.sv", 
                                         33);
    vlSelfRef.tb_ex__DOT__rst = 0U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "tb_ex.sv", 
                                         61);
    vlSelfRef.tb_ex__DOT__rd_out = 2U;
    vlSelfRef.tb_ex__DOT__rt_out = 5U;
    vlSelfRef.tb_ex__DOT__ex_ctrl = (8U | (IData)(vlSelfRef.tb_ex__DOT__ex_ctrl));
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "tb_ex.sv", 
                                         62);
    vlSelfRef.tb_ex__DOT__ex_ctrl = (7U & (IData)(vlSelfRef.tb_ex__DOT__ex_ctrl));
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "tb_ex.sv", 
                                         63);
    vlSelfRef.tb_ex__DOT__rd_out = 4U;
    vlSelfRef.tb_ex__DOT__rt_out = 1U;
    vlSelfRef.tb_ex__DOT__ex_ctrl = (8U | (IData)(vlSelfRef.tb_ex__DOT__ex_ctrl));
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "tb_ex.sv", 
                                         64);
    vlSelfRef.tb_ex__DOT__ex_ctrl = (7U & (IData)(vlSelfRef.tb_ex__DOT__ex_ctrl));
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000001eULL, 
                                         nullptr, "tb_ex.sv", 
                                         67);
    VL_FINISH_MT("tb_ex.sv", 67, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_return;
}

VlCoroutine Vtb_ex___024root___eval_initial__TOP__Vtiming__1(Vtb_ex___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ex___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_ex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb_ex.sv", 
                                             28);
        vlSelfRef.tb_ex__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_ex__DOT__clk)));
    }
    co_return;
}

void Vtb_ex___024root___eval_triggers_vec__act(Vtb_ex___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ex___024root___eval_triggers_vec__act\n"); );
    Vtb_ex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 3U) 
                                                         | (((IData)(vlSelfRef.tb_ex__DOT__zero_flag) 
                                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ex__DOT__zero_flag__0)) 
                                                            << 2U)) 
                                                        | ((((IData)(vlSelfRef.tb_ex__DOT__wb_ctrl_in) 
                                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ex__DOT__wb_ctrl_in__0)) 
                                                            << 1U) 
                                                           | (vlSelfRef.tb_ex__DOT__sgn_extend_out 
                                                              != vlSelfRef.__Vtrigprevexpr___TOP__tb_ex__DOT__sgn_extend_out__0))) 
                                                       << 0x0000000cU) 
                                                      | ((((((IData)(vlSelfRef.tb_ex__DOT__rt_out) 
                                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ex__DOT__rt_out__0)) 
                                                            << 3U) 
                                                           | (((IData)(vlSelfRef.tb_ex__DOT__rst) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ex__DOT__rst__0)) 
                                                              << 2U)) 
                                                          | ((((IData)(vlSelfRef.tb_ex__DOT__reg_dst_mux) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ex__DOT__reg_dst_mux__0)) 
                                                              << 1U) 
                                                             | ((IData)(vlSelfRef.tb_ex__DOT__rd_out) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ex__DOT__rd_out__0)))) 
                                                         << 8U)) 
                                                     | ((((((vlSelfRef.tb_ex__DOT__rd_data_two_in 
                                                             != vlSelfRef.__Vtrigprevexpr___TOP__tb_ex__DOT__rd_data_two_in__0) 
                                                            << 3U) 
                                                           | ((vlSelfRef.tb_ex__DOT__rd_data_one 
                                                               != vlSelfRef.__Vtrigprevexpr___TOP__tb_ex__DOT__rd_data_one__0) 
                                                              << 2U)) 
                                                          | (((vlSelfRef.tb_ex__DOT__pc_slt_add 
                                                               != vlSelfRef.__Vtrigprevexpr___TOP__tb_ex__DOT__pc_slt_add__0) 
                                                              << 1U) 
                                                             | (vlSelfRef.tb_ex__DOT__pc_incr_in 
                                                                != vlSelfRef.__Vtrigprevexpr___TOP__tb_ex__DOT__pc_incr_in__0))) 
                                                         << 4U) 
                                                        | (((((IData)(vlSelfRef.tb_ex__DOT__mem_ctrl_in) 
                                                              != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ex__DOT__mem_ctrl_in__0)) 
                                                             << 3U) 
                                                            | (((IData)(vlSelfRef.tb_ex__DOT__ex_ctrl) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ex__DOT__ex_ctrl__0)) 
                                                               << 2U)) 
                                                           | ((((IData)(vlSelfRef.tb_ex__DOT__clk) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ex__DOT__clk__0)) 
                                                               << 1U) 
                                                              | (vlSelfRef.tb_ex__DOT__alu_result 
                                                                 != vlSelfRef.__Vtrigprevexpr___TOP__tb_ex__DOT__alu_result__0)))))));
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
}

bool Vtb_ex___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ex___024root___trigger_anySet__act\n"); );
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

void Vtb_ex___024root___act_sequent__TOP__0(Vtb_ex___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ex___024root___act_sequent__TOP__0\n"); );
    Vtb_ex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_ex__DOT__pc_slt_add = (vlSelfRef.tb_ex__DOT__pc_incr_in 
                                        + VL_SHIFTL_III(32,32,32, vlSelfRef.tb_ex__DOT__sgn_extend_out, 2U));
    vlSelfRef.tb_ex__DOT__reg_dst_mux = ((8U & (IData)(vlSelfRef.tb_ex__DOT__ex_ctrl))
                                          ? (IData)(vlSelfRef.tb_ex__DOT__rd_out)
                                          : (IData)(vlSelfRef.tb_ex__DOT__rt_out));
    if ((0U == (3U & ((IData)(vlSelfRef.tb_ex__DOT__ex_ctrl) 
                      >> 1U)))) {
        vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl = 2U;
    } else if ((1U == (3U & ((IData)(vlSelfRef.tb_ex__DOT__ex_ctrl) 
                             >> 1U)))) {
        vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl = 6U;
    } else if ((2U == (3U & ((IData)(vlSelfRef.tb_ex__DOT__ex_ctrl) 
                             >> 1U)))) {
        if ((0x20U == (0x0000003fU & vlSelfRef.tb_ex__DOT__sgn_extend_out))) {
            vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl = 2U;
        } else if ((0x22U == (0x0000003fU & vlSelfRef.tb_ex__DOT__sgn_extend_out))) {
            vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl = 6U;
        } else if ((0x24U == (0x0000003fU & vlSelfRef.tb_ex__DOT__sgn_extend_out))) {
            vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl = 0U;
        } else if ((0x25U == (0x0000003fU & vlSelfRef.tb_ex__DOT__sgn_extend_out))) {
            vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl = 1U;
        } else if ((0x2aU == (0x0000003fU & vlSelfRef.tb_ex__DOT__sgn_extend_out))) {
            vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl = 7U;
        }
    } else {
        vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl = 0U;
    }
    vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_00__DOT__in_b 
        = ((1U & (IData)(vlSelfRef.tb_ex__DOT__ex_ctrl))
            ? vlSelfRef.tb_ex__DOT__sgn_extend_out : vlSelfRef.tb_ex__DOT__rd_data_two_in);
    vlSelfRef.__VdfgRegularize_hebeb780c_0_0 = (vlSelfRef.tb_ex__DOT__rd_data_one 
                                                | vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_00__DOT__in_b);
    vlSelfRef.tb_ex__DOT__alu_result = ((8U & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
                                         ? ((4U & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
                                             ? ((2U 
                                                 & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
                                                  ? 
                                                 (vlSelfRef.tb_ex__DOT__rd_data_one 
                                                  * vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_00__DOT__in_b)
                                                  : 0U)
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
                                                  ? 0U
                                                  : 
                                                 (~ vlSelfRef.__VdfgRegularize_hebeb780c_0_0)))
                                             : 0U) : 
                                        ((4U & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
                                          ? ((2U & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
                                              ? ((1U 
                                                  & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
                                                  ? 0U
                                                  : 
                                                 (vlSelfRef.tb_ex__DOT__rd_data_one 
                                                  - vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_00__DOT__in_b))
                                              : 0U)
                                          : ((2U & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
                                              ? ((1U 
                                                  & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
                                                  ? 0U
                                                  : 
                                                 (vlSelfRef.tb_ex__DOT__rd_data_one 
                                                  + vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_00__DOT__in_b))
                                              : ((1U 
                                                  & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
                                                  ? vlSelfRef.__VdfgRegularize_hebeb780c_0_0
                                                  : 
                                                 (vlSelfRef.tb_ex__DOT__rd_data_one 
                                                  & vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_00__DOT__in_b)))));
    vlSelfRef.tb_ex__DOT__zero_flag = (0U == ((8U & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
                                               ? ((4U 
                                                   & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
                                                     ? 
                                                    (vlSelfRef.tb_ex__DOT__rd_data_one 
                                                     * vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_00__DOT__in_b)
                                                     : 0U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
                                                     ? 0U
                                                     : 
                                                    (~ vlSelfRef.__VdfgRegularize_hebeb780c_0_0)))
                                                   : 0U)
                                               : ((4U 
                                                   & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
                                                     ? 0U
                                                     : 
                                                    (vlSelfRef.tb_ex__DOT__rd_data_one 
                                                     - vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_00__DOT__in_b))
                                                    : 0U)
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
                                                     ? 0U
                                                     : 
                                                    (vlSelfRef.tb_ex__DOT__rd_data_one 
                                                     + vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_00__DOT__in_b))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
                                                     ? vlSelfRef.__VdfgRegularize_hebeb780c_0_0
                                                     : 
                                                    (vlSelfRef.tb_ex__DOT__rd_data_one 
                                                     & vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_00__DOT__in_b))))));
}

void Vtb_ex___024root___eval_act(Vtb_ex___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ex___024root___eval_act\n"); );
    Vtb_ex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000008000ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb_ex___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtb_ex___024root___nba_sequent__TOP__0(Vtb_ex___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ex___024root___nba_sequent__TOP__0\n"); );
    Vtb_ex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                      & (1U == vlSymsp->TOP____024unit.__VmonitorNum))))) {
        VL_WRITEF_NX("%t: clk %1b, rst %1b, , ex_ctrl %4b, mem_ctrl_in %3b, wb_ctrl_in %2b, pc_incr_in %32b, sgn_extend_out %32b, rd_data_one %32b, rd_data_two_in %32b, rd_out %5b, rt_out %5b, mem_ctrl_out %3b, wb_ctrl_out %2b, pc_slt_add %32b, alu_result %32b, rd_data_two_out %32b, zero_flag %1b, reg_dst_mux %5b\n",0,
                     64,VL_TIME_UNITED_Q(1),-9,1,(IData)(vlSelfRef.tb_ex__DOT__clk),
                     1,vlSelfRef.tb_ex__DOT__rst,4,
                     (IData)(vlSelfRef.tb_ex__DOT__ex_ctrl),
                     3,vlSelfRef.tb_ex__DOT__mem_ctrl_in,
                     2,(IData)(vlSelfRef.tb_ex__DOT__wb_ctrl_in),
                     32,vlSelfRef.tb_ex__DOT__pc_incr_in,
                     32,vlSelfRef.tb_ex__DOT__sgn_extend_out,
                     32,vlSelfRef.tb_ex__DOT__rd_data_one,
                     32,vlSelfRef.tb_ex__DOT__rd_data_two_in,
                     5,(IData)(vlSelfRef.tb_ex__DOT__rd_out),
                     5,vlSelfRef.tb_ex__DOT__rt_out,
                     3,(IData)(vlSelfRef.tb_ex__DOT__mem_ctrl_in),
                     2,vlSelfRef.tb_ex__DOT__wb_ctrl_in,
                     32,(vlSelfRef.tb_ex__DOT__pc_incr_in 
                         + VL_SHIFTL_III(32,32,32, vlSelfRef.tb_ex__DOT__sgn_extend_out, 2U)),
                     32,((8U & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
                          ? ((4U & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
                              ? ((2U & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
                                  ? ((1U & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
                                      ? (vlSelfRef.tb_ex__DOT__rd_data_one 
                                         * vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_00__DOT__in_b)
                                      : 0U) : ((1U 
                                                & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
                                                ? 0U
                                                : (~ vlSelfRef.__VdfgRegularize_hebeb780c_0_0)))
                              : 0U) : ((4U & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
                                        ? ((2U & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
                                                ? 0U
                                                : (vlSelfRef.tb_ex__DOT__rd_data_one 
                                                   - vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_00__DOT__in_b))
                                            : 0U) : 
                                       ((2U & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
                                         ? ((1U & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
                                             ? 0U : 
                                            (vlSelfRef.tb_ex__DOT__rd_data_one 
                                             + vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_00__DOT__in_b))
                                         : ((1U & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
                                             ? vlSelfRef.__VdfgRegularize_hebeb780c_0_0
                                             : (vlSelfRef.tb_ex__DOT__rd_data_one 
                                                & vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_00__DOT__in_b))))),
                     32,vlSelfRef.tb_ex__DOT__rd_data_two_in,
                     1,(0U == ((8U & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
                                ? ((4U & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
                                    ? ((2U & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
                                        ? ((1U & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
                                            ? (vlSelfRef.tb_ex__DOT__rd_data_one 
                                               * vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_00__DOT__in_b)
                                            : 0U) : 
                                       ((1U & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
                                         ? 0U : (~ vlSelfRef.__VdfgRegularize_hebeb780c_0_0)))
                                    : 0U) : ((4U & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
                                                   ? 0U
                                                   : 
                                                  (vlSelfRef.tb_ex__DOT__rd_data_one 
                                                   - vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_00__DOT__in_b))
                                                  : 0U)
                                              : ((2U 
                                                  & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
                                                   ? 0U
                                                   : 
                                                  (vlSelfRef.tb_ex__DOT__rd_data_one 
                                                   + vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_00__DOT__in_b))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
                                                   ? vlSelfRef.__VdfgRegularize_hebeb780c_0_0
                                                   : 
                                                  (vlSelfRef.tb_ex__DOT__rd_data_one 
                                                   & vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_00__DOT__in_b)))))),
                     5,((8U & (IData)(vlSelfRef.tb_ex__DOT__ex_ctrl))
                         ? (IData)(vlSelfRef.tb_ex__DOT__rd_out)
                         : (IData)(vlSelfRef.tb_ex__DOT__rt_out)));
    }
}

void Vtb_ex___024root___eval_nba(Vtb_ex___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ex___024root___eval_nba\n"); );
    Vtb_ex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000007fffULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_ex___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vtb_ex___024root___timing_resume(Vtb_ex___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ex___024root___timing_resume\n"); );
    Vtb_ex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000008000ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_ex___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ex___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vtb_ex___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_ex___024root___eval_phase__act(Vtb_ex___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ex___024root___eval_phase__act\n"); );
    Vtb_ex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_ex___024root___eval_triggers_vec__act(vlSelf);
    Vtb_ex___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_ex___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_ex___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_ex___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_ex___024root___timing_resume(vlSelf);
        Vtb_ex___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_ex___024root___eval_phase__inact(Vtb_ex___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ex___024root___eval_phase__inact\n"); );
    Vtb_ex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb_ex.sv", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_ex___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ex___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_ex___024root___eval_phase__nba(Vtb_ex___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ex___024root___eval_phase__nba\n"); );
    Vtb_ex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_ex___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_ex___024root___eval_nba(vlSelf);
        Vtb_ex___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_ex___024root___eval(Vtb_ex___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ex___024root___eval\n"); );
    Vtb_ex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_ex___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb_ex.sv", 3, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tb_ex.sv", 3, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_ex___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tb_ex.sv", 3, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_ex___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_ex___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_ex___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vtb_ex___024root___eval_debug_assertions(Vtb_ex___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ex___024root___eval_debug_assertions\n"); );
    Vtb_ex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
