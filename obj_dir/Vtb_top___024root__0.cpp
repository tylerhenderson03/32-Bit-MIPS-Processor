// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

VL_ATTR_COLD void Vtb_top___024root___eval_initial__TOP(Vtb_top___024root* vlSelf);
VlCoroutine Vtb_top___024root___eval_initial__TOP__Vtiming__0(Vtb_top___024root* vlSelf);
VlCoroutine Vtb_top___024root___eval_initial__TOP__Vtiming__1(Vtb_top___024root* vlSelf);

void Vtb_top___024root___eval_initial(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_initial\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_top___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_top___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_top___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vtb_top___024root___eval_initial__TOP__Vtiming__0(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__clk = 0U;
    vlSelfRef.tb_top__DOT__rst = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "tb_top.sv", 
                                         111);
    vlSelfRef.tb_top__DOT__rst = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000000c8ULL, 
                                         nullptr, "tb_top.sv", 
                                         116);
    VL_FINISH_MT("tb_top.sv", 116, "");
    co_return;
}

VlCoroutine Vtb_top___024root___eval_initial__TOP__Vtiming__1(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb_top.sv", 
                                             106);
        vlSelfRef.tb_top__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_top__DOT__clk)));
    }
    co_return;
}

void Vtb_top___024root___eval_triggers_vec__act(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_triggers_vec__act\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (((QData)((IData)(
                                                      (((((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                           << 5U) 
                                                          | (((~ (IData)(vlSelfRef.tb_top__DOT__clk)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__clk__0)) 
                                                             << 4U)) 
                                                         | (((((IData)(vlSelfRef.tb_top__DOT__rst) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__rst__0))) 
                                                              << 3U) 
                                                             | (((IData)(vlSelfRef.tb_top__DOT__clk) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__clk__0))) 
                                                                << 2U)) 
                                                            | ((((IData)(vlSelfRef.tb_top__DOT__wb_regWrite) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__wb_regWrite__0)) 
                                                                << 1U) 
                                                               | (vlSelfRef.tb_top__DOT__wb_regData 
                                                                  != vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__wb_regData__0)))) 
                                                        << 8U) 
                                                       | (((((((IData)(vlSelfRef.tb_top__DOT__rst) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__rst__0)) 
                                                              << 3U) 
                                                             | (((IData)(vlSelfRef.tb_top__DOT__mem_wb_wbCtrl) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__mem_wb_wbCtrl__0)) 
                                                                << 2U)) 
                                                            | ((((IData)(vlSelfRef.tb_top__DOT__mem_wb_regDst) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__mem_wb_regDst__0)) 
                                                                << 1U) 
                                                               | (vlSelfRef.tb_top__DOT__mem_wb_memReadData 
                                                                  != vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__mem_wb_memReadData__0))) 
                                                           << 4U) 
                                                          | ((((vlSelfRef.tb_top__DOT__mem_wb_aluResult 
                                                                != vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__mem_wb_aluResult__0) 
                                                               << 3U) 
                                                              | ((vlSelfRef.tb_top__DOT__mem_memReadData 
                                                                  != vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__mem_memReadData__0) 
                                                                 << 2U)) 
                                                             | ((((IData)(vlSelfRef.tb_top__DOT__mem_branchFlag) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__mem_branchFlag__0)) 
                                                                 << 1U) 
                                                                | (vlSelfRef.tb_top__DOT__if_pc_pp 
                                                                   != vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__if_pc_pp__0))))))) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(
                                                       (((((((((vlSelfRef.tb_top__DOT__if_inst 
                                                                != vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__if_inst__0) 
                                                               << 3U) 
                                                              | ((vlSelfRef.tb_top__DOT__if_id_pcIncr 
                                                                  != vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__if_id_pcIncr__0) 
                                                                 << 2U)) 
                                                             | (((vlSelfRef.tb_top__DOT__if_id_inst 
                                                                  != vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__if_id_inst__0) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelfRef.tb_top__DOT__id_wbCtrl) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__id_wbCtrl__0)))) 
                                                            << 0x0000000cU) 
                                                           | (((((vlSelfRef.tb_top__DOT__id_sgnExt 
                                                                  != vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__id_sgnExt__0) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.tb_top__DOT__id_regT) 
                                                                    != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__id_regT__0)) 
                                                                   << 2U)) 
                                                               | ((((IData)(vlSelfRef.tb_top__DOT__id_regD) 
                                                                    != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__id_regD__0)) 
                                                                   << 1U) 
                                                                  | (vlSelfRef.tb_top__DOT__id_rdDataTwo 
                                                                     != vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__id_rdDataTwo__0))) 
                                                              << 8U)) 
                                                          | ((((((vlSelfRef.tb_top__DOT__id_rdDataOne 
                                                                  != vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__id_rdDataOne__0) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.tb_top__DOT__id_memCtrl) 
                                                                    != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__id_memCtrl__0)) 
                                                                   << 2U)) 
                                                               | ((((IData)(vlSelfRef.tb_top__DOT__id_ex_wbCtrl) 
                                                                    != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__id_ex_wbCtrl__0)) 
                                                                   << 1U) 
                                                                  | (vlSelfRef.tb_top__DOT__id_ex_sgnExt 
                                                                     != vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__id_ex_sgnExt__0))) 
                                                              << 4U) 
                                                             | (((((IData)(vlSelfRef.tb_top__DOT__id_ex_regT) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__id_ex_regT__0)) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelfRef.tb_top__DOT__id_ex_regD) 
                                                                     != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__id_ex_regD__0)) 
                                                                    << 2U)) 
                                                                | (((vlSelfRef.tb_top__DOT__id_ex_rdDataTwo 
                                                                     != vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__id_ex_rdDataTwo__0) 
                                                                    << 1U) 
                                                                   | (vlSelfRef.tb_top__DOT__id_ex_rdDataOne 
                                                                      != vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__id_ex_rdDataOne__0))))) 
                                                         << 0x00000010U) 
                                                        | (((((((vlSelfRef.tb_top__DOT__id_ex_pcIncr 
                                                                 != vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__id_ex_pcIncr__0) 
                                                                << 3U) 
                                                               | (((IData)(vlSelfRef.tb_top__DOT__id_ex_memCtrl) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__id_ex_memCtrl__0)) 
                                                                  << 2U)) 
                                                              | ((((IData)(vlSelfRef.tb_top__DOT__id_ex_exCtrl) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__id_ex_exCtrl__0)) 
                                                                  << 1U) 
                                                                 | ((IData)(vlSelfRef.tb_top__DOT__id_exCtrl) 
                                                                    != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__id_exCtrl__0)))) 
                                                             << 0x0000000cU) 
                                                            | ((((((IData)(vlSelfRef.tb_top__DOT__ex_zeroFlag) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__ex_zeroFlag__0)) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelfRef.tb_top__DOT__ex_regDst) 
                                                                     != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__ex_regDst__0)) 
                                                                    << 2U)) 
                                                                | (((vlSelfRef.tb_top__DOT__ex_pcAdd 
                                                                     != vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__ex_pcAdd__0) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelfRef.tb_top__DOT__ex_mem_zeroFlag) 
                                                                      != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__ex_mem_zeroFlag__0)))) 
                                                               << 8U)) 
                                                           | (((((((IData)(vlSelfRef.tb_top__DOT__ex_mem_wbCtrl) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__ex_mem_wbCtrl__0)) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelfRef.tb_top__DOT__ex_mem_regDst) 
                                                                     != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__ex_mem_regDst__0)) 
                                                                    << 2U)) 
                                                                | (((vlSelfRef.tb_top__DOT__ex_mem_rdDataTwo 
                                                                     != vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__ex_mem_rdDataTwo__0) 
                                                                    << 1U) 
                                                                   | (vlSelfRef.tb_top__DOT__ex_mem_pcAdd 
                                                                      != vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__ex_mem_pcAdd__0))) 
                                                               << 4U) 
                                                              | (((((IData)(vlSelfRef.tb_top__DOT__ex_mem_memCtrl) 
                                                                    != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__ex_mem_memCtrl__0)) 
                                                                   << 3U) 
                                                                  | ((vlSelfRef.tb_top__DOT__ex_mem_aluResult 
                                                                      != vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__ex_mem_aluResult__0) 
                                                                     << 2U)) 
                                                                 | (((vlSelfRef.tb_top__DOT__ex_aluResult 
                                                                      != vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__ex_aluResult__0) 
                                                                     << 1U) 
                                                                    | ((IData)(vlSelfRef.tb_top__DOT__clk) 
                                                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__clk__0))))))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__clk__0 
        = vlSelfRef.tb_top__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__ex_aluResult__0 
        = vlSelfRef.tb_top__DOT__ex_aluResult;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__ex_mem_aluResult__0 
        = vlSelfRef.tb_top__DOT__ex_mem_aluResult;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__ex_mem_memCtrl__0 
        = vlSelfRef.tb_top__DOT__ex_mem_memCtrl;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__ex_mem_pcAdd__0 
        = vlSelfRef.tb_top__DOT__ex_mem_pcAdd;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__ex_mem_rdDataTwo__0 
        = vlSelfRef.tb_top__DOT__ex_mem_rdDataTwo;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__ex_mem_regDst__0 
        = vlSelfRef.tb_top__DOT__ex_mem_regDst;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__ex_mem_wbCtrl__0 
        = vlSelfRef.tb_top__DOT__ex_mem_wbCtrl;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__ex_mem_zeroFlag__0 
        = vlSelfRef.tb_top__DOT__ex_mem_zeroFlag;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__ex_pcAdd__0 
        = vlSelfRef.tb_top__DOT__ex_pcAdd;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__ex_regDst__0 
        = vlSelfRef.tb_top__DOT__ex_regDst;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__ex_zeroFlag__0 
        = vlSelfRef.tb_top__DOT__ex_zeroFlag;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__id_exCtrl__0 
        = vlSelfRef.tb_top__DOT__id_exCtrl;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__id_ex_exCtrl__0 
        = vlSelfRef.tb_top__DOT__id_ex_exCtrl;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__id_ex_memCtrl__0 
        = vlSelfRef.tb_top__DOT__id_ex_memCtrl;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__id_ex_pcIncr__0 
        = vlSelfRef.tb_top__DOT__id_ex_pcIncr;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__id_ex_rdDataOne__0 
        = vlSelfRef.tb_top__DOT__id_ex_rdDataOne;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__id_ex_rdDataTwo__0 
        = vlSelfRef.tb_top__DOT__id_ex_rdDataTwo;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__id_ex_regD__0 
        = vlSelfRef.tb_top__DOT__id_ex_regD;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__id_ex_regT__0 
        = vlSelfRef.tb_top__DOT__id_ex_regT;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__id_ex_sgnExt__0 
        = vlSelfRef.tb_top__DOT__id_ex_sgnExt;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__id_ex_wbCtrl__0 
        = vlSelfRef.tb_top__DOT__id_ex_wbCtrl;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__id_memCtrl__0 
        = vlSelfRef.tb_top__DOT__id_memCtrl;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__id_rdDataOne__0 
        = vlSelfRef.tb_top__DOT__id_rdDataOne;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__id_rdDataTwo__0 
        = vlSelfRef.tb_top__DOT__id_rdDataTwo;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__id_regD__0 
        = vlSelfRef.tb_top__DOT__id_regD;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__id_regT__0 
        = vlSelfRef.tb_top__DOT__id_regT;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__id_sgnExt__0 
        = vlSelfRef.tb_top__DOT__id_sgnExt;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__id_wbCtrl__0 
        = vlSelfRef.tb_top__DOT__id_wbCtrl;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__if_id_inst__0 
        = vlSelfRef.tb_top__DOT__if_id_inst;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__if_id_pcIncr__0 
        = vlSelfRef.tb_top__DOT__if_id_pcIncr;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__if_inst__0 
        = vlSelfRef.tb_top__DOT__if_inst;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__if_pc_pp__0 
        = vlSelfRef.tb_top__DOT__if_pc_pp;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__mem_branchFlag__0 
        = vlSelfRef.tb_top__DOT__mem_branchFlag;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__mem_memReadData__0 
        = vlSelfRef.tb_top__DOT__mem_memReadData;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__mem_wb_aluResult__0 
        = vlSelfRef.tb_top__DOT__mem_wb_aluResult;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__mem_wb_memReadData__0 
        = vlSelfRef.tb_top__DOT__mem_wb_memReadData;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__mem_wb_regDst__0 
        = vlSelfRef.tb_top__DOT__mem_wb_regDst;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__mem_wb_wbCtrl__0 
        = vlSelfRef.tb_top__DOT__mem_wb_wbCtrl;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__rst__0 
        = vlSelfRef.tb_top__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__wb_regData__0 
        = vlSelfRef.tb_top__DOT__wb_regData;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__wb_regWrite__0 
        = vlSelfRef.tb_top__DOT__wb_regWrite;
}

bool Vtb_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___trigger_anySet__act\n"); );
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

void Vtb_top___024root___act_sequent__TOP__0(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___act_sequent__TOP__0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__if_inst = ((IData)(vlSelfRef.tb_top__DOT__rst)
                                       ? 0U : vlSelfRef.tb_top__DOT__instruction_memory
                                      [(0x0000001fU 
                                        & (vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__pc 
                                           >> 2U))]);
}

void Vtb_top___024root___eval_act(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_act\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000200000000000ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb_top___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtb_top___024root___nba_sequent__TOP__0(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_sequent__TOP__0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory__v0 = 0U;
    if ((2U & (IData)(vlSelfRef.tb_top__DOT__ex_mem_memCtrl))) {
        vlSelfRef.__VdlyVal__tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory__v0 
            = vlSelfRef.tb_top__DOT__ex_mem_rdDataTwo;
        vlSelfRef.__VdlyDim0__tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory__v0 
            = (0x0000001fU & (vlSelfRef.tb_top__DOT__ex_mem_aluResult 
                              >> 2U));
        vlSelfRef.__VdlySet__tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory__v0 = 1U;
    }
}

void Vtb_top___024root___nba_sequent__TOP__1(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_sequent__TOP__1\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__tb_top__DOT__ex_mem_pcAdd = vlSelfRef.tb_top__DOT__ex_mem_pcAdd;
    vlSelfRef.__Vdly__tb_top__DOT__ex_mem_pcAdd = ((IData)(vlSelfRef.tb_top__DOT__rst)
                                                    ? 0U
                                                    : 
                                                   (vlSelfRef.tb_top__DOT__id_ex_pcIncr 
                                                    + 
                                                    VL_SHIFTL_III(32,32,32, vlSelfRef.tb_top__DOT__id_ex_sgnExt, 2U)));
}

void Vtb_top___024root___nba_sequent__TOP__2(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_sequent__TOP__2\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__tb_top__DOT__reg_file_debug__v0 = 0U;
    vlSelfRef.__VdlySet__tb_top__DOT__reg_file_debug__v32 = 0U;
    if (vlSelfRef.tb_top__DOT__rst) {
        vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__i = 0x00000020U;
        vlSelfRef.__VdlySet__tb_top__DOT__reg_file_debug__v0 = 1U;
    } else if ((2U & (IData)(vlSelfRef.tb_top__DOT__mem_wb_wbCtrl))) {
        vlSelfRef.__VdlyVal__tb_top__DOT__reg_file_debug__v32 
            = ((1U & (IData)(vlSelfRef.tb_top__DOT__mem_wb_wbCtrl))
                ? vlSelfRef.tb_top__DOT__mem_wb_memReadData
                : vlSelfRef.tb_top__DOT__mem_wb_aluResult);
        vlSelfRef.__VdlyDim0__tb_top__DOT__reg_file_debug__v32 
            = vlSelfRef.tb_top__DOT__mem_wb_regDst;
        vlSelfRef.__VdlySet__tb_top__DOT__reg_file_debug__v32 = 1U;
    }
}

void Vtb_top___024root___nba_sequent__TOP__3(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_sequent__TOP__3\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                      & (1U == vlSymsp->TOP____024unit.__VmonitorNum))))) {
        VL_WRITEF_NX("%t: clk %1b, rst %1b, if_pc_pp %32b, if_inst %32b, if_id_pcIncr %32b, if_id_inst %32b, id_regT %5b, id_regD %5b, id_pcIncr %32b, id_exCtrl %4b, id_memCtrl %3b, id_wbCtrl %2b, id_sgnExt %32b, id_rdDataOne %32b, id_rdDataTwo %32b, id_ex_regT %5b, id_ex_regD %5b, id_ex_pcIncr %32b, id_ex_exCtrl %4b, id_ex_memCtrl %3b, id_ex_wbCtrl %2b, id_ex_sgnExt %32b, id_ex_rdDataOne %32b, id_ex_rdDataTwo %32b, ex_regDst %5b, ex_memCtrl %3b, ex_wbCtrl %2b, ex_zeroFlag %1b, ex_aluResult %32b, ex_rdDataTwo %32b, ex_pcAdd %32b, ex_mem_regDst %5b, ex_mem_memCtrl %3b, ex_mem_wbCtrl %2b, ex_mem_zeroFlag %1b, ex_mem_aluResult %32b, ex_mem_rdDataTwo %32b, ex_mem_pcAdd %32b, mem_branchFlag %1b, mem_branchAddr %32b, mem_wbCtrl %2b, mem_regDst %5b, mem_memReadData %32b, mem_aluResult %32b, mem_wb_wbCtrl %2b, mem_wb_regDst %5b, mem_wb_memReadData %32b, mem_wb_aluResult %32b, wb_regWrite %1b, wb_regDst %5b, wb_regData %32b | R0=%0x | R1=%0x | R2=%0x | R3=%0x | R4=%0x | R5=%0x | R6=%0x | R7=%0x | R8=%0x | R9=%0x | R10=%0x | R11=%0x | R12=%0x | R13=%0x | R14=%0x | R15=%0x | R16=%0x | R17=%0x | R18=%0x | R19=%0x | R20=%0x | R21=%0x | R22=%0x | R23=%0x | R24=%0x | R25=%0x | R26=%0x | R27=%0x | R28=%0x | R29=%0x | R30=%0x | R31=%0x\n",0,
                     64,VL_TIME_UNITED_Q(1),-9,1,(IData)(vlSelfRef.tb_top__DOT__clk),
                     1,vlSelfRef.tb_top__DOT__rst,32,
                     ((IData)(4U) + vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__pc),
                     32,((IData)(vlSelfRef.tb_top__DOT__rst)
                          ? 0U : vlSelfRef.tb_top__DOT__instruction_memory
                         [(0x0000001fU & (vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__pc 
                                          >> 2U))]),
                     32,vlSelfRef.tb_top__DOT__if_id_pcIncr,
                     32,vlSelfRef.tb_top__DOT__if_id_inst,
                     5,(0x0000001fU & (vlSelfRef.tb_top__DOT__if_id_inst 
                                       >> 0x00000010U)),
                     5,(0x0000001fU & (vlSelfRef.tb_top__DOT__if_id_inst 
                                       >> 0x0000000bU)),
                     32,vlSelfRef.tb_top__DOT__if_id_pcIncr,
                     4,(IData)(vlSelfRef.tb_top__DOT__id_exCtrl),
                     3,vlSelfRef.tb_top__DOT__id_memCtrl,
                     2,(IData)(vlSelfRef.tb_top__DOT__id_wbCtrl),
                     32,(((- (IData)((1U & (vlSelfRef.tb_top__DOT__if_id_inst 
                                            >> 0x0000000fU)))) 
                          << 0x00000010U) | (0x0000ffffU 
                                             & vlSelfRef.tb_top__DOT__if_id_inst)),
                     32,vlSelfRef.tb_top__DOT__reg_file_debug
                     [(0x0000001fU & (vlSelfRef.tb_top__DOT__if_id_inst 
                                      >> 0x00000015U))],
                     32,vlSelfRef.tb_top__DOT__reg_file_debug
                     [(0x0000001fU & (vlSelfRef.tb_top__DOT__if_id_inst 
                                      >> 0x00000010U))],
                     5,vlSelfRef.tb_top__DOT__id_ex_regT,
                     5,(IData)(vlSelfRef.tb_top__DOT__id_ex_regD),
                     32,vlSelfRef.tb_top__DOT__id_ex_pcIncr,
                     4,(IData)(vlSelfRef.tb_top__DOT__id_ex_exCtrl),
                     3,vlSelfRef.tb_top__DOT__id_ex_memCtrl,
                     2,(IData)(vlSelfRef.tb_top__DOT__id_ex_wbCtrl),
                     32,vlSelfRef.tb_top__DOT__id_ex_sgnExt,
                     32,vlSelfRef.tb_top__DOT__id_ex_rdDataOne,
                     32,vlSelfRef.tb_top__DOT__id_ex_rdDataTwo,
                     5,((8U & (IData)(vlSelfRef.tb_top__DOT__id_ex_exCtrl))
                         ? (IData)(vlSelfRef.tb_top__DOT__id_ex_regD)
                         : (IData)(vlSelfRef.tb_top__DOT__id_ex_regT)),
                     3,(IData)(vlSelfRef.tb_top__DOT__id_ex_memCtrl),
                     2,vlSelfRef.tb_top__DOT__id_ex_wbCtrl,
                     1,(0U == vlSelfRef.tb_top__DOT__ex_aluResult),
                     32,vlSelfRef.tb_top__DOT__ex_aluResult,
                     32,vlSelfRef.tb_top__DOT__id_ex_rdDataTwo,
                     32,(vlSelfRef.tb_top__DOT__id_ex_pcIncr 
                         + VL_SHIFTL_III(32,32,32, vlSelfRef.tb_top__DOT__id_ex_sgnExt, 2U)),
                     5,(IData)(vlSelfRef.tb_top__DOT__ex_mem_regDst),
                     3,vlSelfRef.tb_top__DOT__ex_mem_memCtrl,
                     2,(IData)(vlSelfRef.tb_top__DOT__ex_mem_wbCtrl),
                     1,vlSelfRef.tb_top__DOT__ex_mem_zeroFlag,
                     32,vlSelfRef.tb_top__DOT__ex_mem_aluResult,
                     32,vlSelfRef.tb_top__DOT__ex_mem_rdDataTwo,
                     32,vlSelfRef.tb_top__DOT__ex_mem_pcAdd,
                     1,(((IData)(vlSelfRef.tb_top__DOT__ex_mem_memCtrl) 
                         >> 2U) & (IData)(vlSelfRef.tb_top__DOT__ex_mem_zeroFlag)),
                     32,vlSelfRef.tb_top__DOT__ex_mem_pcAdd,
                     2,(IData)(vlSelfRef.tb_top__DOT__ex_mem_wbCtrl),
                     5,vlSelfRef.tb_top__DOT__ex_mem_regDst,
                     32,((1U & (IData)(vlSelfRef.tb_top__DOT__ex_mem_memCtrl))
                          ? vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory
                         [(0x0000001fU & (vlSelfRef.tb_top__DOT__ex_mem_aluResult 
                                          >> 2U))] : 0U),
                     32,vlSelfRef.tb_top__DOT__ex_mem_aluResult,
                     2,(IData)(vlSelfRef.tb_top__DOT__mem_wb_wbCtrl),
                     5,vlSelfRef.tb_top__DOT__mem_wb_regDst,
                     32,vlSelfRef.tb_top__DOT__mem_wb_memReadData,
                     32,vlSelfRef.tb_top__DOT__mem_wb_aluResult,
                     1,(1U & ((IData)(vlSelfRef.tb_top__DOT__mem_wb_wbCtrl) 
                              >> 1U)),5,(IData)(vlSelfRef.tb_top__DOT__mem_wb_regDst),
                     32,((1U & (IData)(vlSelfRef.tb_top__DOT__mem_wb_wbCtrl))
                          ? vlSelfRef.tb_top__DOT__mem_wb_memReadData
                          : vlSelfRef.tb_top__DOT__mem_wb_aluResult),
                     32,vlSelfRef.tb_top__DOT__reg_file_debug[0U],
                     32,vlSelfRef.tb_top__DOT__reg_file_debug[1U],
                     32,vlSelfRef.tb_top__DOT__reg_file_debug[2U],
                     32,vlSelfRef.tb_top__DOT__reg_file_debug[3U],
                     32,vlSelfRef.tb_top__DOT__reg_file_debug[4U],
                     32,vlSelfRef.tb_top__DOT__reg_file_debug[5U],
                     32,vlSelfRef.tb_top__DOT__reg_file_debug[6U],
                     32,vlSelfRef.tb_top__DOT__reg_file_debug[7U],
                     32,vlSelfRef.tb_top__DOT__reg_file_debug[8U],
                     32,vlSelfRef.tb_top__DOT__reg_file_debug[9U],
                     32,vlSelfRef.tb_top__DOT__reg_file_debug[10U],
                     32,vlSelfRef.tb_top__DOT__reg_file_debug[11U],
                     32,vlSelfRef.tb_top__DOT__reg_file_debug[12U],
                     32,vlSelfRef.tb_top__DOT__reg_file_debug[13U],
                     32,vlSelfRef.tb_top__DOT__reg_file_debug[14U],
                     32,vlSelfRef.tb_top__DOT__reg_file_debug[15U],
                     32,vlSelfRef.tb_top__DOT__reg_file_debug[16U],
                     32,vlSelfRef.tb_top__DOT__reg_file_debug[17U],
                     32,vlSelfRef.tb_top__DOT__reg_file_debug[18U],
                     32,vlSelfRef.tb_top__DOT__reg_file_debug[19U],
                     32,vlSelfRef.tb_top__DOT__reg_file_debug[20U],
                     32,vlSelfRef.tb_top__DOT__reg_file_debug[21U],
                     32,vlSelfRef.tb_top__DOT__reg_file_debug[22U],
                     32,vlSelfRef.tb_top__DOT__reg_file_debug[23U],
                     32,vlSelfRef.tb_top__DOT__reg_file_debug[24U],
                     32,vlSelfRef.tb_top__DOT__reg_file_debug[25U],
                     32,vlSelfRef.tb_top__DOT__reg_file_debug[26U],
                     32,vlSelfRef.tb_top__DOT__reg_file_debug[27U],
                     32,vlSelfRef.tb_top__DOT__reg_file_debug[28U],
                     32,vlSelfRef.tb_top__DOT__reg_file_debug[29U],
                     32,vlSelfRef.tb_top__DOT__reg_file_debug[30U],
                     32,vlSelfRef.tb_top__DOT__reg_file_debug[31U]);
    }
}

void Vtb_top___024root___nba_sequent__TOP__4(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_sequent__TOP__4\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdfgRegularize_hebeb780c_0_0;
    __VdfgRegularize_hebeb780c_0_0 = 0;
    // Body
    if (vlSelfRef.tb_top__DOT__rst) {
        vlSelfRef.tb_top__DOT__id_ex_rdDataOne = 0U;
        vlSelfRef.tb_top__DOT__mem_wb_aluResult = 0U;
        vlSelfRef.tb_top__DOT__mem_wb_wbCtrl = 0U;
        vlSelfRef.tb_top__DOT__mem_wb_memReadData = 0U;
        vlSelfRef.tb_top__DOT__id_ex_pcIncr = 0U;
        vlSelfRef.tb_top__DOT__id_ex_sgnExt = 0U;
        vlSelfRef.tb_top__DOT__ex_mem_rdDataTwo = 0U;
        vlSelfRef.tb_top__DOT__mem_wb_regDst = 0U;
        vlSelfRef.tb_top__DOT__ex_mem_wbCtrl = 0U;
        vlSelfRef.tb_top__DOT__ex_mem_aluResult = 0U;
        vlSelfRef.tb_top__DOT__if_id_pcIncr = 0U;
        vlSelfRef.tb_top__DOT__id_ex_rdDataTwo = 0U;
        vlSelfRef.tb_top__DOT__ex_mem_regDst = 0U;
        vlSelfRef.tb_top__DOT__id_ex_wbCtrl = 0U;
        vlSelfRef.tb_top__DOT__id_ex_exCtrl = 0U;
        vlSelfRef.tb_top__DOT__id_ex_regD = 0U;
        vlSelfRef.tb_top__DOT__id_ex_regT = 0U;
        vlSelfRef.tb_top__DOT__if_id_inst = 0U;
        vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__pc = 0U;
        vlSelfRef.tb_top__DOT__ex_mem_memCtrl = 0U;
        vlSelfRef.tb_top__DOT__id_ex_memCtrl = 0U;
    } else {
        vlSelfRef.tb_top__DOT__id_ex_rdDataOne = vlSelfRef.tb_top__DOT__reg_file_debug
            [(0x0000001fU & (vlSelfRef.tb_top__DOT__if_id_inst 
                             >> 0x00000015U))];
        vlSelfRef.tb_top__DOT__mem_wb_aluResult = vlSelfRef.tb_top__DOT__ex_mem_aluResult;
        vlSelfRef.tb_top__DOT__mem_wb_wbCtrl = vlSelfRef.tb_top__DOT__ex_mem_wbCtrl;
        vlSelfRef.tb_top__DOT__mem_wb_memReadData = 
            ((1U & (IData)(vlSelfRef.tb_top__DOT__ex_mem_memCtrl))
              ? vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory
             [(0x0000001fU & (vlSelfRef.tb_top__DOT__ex_mem_aluResult 
                              >> 2U))] : 0U);
        vlSelfRef.tb_top__DOT__id_ex_pcIncr = vlSelfRef.tb_top__DOT__if_id_pcIncr;
        vlSelfRef.tb_top__DOT__id_ex_sgnExt = (((- (IData)(
                                                           (1U 
                                                            & (vlSelfRef.tb_top__DOT__if_id_inst 
                                                               >> 0x0000000fU)))) 
                                                << 0x00000010U) 
                                               | (0x0000ffffU 
                                                  & vlSelfRef.tb_top__DOT__if_id_inst));
        vlSelfRef.tb_top__DOT__ex_mem_rdDataTwo = vlSelfRef.tb_top__DOT__id_ex_rdDataTwo;
        vlSelfRef.tb_top__DOT__mem_wb_regDst = vlSelfRef.tb_top__DOT__ex_mem_regDst;
        vlSelfRef.tb_top__DOT__ex_mem_wbCtrl = vlSelfRef.tb_top__DOT__id_ex_wbCtrl;
        vlSelfRef.tb_top__DOT__ex_mem_aluResult = vlSelfRef.tb_top__DOT__ex_aluResult;
        vlSelfRef.tb_top__DOT__if_id_pcIncr = ((IData)(4U) 
                                               + vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__pc);
        vlSelfRef.tb_top__DOT__id_ex_rdDataTwo = vlSelfRef.tb_top__DOT__reg_file_debug
            [(0x0000001fU & (vlSelfRef.tb_top__DOT__if_id_inst 
                             >> 0x00000010U))];
        vlSelfRef.tb_top__DOT__ex_mem_regDst = ((8U 
                                                 & (IData)(vlSelfRef.tb_top__DOT__id_ex_exCtrl))
                                                 ? (IData)(vlSelfRef.tb_top__DOT__id_ex_regD)
                                                 : (IData)(vlSelfRef.tb_top__DOT__id_ex_regT));
        vlSelfRef.tb_top__DOT__id_ex_wbCtrl = vlSelfRef.tb_top__DOT__id_wbCtrl;
        vlSelfRef.tb_top__DOT__id_ex_exCtrl = vlSelfRef.tb_top__DOT__id_exCtrl;
        vlSelfRef.tb_top__DOT__id_ex_regD = (0x0000001fU 
                                             & (vlSelfRef.tb_top__DOT__if_id_inst 
                                                >> 0x0000000bU));
        vlSelfRef.tb_top__DOT__id_ex_regT = (0x0000001fU 
                                             & (vlSelfRef.tb_top__DOT__if_id_inst 
                                                >> 0x00000010U));
        vlSelfRef.tb_top__DOT__if_id_inst = vlSelfRef.tb_top__DOT__instruction_memory
            [(0x0000001fU & (vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__pc 
                             >> 2U))];
        vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__pc 
            = ((((IData)(vlSelfRef.tb_top__DOT__ex_mem_memCtrl) 
                 >> 2U) & (IData)(vlSelfRef.tb_top__DOT__ex_mem_zeroFlag))
                ? vlSelfRef.tb_top__DOT__ex_mem_pcAdd
                : vlSelfRef.tb_top__DOT__if_pc_pp);
        vlSelfRef.tb_top__DOT__ex_mem_memCtrl = vlSelfRef.tb_top__DOT__id_ex_memCtrl;
        vlSelfRef.tb_top__DOT__id_ex_memCtrl = vlSelfRef.tb_top__DOT__id_memCtrl;
    }
    vlSelfRef.tb_top__DOT__wb_regWrite = (1U & ((IData)(vlSelfRef.tb_top__DOT__mem_wb_wbCtrl) 
                                                >> 1U));
    vlSelfRef.tb_top__DOT__wb_regData = ((1U & (IData)(vlSelfRef.tb_top__DOT__mem_wb_wbCtrl))
                                          ? vlSelfRef.tb_top__DOT__mem_wb_memReadData
                                          : vlSelfRef.tb_top__DOT__mem_wb_aluResult);
    vlSelfRef.tb_top__DOT__ex_pcAdd = (vlSelfRef.tb_top__DOT__id_ex_pcIncr 
                                       + VL_SHIFTL_III(32,32,32, vlSelfRef.tb_top__DOT__id_ex_sgnExt, 2U));
    vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl 
        = ((0U == (3U & ((IData)(vlSelfRef.tb_top__DOT__id_ex_exCtrl) 
                         >> 1U))) ? 2U : ((1U == (3U 
                                                  & ((IData)(vlSelfRef.tb_top__DOT__id_ex_exCtrl) 
                                                     >> 1U)))
                                           ? 6U : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelfRef.tb_top__DOT__id_ex_exCtrl) 
                                                        >> 1U)))
                                                    ? 
                                                   ((0x20U 
                                                     == 
                                                     (0x0000003fU 
                                                      & vlSelfRef.tb_top__DOT__id_ex_sgnExt))
                                                     ? 2U
                                                     : 
                                                    ((0x22U 
                                                      == 
                                                      (0x0000003fU 
                                                       & vlSelfRef.tb_top__DOT__id_ex_sgnExt))
                                                      ? 6U
                                                      : 
                                                     ((0x24U 
                                                       == 
                                                       (0x0000003fU 
                                                        & vlSelfRef.tb_top__DOT__id_ex_sgnExt))
                                                       ? 0U
                                                       : 
                                                      ((0x25U 
                                                        == 
                                                        (0x0000003fU 
                                                         & vlSelfRef.tb_top__DOT__id_ex_sgnExt))
                                                        ? 1U
                                                        : 
                                                       ((0x2aU 
                                                         == 
                                                         (0x0000003fU 
                                                          & vlSelfRef.tb_top__DOT__id_ex_sgnExt))
                                                         ? 7U
                                                         : 0U)))))
                                                    : 0U)));
    vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__in_b 
        = ((1U & (IData)(vlSelfRef.tb_top__DOT__id_ex_exCtrl))
            ? vlSelfRef.tb_top__DOT__id_ex_sgnExt : vlSelfRef.tb_top__DOT__id_ex_rdDataTwo);
    vlSelfRef.tb_top__DOT__ex_regDst = ((8U & (IData)(vlSelfRef.tb_top__DOT__id_ex_exCtrl))
                                         ? (IData)(vlSelfRef.tb_top__DOT__id_ex_regD)
                                         : (IData)(vlSelfRef.tb_top__DOT__id_ex_regT));
    __VdfgRegularize_hebeb780c_0_0 = (vlSelfRef.tb_top__DOT__id_ex_rdDataOne 
                                      | vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__in_b);
    if ((0U == (vlSelfRef.tb_top__DOT__if_id_inst >> 0x1aU))) {
        vlSelfRef.tb_top__DOT__id_exCtrl = 0x0cU;
        vlSelfRef.tb_top__DOT__id_wbCtrl = 2U;
        vlSelfRef.tb_top__DOT__id_memCtrl = 0U;
    } else if ((0x23U == (vlSelfRef.tb_top__DOT__if_id_inst 
                          >> 0x1aU))) {
        vlSelfRef.tb_top__DOT__id_exCtrl = 1U;
        vlSelfRef.tb_top__DOT__id_wbCtrl = 3U;
        vlSelfRef.tb_top__DOT__id_memCtrl = 2U;
    } else {
        if ((0x2bU == (vlSelfRef.tb_top__DOT__if_id_inst 
                       >> 0x1aU))) {
            vlSelfRef.tb_top__DOT__id_exCtrl = 1U;
            vlSelfRef.tb_top__DOT__id_memCtrl = 1U;
        } else if ((4U == (vlSelfRef.tb_top__DOT__if_id_inst 
                           >> 0x1aU))) {
            vlSelfRef.tb_top__DOT__id_exCtrl = 2U;
            vlSelfRef.tb_top__DOT__id_memCtrl = 4U;
        } else {
            vlSelfRef.tb_top__DOT__id_exCtrl = 0U;
            vlSelfRef.tb_top__DOT__id_memCtrl = 0U;
        }
        vlSelfRef.tb_top__DOT__id_wbCtrl = 0U;
    }
    vlSelfRef.tb_top__DOT__id_regT = (0x0000001fU & 
                                      (vlSelfRef.tb_top__DOT__if_id_inst 
                                       >> 0x00000010U));
    vlSelfRef.tb_top__DOT__id_regD = (0x0000001fU & 
                                      (vlSelfRef.tb_top__DOT__if_id_inst 
                                       >> 0x0000000bU));
    vlSelfRef.tb_top__DOT__id_sgnExt = (((- (IData)(
                                                    (1U 
                                                     & (vlSelfRef.tb_top__DOT__if_id_inst 
                                                        >> 0x0000000fU)))) 
                                         << 0x00000010U) 
                                        | (0x0000ffffU 
                                           & vlSelfRef.tb_top__DOT__if_id_inst));
    vlSelfRef.tb_top__DOT__ex_mem_pcAdd = vlSelfRef.__Vdly__tb_top__DOT__ex_mem_pcAdd;
    vlSelfRef.tb_top__DOT__if_pc_pp = ((IData)(4U) 
                                       + vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__pc);
    vlSelfRef.tb_top__DOT__ex_mem_zeroFlag = ((1U & 
                                               (~ (IData)(vlSelfRef.tb_top__DOT__rst))) 
                                              && (0U 
                                                  == vlSelfRef.tb_top__DOT__ex_aluResult));
    vlSelfRef.tb_top__DOT__ex_aluResult = ((8U & (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))
                                            ? ((4U 
                                                & (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))
                                                     ? 
                                                    (vlSelfRef.tb_top__DOT__id_ex_rdDataOne 
                                                     * vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__in_b)
                                                     : 0U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))
                                                     ? 0U
                                                     : 
                                                    (~ __VdfgRegularize_hebeb780c_0_0)))
                                                : 0U)
                                            : ((4U 
                                                & (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))
                                                     ? 0U
                                                     : 
                                                    (vlSelfRef.tb_top__DOT__id_ex_rdDataOne 
                                                     - vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__in_b))
                                                    : 0U)
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))
                                                     ? 0U
                                                     : 
                                                    (vlSelfRef.tb_top__DOT__id_ex_rdDataOne 
                                                     + vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__in_b))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))
                                                     ? __VdfgRegularize_hebeb780c_0_0
                                                     : 
                                                    (vlSelfRef.tb_top__DOT__id_ex_rdDataOne 
                                                     & vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__in_b)))));
    vlSelfRef.tb_top__DOT__ex_zeroFlag = (0U == vlSelfRef.tb_top__DOT__ex_aluResult);
    vlSelfRef.tb_top__DOT__mem_branchFlag = (((IData)(vlSelfRef.tb_top__DOT__ex_mem_memCtrl) 
                                              >> 2U) 
                                             & (IData)(vlSelfRef.tb_top__DOT__ex_mem_zeroFlag));
}

void Vtb_top___024root___nba_sequent__TOP__5(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_sequent__TOP__5\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory__v0) {
        vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[vlSelfRef.__VdlyDim0__tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory__v0] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory__v0;
    }
}

void Vtb_top___024root___nba_sequent__TOP__6(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_sequent__TOP__6\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__tb_top__DOT__reg_file_debug__v0) {
        vlSelfRef.tb_top__DOT__reg_file_debug[0U] = 0U;
        vlSelfRef.tb_top__DOT__reg_file_debug[1U] = 1U;
        vlSelfRef.tb_top__DOT__reg_file_debug[2U] = 2U;
        vlSelfRef.tb_top__DOT__reg_file_debug[3U] = 3U;
        vlSelfRef.tb_top__DOT__reg_file_debug[4U] = 4U;
        vlSelfRef.tb_top__DOT__reg_file_debug[5U] = 5U;
        vlSelfRef.tb_top__DOT__reg_file_debug[6U] = 6U;
        vlSelfRef.tb_top__DOT__reg_file_debug[7U] = 7U;
        vlSelfRef.tb_top__DOT__reg_file_debug[8U] = 8U;
        vlSelfRef.tb_top__DOT__reg_file_debug[9U] = 9U;
        vlSelfRef.tb_top__DOT__reg_file_debug[10U] = 0x0000000aU;
        vlSelfRef.tb_top__DOT__reg_file_debug[11U] = 0x0000000bU;
        vlSelfRef.tb_top__DOT__reg_file_debug[12U] = 0x0000000cU;
        vlSelfRef.tb_top__DOT__reg_file_debug[13U] = 0x0000000dU;
        vlSelfRef.tb_top__DOT__reg_file_debug[14U] = 0x0000000eU;
        vlSelfRef.tb_top__DOT__reg_file_debug[15U] = 0x0000000fU;
        vlSelfRef.tb_top__DOT__reg_file_debug[16U] = 0x00000010U;
        vlSelfRef.tb_top__DOT__reg_file_debug[17U] = 0x00000011U;
        vlSelfRef.tb_top__DOT__reg_file_debug[18U] = 0x00000012U;
        vlSelfRef.tb_top__DOT__reg_file_debug[19U] = 0x00000013U;
        vlSelfRef.tb_top__DOT__reg_file_debug[20U] = 0x00000014U;
        vlSelfRef.tb_top__DOT__reg_file_debug[21U] = 0x00000015U;
        vlSelfRef.tb_top__DOT__reg_file_debug[22U] = 0x00000016U;
        vlSelfRef.tb_top__DOT__reg_file_debug[23U] = 0x00000017U;
        vlSelfRef.tb_top__DOT__reg_file_debug[24U] = 0x00000018U;
        vlSelfRef.tb_top__DOT__reg_file_debug[25U] = 0x00000019U;
        vlSelfRef.tb_top__DOT__reg_file_debug[26U] = 0x0000001aU;
        vlSelfRef.tb_top__DOT__reg_file_debug[27U] = 0x0000001bU;
        vlSelfRef.tb_top__DOT__reg_file_debug[28U] = 0x0000001cU;
        vlSelfRef.tb_top__DOT__reg_file_debug[29U] = 0x0000001dU;
        vlSelfRef.tb_top__DOT__reg_file_debug[30U] = 0x0000001eU;
        vlSelfRef.tb_top__DOT__reg_file_debug[31U] = 0x0000001fU;
    }
    if (vlSelfRef.__VdlySet__tb_top__DOT__reg_file_debug__v32) {
        vlSelfRef.tb_top__DOT__reg_file_debug[vlSelfRef.__VdlyDim0__tb_top__DOT__reg_file_debug__v32] 
            = vlSelfRef.__VdlyVal__tb_top__DOT__reg_file_debug__v32;
    }
    vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[0U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[0U];
    vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[1U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[1U];
    vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[2U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[2U];
    vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[3U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[3U];
    vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[4U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[4U];
    vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[5U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[5U];
    vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[6U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[6U];
    vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[7U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[7U];
    vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[8U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[8U];
    vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[9U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[9U];
    vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[10U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[10U];
    vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[11U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[11U];
    vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[12U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[12U];
    vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[13U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[13U];
    vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[14U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[14U];
    vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[15U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[15U];
    vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[16U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[16U];
    vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[17U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[17U];
    vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[18U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[18U];
    vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[19U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[19U];
    vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[20U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[20U];
    vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[21U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[21U];
    vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[22U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[22U];
    vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[23U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[23U];
    vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[24U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[24U];
    vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[25U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[25U];
    vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[26U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[26U];
    vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[27U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[27U];
    vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[28U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[28U];
    vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[29U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[29U];
    vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[30U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[30U];
    vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[31U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[31U];
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[0U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[0U];
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[1U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[1U];
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[2U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[2U];
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[3U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[3U];
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[4U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[4U];
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[5U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[5U];
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[6U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[6U];
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[7U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[7U];
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[8U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[8U];
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[9U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[9U];
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[10U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[10U];
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[11U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[11U];
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[12U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[12U];
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[13U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[13U];
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[14U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[14U];
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[15U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[15U];
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[16U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[16U];
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[17U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[17U];
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[18U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[18U];
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[19U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[19U];
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[20U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[20U];
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[21U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[21U];
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[22U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[22U];
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[23U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[23U];
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[24U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[24U];
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[25U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[25U];
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[26U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[26U];
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[27U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[27U];
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[28U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[28U];
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[29U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[29U];
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[30U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[30U];
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[31U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[31U];
}

void Vtb_top___024root___nba_comb__TOP__1(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_comb__TOP__1\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__mem_memReadData = ((1U & (IData)(vlSelfRef.tb_top__DOT__ex_mem_memCtrl))
                                               ? vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory
                                              [(0x0000001fU 
                                                & (vlSelfRef.tb_top__DOT__ex_mem_aluResult 
                                                   >> 2U))]
                                               : 0U);
}

void Vtb_top___024root___nba_comb__TOP__2(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_comb__TOP__2\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__id_rdDataOne = vlSelfRef.tb_top__DOT__reg_file_debug
        [(0x0000001fU & (vlSelfRef.tb_top__DOT__if_id_inst 
                         >> 0x00000015U))];
    vlSelfRef.tb_top__DOT__id_rdDataTwo = vlSelfRef.tb_top__DOT__reg_file_debug
        [(0x0000001fU & (vlSelfRef.tb_top__DOT__if_id_inst 
                         >> 0x00000010U))];
}

void Vtb_top___024root___eval_nba(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_nba\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000040000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_top___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x00000c0000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_top___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x0000180000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_top___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x000003ffffffffffULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_top___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((0x00000c0000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_top___024root___nba_sequent__TOP__4(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((0x0000040000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_top___024root___nba_sequent__TOP__5(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((0x0000180000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_top___024root___nba_sequent__TOP__6(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((0x00002c0000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_top___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((0x00000c0000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_top___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((0x00001c0000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_top___024root___nba_comb__TOP__2(vlSelf);
    }
}

void Vtb_top___024root___timing_resume(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___timing_resume\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000200000000000ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_top___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_top___024root___eval_phase__act(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_phase__act\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_top___024root___eval_triggers_vec__act(vlSelf);
    Vtb_top___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_top___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_top___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_top___024root___timing_resume(vlSelf);
        Vtb_top___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_top___024root___eval_phase__inact(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_phase__inact\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb_top.sv", 2, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_top___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_top___024root___eval_phase__nba(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_phase__nba\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_top___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_top___024root___eval_nba(vlSelf);
        Vtb_top___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_top___024root___eval(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_top___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb_top.sv", 2, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tb_top.sv", 2, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tb_top.sv", 2, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_top___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_top___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_top___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vtb_top___024root___eval_debug_assertions(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_debug_assertions\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
