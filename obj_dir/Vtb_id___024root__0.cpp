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
                                         45);
    vlSelfRef.tb_id__DOT__rst = 0U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "tb_id.sv", 
                                         48);
    vlSelfRef.tb_id__DOT__if_out = 0x1000ffffU;
    vlSelfRef.tb_id__DOT__pc_incr_in = 0x0000000fU;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000014ULL, 
                                         nullptr, "tb_id.sv", 
                                         52);
    vlSelfRef.tb_id__DOT__if_out = 0x8c650000U;
    vlSelfRef.tb_id__DOT__pc_incr_in = 7U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000014ULL, 
                                         nullptr, "tb_id.sv", 
                                         57);
    vlSelfRef.tb_id__DOT__if_out = 0x8d4b0000U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000014ULL, 
                                         nullptr, "tb_id.sv", 
                                         58);
    vlSelfRef.tb_id__DOT__RegWrite = 1U;
    vlSelfRef.tb_id__DOT__wr_reg = 0x0aU;
    vlSelfRef.tb_id__DOT__wr_data = 0xffffffffU;
    vlSelfRef.tb_id__DOT__if_out = 0x8d4b0000U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000014ULL, 
                                         nullptr, "tb_id.sv", 
                                         59);
    vlSelfRef.tb_id__DOT__RegWrite = 0U;
    vlSelfRef.tb_id__DOT__wr_reg = 0U;
    vlSelfRef.tb_id__DOT__wr_data = 0U;
    vlSelfRef.tb_id__DOT__pc_incr_in = 0x0012d4d4U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000014ULL, 
                                         nullptr, "tb_id.sv", 
                                         62);
    vlSelfRef.tb_id__DOT__if_out = 0x8d4b0000U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000064ULL, 
                                         nullptr, "tb_id.sv", 
                                         66);
    VL_FINISH_MT("tb_id.sv", 66, "");
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
                                             29);
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
                                                    (((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                       << 0x00000012U) 
                                                      | ((((IData)(vlSelfRef.tb_id__DOT__rst) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_id__DOT__rst__0))) 
                                                          << 0x00000011U) 
                                                         | (((IData)(vlSelfRef.tb_id__DOT__RegWrite) 
                                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_id__DOT__RegWrite__0))) 
                                                            << 0x00000010U))) 
                                                     | (((((((2U 
                                                              & ((vlSelfRef.tb_id__DOT__if_out 
                                                                  & (~ vlSelfRef.__Vtrigprevexpr___TOP__tb_id__DOT__if_out__0)) 
                                                                 << 1U)) 
                                                             | ((IData)(vlSelfRef.tb_id__DOT__wr_reg) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_id__DOT__wr_reg__0))) 
                                                            << 6U) 
                                                           | (((vlSelfRef.tb_id__DOT__wr_data 
                                                                != vlSelfRef.__Vtrigprevexpr___TOP__tb_id__DOT__wr_data__0) 
                                                               << 5U) 
                                                              | (((IData)(vlSelfRef.tb_id__DOT__wb_ctrl) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_id__DOT__wb_ctrl__0)) 
                                                                 << 4U))) 
                                                          | ((((vlSelfRef.tb_id__DOT__sgn_extend_out 
                                                                != vlSelfRef.__Vtrigprevexpr___TOP__tb_id__DOT__sgn_extend_out__0) 
                                                               << 3U) 
                                                              | (((IData)(vlSelfRef.tb_id__DOT__rt_out) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_id__DOT__rt_out__0)) 
                                                                 << 2U)) 
                                                             | ((((IData)(vlSelfRef.tb_id__DOT__rst) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_id__DOT__rst__0)) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelfRef.tb_id__DOT__rd_out) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_id__DOT__rd_out__0))))) 
                                                         << 8U) 
                                                        | ((((((vlSelfRef.tb_id__DOT__rd_data_two 
                                                                != vlSelfRef.__Vtrigprevexpr___TOP__tb_id__DOT__rd_data_two__0) 
                                                               << 3U) 
                                                              | ((vlSelfRef.tb_id__DOT__rd_data_one 
                                                                  != vlSelfRef.__Vtrigprevexpr___TOP__tb_id__DOT__rd_data_one__0) 
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
    if ((0U == (vlSelfRef.tb_id__DOT__if_out >> 0x1aU))) {
        vlSelfRef.tb_id__DOT__ex_ctrl = 0x0cU;
        vlSelfRef.tb_id__DOT__mem_ctrl = 0U;
        vlSelfRef.tb_id__DOT__wb_ctrl = 2U;
    } else if ((0x23U == (vlSelfRef.tb_id__DOT__if_out 
                          >> 0x1aU))) {
        vlSelfRef.tb_id__DOT__ex_ctrl = 1U;
        vlSelfRef.tb_id__DOT__mem_ctrl = 2U;
        vlSelfRef.tb_id__DOT__wb_ctrl = 3U;
    } else if ((0x2bU == (vlSelfRef.tb_id__DOT__if_out 
                          >> 0x1aU))) {
        vlSelfRef.tb_id__DOT__ex_ctrl = 1U;
        vlSelfRef.tb_id__DOT__mem_ctrl = 1U;
        vlSelfRef.tb_id__DOT__wb_ctrl = 0U;
    } else if ((4U == (vlSelfRef.tb_id__DOT__if_out 
                       >> 0x1aU))) {
        vlSelfRef.tb_id__DOT__ex_ctrl = 2U;
        vlSelfRef.tb_id__DOT__mem_ctrl = 4U;
        vlSelfRef.tb_id__DOT__wb_ctrl = 0U;
    }
    vlSelfRef.tb_id__DOT__sgn_extend_out = ((0xffff0000U 
                                             & vlSelfRef.tb_id__DOT__sgn_extend_out) 
                                            | (0x0000ffffU 
                                               & vlSelfRef.tb_id__DOT__if_out));
    vlSelfRef.tb_id__DOT__rd_out = (0x0000001fU & (vlSelfRef.tb_id__DOT__if_out 
                                                   >> 0x0000000bU));
    vlSelfRef.tb_id__DOT__rt_out = (0x0000001fU & (vlSelfRef.tb_id__DOT__if_out 
                                                   >> 0x00000010U));
    vlSelfRef.tb_id__DOT__rd_data_one = vlSelfRef.tb_id__DOT__id_00__DOT__register_file
        [(0x0000001fU & (vlSelfRef.tb_id__DOT__if_out 
                         >> 0x00000015U))];
    vlSelfRef.tb_id__DOT__rd_data_two = vlSelfRef.tb_id__DOT__id_00__DOT__register_file
        [(0x0000001fU & (vlSelfRef.tb_id__DOT__if_out 
                         >> 0x00000010U))];
}

void Vtb_id___024root___eval_act(Vtb_id___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_id___024root___eval_act\n"); );
    Vtb_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000040000ULL & vlSelfRef.__VactTriggered[0U])) {
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
        VL_WRITEF_NX("%t: clk %1b, rst %1b, if_out %32b, pc_incr_in %32b, wr_reg %32b, wr_data %32b, RegWrite %1b, wb_ctrl %2b, mem_ctrl %3b, ex_ctrl %4b, pc_incr_out %32b, sgn_extend_out %32b, rd_data_one %32b, rd_data_two %32b, rd_out %5b, rt_out %5b\n",0,
                     64,VL_TIME_UNITED_Q(1),-9,1,(IData)(vlSelfRef.tb_id__DOT__clk),
                     1,vlSelfRef.tb_id__DOT__rst,32,
                     vlSelfRef.tb_id__DOT__if_out,32,
                     vlSelfRef.tb_id__DOT__pc_incr_in,
                     5,(IData)(vlSelfRef.tb_id__DOT__wr_reg),
                     32,vlSelfRef.tb_id__DOT__wr_data,
                     1,(IData)(vlSelfRef.tb_id__DOT__RegWrite),
                     2,vlSelfRef.tb_id__DOT__wb_ctrl,
                     3,(IData)(vlSelfRef.tb_id__DOT__mem_ctrl),
                     4,vlSelfRef.tb_id__DOT__ex_ctrl,
                     32,vlSelfRef.tb_id__DOT__pc_incr_in,
                     32,vlSelfRef.tb_id__DOT__sgn_extend_out,
                     32,vlSelfRef.tb_id__DOT__id_00__DOT__register_file
                     [(0x0000001fU & (vlSelfRef.tb_id__DOT__if_out 
                                      >> 0x00000015U))],
                     32,vlSelfRef.tb_id__DOT__id_00__DOT__register_file
                     [(0x0000001fU & (vlSelfRef.tb_id__DOT__if_out 
                                      >> 0x00000010U))],
                     5,(0x0000001fU & (vlSelfRef.tb_id__DOT__if_out 
                                       >> 0x0000000bU)),
                     5,(0x0000001fU & (vlSelfRef.tb_id__DOT__if_out 
                                       >> 0x00000010U)));
    }
}

void Vtb_id___024root___nba_sequent__TOP__1(Vtb_id___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_id___024root___nba_sequent__TOP__1\n"); );
    Vtb_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdlySet__tb_id__DOT__id_00__DOT__register_file__v0;
    __VdlySet__tb_id__DOT__id_00__DOT__register_file__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_id__DOT__id_00__DOT__register_file__v31;
    __VdlyVal__tb_id__DOT__id_00__DOT__register_file__v31 = 0;
    CData/*4:0*/ __VdlyDim0__tb_id__DOT__id_00__DOT__register_file__v31;
    __VdlyDim0__tb_id__DOT__id_00__DOT__register_file__v31 = 0;
    CData/*0:0*/ __VdlySet__tb_id__DOT__id_00__DOT__register_file__v31;
    __VdlySet__tb_id__DOT__id_00__DOT__register_file__v31 = 0;
    // Body
    __VdlySet__tb_id__DOT__id_00__DOT__register_file__v0 = 0U;
    __VdlySet__tb_id__DOT__id_00__DOT__register_file__v31 = 0U;
    if (vlSelfRef.tb_id__DOT__rst) {
        vlSelfRef.tb_id__DOT__id_00__DOT__i = 0x0000001fU;
        __VdlySet__tb_id__DOT__id_00__DOT__register_file__v0 = 1U;
    } else if (vlSelfRef.tb_id__DOT__RegWrite) {
        __VdlyVal__tb_id__DOT__id_00__DOT__register_file__v31 
            = vlSelfRef.tb_id__DOT__wr_data;
        __VdlyDim0__tb_id__DOT__id_00__DOT__register_file__v31 
            = vlSelfRef.tb_id__DOT__wr_reg;
        __VdlySet__tb_id__DOT__id_00__DOT__register_file__v31 = 1U;
    }
    if (__VdlySet__tb_id__DOT__id_00__DOT__register_file__v0) {
        vlSelfRef.tb_id__DOT__id_00__DOT__register_file[0U] = 0U;
        vlSelfRef.tb_id__DOT__id_00__DOT__register_file[1U] = 1U;
        vlSelfRef.tb_id__DOT__id_00__DOT__register_file[2U] = 2U;
        vlSelfRef.tb_id__DOT__id_00__DOT__register_file[3U] = 3U;
        vlSelfRef.tb_id__DOT__id_00__DOT__register_file[4U] = 4U;
        vlSelfRef.tb_id__DOT__id_00__DOT__register_file[5U] = 5U;
        vlSelfRef.tb_id__DOT__id_00__DOT__register_file[6U] = 6U;
        vlSelfRef.tb_id__DOT__id_00__DOT__register_file[7U] = 7U;
        vlSelfRef.tb_id__DOT__id_00__DOT__register_file[8U] = 8U;
        vlSelfRef.tb_id__DOT__id_00__DOT__register_file[9U] = 9U;
        vlSelfRef.tb_id__DOT__id_00__DOT__register_file[10U] = 0x0000000aU;
        vlSelfRef.tb_id__DOT__id_00__DOT__register_file[11U] = 0x0000000bU;
        vlSelfRef.tb_id__DOT__id_00__DOT__register_file[12U] = 0x0000000cU;
        vlSelfRef.tb_id__DOT__id_00__DOT__register_file[13U] = 0x0000000dU;
        vlSelfRef.tb_id__DOT__id_00__DOT__register_file[14U] = 0x0000000eU;
        vlSelfRef.tb_id__DOT__id_00__DOT__register_file[15U] = 0x0000000fU;
        vlSelfRef.tb_id__DOT__id_00__DOT__register_file[16U] = 0x00000010U;
        vlSelfRef.tb_id__DOT__id_00__DOT__register_file[17U] = 0x00000011U;
        vlSelfRef.tb_id__DOT__id_00__DOT__register_file[18U] = 0x00000012U;
        vlSelfRef.tb_id__DOT__id_00__DOT__register_file[19U] = 0x00000013U;
        vlSelfRef.tb_id__DOT__id_00__DOT__register_file[20U] = 0x00000014U;
        vlSelfRef.tb_id__DOT__id_00__DOT__register_file[21U] = 0x00000015U;
        vlSelfRef.tb_id__DOT__id_00__DOT__register_file[22U] = 0x00000016U;
        vlSelfRef.tb_id__DOT__id_00__DOT__register_file[23U] = 0x00000017U;
        vlSelfRef.tb_id__DOT__id_00__DOT__register_file[24U] = 0x00000018U;
        vlSelfRef.tb_id__DOT__id_00__DOT__register_file[25U] = 0x00000019U;
        vlSelfRef.tb_id__DOT__id_00__DOT__register_file[26U] = 0x0000001aU;
        vlSelfRef.tb_id__DOT__id_00__DOT__register_file[27U] = 0x0000001bU;
        vlSelfRef.tb_id__DOT__id_00__DOT__register_file[28U] = 0x0000001cU;
        vlSelfRef.tb_id__DOT__id_00__DOT__register_file[29U] = 0x0000001dU;
        vlSelfRef.tb_id__DOT__id_00__DOT__register_file[30U] = 0x0000001eU;
    }
    if (__VdlySet__tb_id__DOT__id_00__DOT__register_file__v31) {
        vlSelfRef.tb_id__DOT__id_00__DOT__register_file[__VdlyDim0__tb_id__DOT__id_00__DOT__register_file__v31] 
            = __VdlyVal__tb_id__DOT__id_00__DOT__register_file__v31;
    }
}

void Vtb_id___024root___nba_sequent__TOP__2(Vtb_id___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_id___024root___nba_sequent__TOP__2\n"); );
    Vtb_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tb_id__DOT__sgn_extend_out;
    __Vdly__tb_id__DOT__sgn_extend_out = 0;
    IData/*31:0*/ __VdlyMask__tb_id__DOT__sgn_extend_out;
    __VdlyMask__tb_id__DOT__sgn_extend_out = 0;
    // Body
    vlSelfRef.tb_id__DOT__id_00__DOT__unnamedblk1__DOT__j = 0x00000020U;
    __Vdly__tb_id__DOT__sgn_extend_out = ((0xfff8ffffU 
                                           & __Vdly__tb_id__DOT__sgn_extend_out) 
                                          | (((4U & 
                                               (vlSelfRef.tb_id__DOT__if_out 
                                                >> 0x0000000dU)) 
                                              | ((2U 
                                                  & (vlSelfRef.tb_id__DOT__if_out 
                                                     >> 0x0000000eU)) 
                                                 | (1U 
                                                    & (vlSelfRef.tb_id__DOT__if_out 
                                                       >> 0x0fU)))) 
                                             << 0x00000010U));
    __VdlyMask__tb_id__DOT__sgn_extend_out = (0x00070000U 
                                              | __VdlyMask__tb_id__DOT__sgn_extend_out);
    __Vdly__tb_id__DOT__sgn_extend_out = ((0xffc7ffffU 
                                           & __Vdly__tb_id__DOT__sgn_extend_out) 
                                          | (((4U & 
                                               (vlSelfRef.tb_id__DOT__if_out 
                                                >> 0x0000000dU)) 
                                              | ((2U 
                                                  & (vlSelfRef.tb_id__DOT__if_out 
                                                     >> 0x0000000eU)) 
                                                 | (1U 
                                                    & (vlSelfRef.tb_id__DOT__if_out 
                                                       >> 0x0fU)))) 
                                             << 0x00000013U));
    __VdlyMask__tb_id__DOT__sgn_extend_out = (0x00380000U 
                                              | __VdlyMask__tb_id__DOT__sgn_extend_out);
    __Vdly__tb_id__DOT__sgn_extend_out = ((0xfe3fffffU 
                                           & __Vdly__tb_id__DOT__sgn_extend_out) 
                                          | (((4U & 
                                               (vlSelfRef.tb_id__DOT__if_out 
                                                >> 0x0000000dU)) 
                                              | ((2U 
                                                  & (vlSelfRef.tb_id__DOT__if_out 
                                                     >> 0x0000000eU)) 
                                                 | (1U 
                                                    & (vlSelfRef.tb_id__DOT__if_out 
                                                       >> 0x0fU)))) 
                                             << 0x00000016U));
    __VdlyMask__tb_id__DOT__sgn_extend_out = (0x01c00000U 
                                              | __VdlyMask__tb_id__DOT__sgn_extend_out);
    __Vdly__tb_id__DOT__sgn_extend_out = ((0xf1ffffffU 
                                           & __Vdly__tb_id__DOT__sgn_extend_out) 
                                          | (((4U & 
                                               (vlSelfRef.tb_id__DOT__if_out 
                                                >> 0x0000000dU)) 
                                              | ((2U 
                                                  & (vlSelfRef.tb_id__DOT__if_out 
                                                     >> 0x0000000eU)) 
                                                 | (1U 
                                                    & (vlSelfRef.tb_id__DOT__if_out 
                                                       >> 0x0fU)))) 
                                             << 0x00000019U));
    __VdlyMask__tb_id__DOT__sgn_extend_out = (0x0e000000U 
                                              | __VdlyMask__tb_id__DOT__sgn_extend_out);
    __Vdly__tb_id__DOT__sgn_extend_out = ((0x8fffffffU 
                                           & __Vdly__tb_id__DOT__sgn_extend_out) 
                                          | (((4U & 
                                               (vlSelfRef.tb_id__DOT__if_out 
                                                >> 0x0000000dU)) 
                                              | ((2U 
                                                  & (vlSelfRef.tb_id__DOT__if_out 
                                                     >> 0x0000000eU)) 
                                                 | (1U 
                                                    & (vlSelfRef.tb_id__DOT__if_out 
                                                       >> 0x0fU)))) 
                                             << 0x0000001cU));
    __VdlyMask__tb_id__DOT__sgn_extend_out = (0x70000000U 
                                              | __VdlyMask__tb_id__DOT__sgn_extend_out);
    __Vdly__tb_id__DOT__sgn_extend_out = ((0x7fffffffU 
                                           & __Vdly__tb_id__DOT__sgn_extend_out) 
                                          | (0x80000000U 
                                             & (vlSelfRef.tb_id__DOT__if_out 
                                                << 0x00000010U)));
    __VdlyMask__tb_id__DOT__sgn_extend_out = (0x80000000U 
                                              | __VdlyMask__tb_id__DOT__sgn_extend_out);
    vlSelfRef.tb_id__DOT__sgn_extend_out = ((__Vdly__tb_id__DOT__sgn_extend_out 
                                             & __VdlyMask__tb_id__DOT__sgn_extend_out) 
                                            | (vlSelfRef.tb_id__DOT__sgn_extend_out 
                                               & (~ __VdlyMask__tb_id__DOT__sgn_extend_out)));
    __VdlyMask__tb_id__DOT__sgn_extend_out = 0U;
}

void Vtb_id___024root___nba_comb__TOP__0(Vtb_id___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_id___024root___nba_comb__TOP__0\n"); );
    Vtb_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_id__DOT__rd_data_one = vlSelfRef.tb_id__DOT__id_00__DOT__register_file
        [(0x0000001fU & (vlSelfRef.tb_id__DOT__if_out 
                         >> 0x00000015U))];
    vlSelfRef.tb_id__DOT__rd_data_two = vlSelfRef.tb_id__DOT__id_00__DOT__register_file
        [(0x0000001fU & (vlSelfRef.tb_id__DOT__if_out 
                         >> 0x00000010U))];
}

void Vtb_id___024root___eval_nba(Vtb_id___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_id___024root___eval_nba\n"); );
    Vtb_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000007fffULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_id___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x0000000000030000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_id___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((0x0000000000008000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_id___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x0000000000070000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_id___024root___nba_comb__TOP__0(vlSelf);
    }
}

void Vtb_id___024root___timing_resume(Vtb_id___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_id___024root___timing_resume\n"); );
    Vtb_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000040000ULL & vlSelfRef.__VactTriggered[0U])) {
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
        VL_FATAL_MT("tb_id.sv", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
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
            VL_FATAL_MT("tb_id.sv", 3, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tb_id.sv", 3, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_id___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tb_id.sv", 3, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
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
