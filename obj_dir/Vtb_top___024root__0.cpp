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
                                         nullptr, "tb/tb_top.sv", 
                                         292);
    vlSelfRef.tb_top__DOT__rst = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000064ULL, 
                                         nullptr, "tb/tb_top.sv", 
                                         293);
    do {
        co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                             nullptr, 
                                             "tb/tb_top.sv", 
                                             295);
    } while ((0U != vlSelfRef.tb_top__DOT__reg_file_debug[5U]));
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000014ULL, 
                                         nullptr, "tb/tb_top.sv", 
                                         297);
    VL_WRITEF_NX("Expected R7 = 0xffe001, Got R7 = 0x%0h\n",1
                 , '#',32,vlSelfRef.tb_top__DOT__reg_file_debug[7U]);
    VL_FINISH_MT("tb/tb_top.sv", 300, "");
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000708ULL, 
                                         nullptr, "tb/tb_top.sv", 
                                         304);
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
                                             "tb/tb_top.sv", 
                                             287);
        vlSelfRef.tb_top__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_top__DOT__clk)));
    }
    co_return;
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

void Vtb_top___024root___nba_sequent__TOP__1(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_sequent__TOP__1\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tb_top__DOT__if_id_pcIncr;
    __Vdly__tb_top__DOT__if_id_pcIncr = 0;
    // Body
    __Vdly__tb_top__DOT__if_id_pcIncr = vlSelfRef.tb_top__DOT__if_id_pcIncr;
    vlSelfRef.__Vdly__tb_top__DOT__if_id_inst = vlSelfRef.tb_top__DOT__if_id_inst;
    if ((((IData)(vlSelfRef.tb_top__DOT__rst) | (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__PCSrc)) 
         | (IData)(vlSelfRef.tb_top__DOT__id_PCJmp))) {
        __Vdly__tb_top__DOT__if_id_pcIncr = 0U;
        vlSelfRef.__Vdly__tb_top__DOT__if_id_inst = 0U;
    } else if (vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__PCWrite) {
        __Vdly__tb_top__DOT__if_id_pcIncr = vlSelfRef.tb_top__DOT__if_id_pcIncr;
        vlSelfRef.__Vdly__tb_top__DOT__if_id_inst = vlSelfRef.tb_top__DOT__if_id_inst;
    } else {
        __Vdly__tb_top__DOT__if_id_pcIncr = ((IData)(4U) 
                                             + vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__pc);
        vlSelfRef.__Vdly__tb_top__DOT__if_id_inst = 
            (vlSelfRef.tb_top__DOT__top_00__DOT____Vcellinp__if_top__instruction_memory
             [(0x0000000fU & (vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__pc 
                              >> 2U))] & (- (IData)(
                                                    ((~ (IData)(vlSelfRef.tb_top__DOT__rst)) 
                                                     & (0x0eU 
                                                        >= 
                                                        (0x0000000fU 
                                                         & (vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__pc 
                                                            >> 2U)))))));
    }
    if (vlSelfRef.tb_top__DOT__rst) {
        vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__pc = 0U;
        vlSelfRef.tb_top__DOT__mem_wb_aluResult = 0U;
        vlSelfRef.tb_top__DOT__mem_wb_memReadData = 0U;
    } else {
        vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__pc 
            = ((IData)(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__PCSrc)
                ? vlSelfRef.tb_top__DOT__ex_mem_pcAdd
                : ((IData)(vlSelfRef.tb_top__DOT__id_PCJmp)
                    ? ((IData)((8U == (0xfc00003fU 
                                       & vlSelfRef.tb_top__DOT__if_id_inst)))
                        ? vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__rd_data_one
                        : (((0xf0000000U & vlSelfRef.tb_top__DOT__if_id_pcIncr) 
                            | (0x0ffffffcU & (vlSelfRef.tb_top__DOT__if_id_inst 
                                              << 2U))) 
                           & (- (IData)(((2U == (vlSelfRef.tb_top__DOT__if_id_inst 
                                                 >> 0x0000001aU)) 
                                         | (3U == (vlSelfRef.tb_top__DOT__if_id_inst 
                                                   >> 0x0000001aU)))))))
                    : ((IData)(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__PCWrite)
                        ? vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__pc
                        : vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__pc_pp)));
        vlSelfRef.tb_top__DOT__mem_wb_aluResult = vlSelfRef.tb_top__DOT__ex_mem_aluResult;
        vlSelfRef.tb_top__DOT__mem_wb_memReadData = 
            (vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory
             [(0x0000001fU & (vlSelfRef.tb_top__DOT__ex_mem_aluResult 
                              >> 2U))] & (- (IData)(
                                                    (1U 
                                                     & (IData)(vlSelfRef.tb_top__DOT__ex_mem_memCtrl)))));
    }
    if ((((IData)(vlSelfRef.tb_top__DOT__rst) | (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__PCSrc)) 
         | (IData)(vlSelfRef.tb_top__DOT__id_PCJmp))) {
        vlSelfRef.tb_top__DOT__id_ex_rdDataOne = 0U;
        vlSelfRef.tb_top__DOT__id_ex_shamt_out = 0U;
        vlSelfRef.tb_top__DOT__id_ex_regS = 0U;
        vlSelfRef.tb_top__DOT__ex_mem_rdDataTwo = 0U;
        vlSelfRef.tb_top__DOT__ex_mem_pcAdd = 0U;
        vlSelfRef.tb_top__DOT__ex_mem_aluResult = 0U;
        vlSelfRef.tb_top__DOT__ex_mem_memCtrl = 0U;
        vlSelfRef.tb_top__DOT__id_ex_rdDataTwo = 0U;
        vlSelfRef.tb_top__DOT__id_ex_pcIncr = 0U;
        vlSelfRef.tb_top__DOT__id_ex_sgnExt = 0U;
        vlSelfRef.tb_top__DOT__id_ex_memCtrl = 0U;
    } else {
        vlSelfRef.tb_top__DOT__id_ex_rdDataOne = vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__rd_data_one;
        vlSelfRef.tb_top__DOT__id_ex_shamt_out = (0x0000001fU 
                                                  & (vlSelfRef.tb_top__DOT__if_id_inst 
                                                     >> 6U));
        vlSelfRef.tb_top__DOT__id_ex_regS = (0x0000001fU 
                                             & (vlSelfRef.tb_top__DOT__if_id_inst 
                                                >> 0x00000015U));
        vlSelfRef.tb_top__DOT__ex_mem_rdDataTwo = vlSelfRef.tb_top__DOT__id_ex_rdDataTwo;
        vlSelfRef.tb_top__DOT__ex_mem_pcAdd = (vlSelfRef.tb_top__DOT__id_ex_pcIncr 
                                               + (vlSelfRef.tb_top__DOT__id_ex_sgnExt 
                                                  << 2U));
        vlSelfRef.tb_top__DOT__ex_mem_aluResult = vlSelfRef.tb_top__DOT__ex_aluResult;
        vlSelfRef.tb_top__DOT__ex_mem_memCtrl = vlSelfRef.tb_top__DOT__id_ex_memCtrl;
        vlSelfRef.tb_top__DOT__id_ex_rdDataTwo = ((IData)(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__linkReg)
                                                   ? 4U
                                                   : vlSelfRef.tb_top__DOT__reg_file_debug
                                                  [
                                                  (0x0000001fU 
                                                   & (vlSelfRef.tb_top__DOT__if_id_inst 
                                                      >> 0x00000010U))]);
        vlSelfRef.tb_top__DOT__id_ex_pcIncr = vlSelfRef.tb_top__DOT__if_id_pcIncr;
        vlSelfRef.tb_top__DOT__id_ex_sgnExt = ((((- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.tb_top__DOT__if_id_inst 
                                                                >> 0x0000000fU)))) 
                                                 & (- (IData)((IData)(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__signExtSel)))) 
                                                << 0x00000010U) 
                                               | (0x0000ffffU 
                                                  & vlSelfRef.tb_top__DOT__if_id_inst));
        vlSelfRef.tb_top__DOT__id_ex_memCtrl = vlSelfRef.tb_top__DOT__id_memCtrl;
    }
    vlSelfRef.tb_top__DOT__ex_mem_zeroFlag = ((1U & 
                                               (~ (
                                                   ((IData)(vlSelfRef.tb_top__DOT__rst) 
                                                    | (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__PCSrc)) 
                                                   | (IData)(vlSelfRef.tb_top__DOT__id_PCJmp)))) 
                                              && (0U 
                                                  == vlSelfRef.tb_top__DOT__ex_aluResult));
    vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__pc_pp 
        = ((IData)(4U) + vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__pc);
    vlSelfRef.tb_top__DOT__if_id_pcIncr = __Vdly__tb_top__DOT__if_id_pcIncr;
}

void Vtb_top___024root___nba_sequent__TOP__4(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_sequent__TOP__4\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__rst) {
        vlSelfRef.tb_top__DOT__mem_wb_wbCtrl = 0U;
        vlSelfRef.tb_top__DOT__mem_wb_regDst = 0U;
    } else {
        vlSelfRef.tb_top__DOT__mem_wb_wbCtrl = vlSelfRef.tb_top__DOT__ex_mem_wbCtrl;
        vlSelfRef.tb_top__DOT__mem_wb_regDst = vlSelfRef.tb_top__DOT__ex_mem_regDst;
    }
    vlSelfRef.tb_top__DOT__top_00__DOT__wb_top__DOT__tempMemData 
        = ((1U & (IData)(vlSelfRef.tb_top__DOT__mem_wb_wbCtrl))
            ? vlSelfRef.tb_top__DOT__mem_wb_memReadData
            : vlSelfRef.tb_top__DOT__mem_wb_aluResult);
    if ((((IData)(vlSelfRef.tb_top__DOT__rst) | (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__PCSrc)) 
         | (IData)(vlSelfRef.tb_top__DOT__id_PCJmp))) {
        vlSelfRef.tb_top__DOT__ex_mem_wbCtrl = 0U;
        vlSelfRef.tb_top__DOT__ex_mem_regDst = 0U;
        vlSelfRef.tb_top__DOT__id_ex_wbCtrl = 0U;
        vlSelfRef.tb_top__DOT__id_ex_exCtrl = 0U;
        vlSelfRef.tb_top__DOT__id_ex_regD = 0U;
        vlSelfRef.tb_top__DOT__id_ex_regT = 0U;
    } else {
        vlSelfRef.tb_top__DOT__ex_mem_wbCtrl = vlSelfRef.tb_top__DOT__id_ex_wbCtrl;
        vlSelfRef.tb_top__DOT__ex_mem_regDst = ((8U 
                                                 & (IData)(vlSelfRef.tb_top__DOT__id_ex_exCtrl))
                                                 ? (IData)(vlSelfRef.tb_top__DOT__id_ex_regD)
                                                 : (IData)(vlSelfRef.tb_top__DOT__id_ex_regT));
        vlSelfRef.tb_top__DOT__id_ex_wbCtrl = vlSelfRef.tb_top__DOT__id_wbCtrl;
        vlSelfRef.tb_top__DOT__id_ex_exCtrl = vlSelfRef.tb_top__DOT__id_exCtrl;
        vlSelfRef.tb_top__DOT__id_ex_regD = (0x0000001fU 
                                             & ((vlSelfRef.tb_top__DOT__if_id_inst 
                                                 >> 0x0000000bU) 
                                                | (- (IData)((IData)(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__linkReg)))));
        vlSelfRef.tb_top__DOT__id_ex_regT = (0x0000001fU 
                                             & (vlSelfRef.tb_top__DOT__if_id_inst 
                                                >> 0x00000010U));
    }
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__wr_data 
        = ((8U & (IData)(vlSelfRef.tb_top__DOT__mem_wb_wbCtrl))
            ? ((4U & (IData)(vlSelfRef.tb_top__DOT__mem_wb_wbCtrl))
                ? (vlSelfRef.tb_top__DOT__top_00__DOT__wb_top__DOT__tempMemData 
                   << 0x00000010U) : (0x0000ffffU & vlSelfRef.tb_top__DOT__top_00__DOT__wb_top__DOT__tempMemData))
            : ((0xffffff00U & (vlSelfRef.tb_top__DOT__top_00__DOT__wb_top__DOT__tempMemData 
                               & ((- (IData)((1U & 
                                              (~ ((IData)(vlSelfRef.tb_top__DOT__mem_wb_wbCtrl) 
                                                  >> 2U))))) 
                                  << 8U))) | (0x000000ffU 
                                              & vlSelfRef.tb_top__DOT__top_00__DOT__wb_top__DOT__tempMemData)));
    vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__forwardA = 0U;
    if (((((IData)(vlSelfRef.tb_top__DOT__ex_mem_wbCtrl) 
           >> 1U) & (0U != (IData)(vlSelfRef.tb_top__DOT__ex_mem_regDst))) 
         & ((IData)(vlSelfRef.tb_top__DOT__ex_mem_regDst) 
            == (IData)(vlSelfRef.tb_top__DOT__id_ex_regS)))) {
        vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__forwardA = 2U;
    }
    if ((((((IData)(vlSelfRef.tb_top__DOT__mem_wb_wbCtrl) 
            >> 1U) & (0U != (IData)(vlSelfRef.tb_top__DOT__mem_wb_regDst))) 
          & (~ ((((IData)(vlSelfRef.tb_top__DOT__ex_mem_wbCtrl) 
                  >> 1U) & (0U != (IData)(vlSelfRef.tb_top__DOT__ex_mem_regDst))) 
                & ((IData)(vlSelfRef.tb_top__DOT__ex_mem_regDst) 
                   == (IData)(vlSelfRef.tb_top__DOT__id_ex_regS))))) 
         & ((IData)(vlSelfRef.tb_top__DOT__mem_wb_regDst) 
            == (IData)(vlSelfRef.tb_top__DOT__id_ex_regS)))) {
        vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__forwardA = 1U;
    }
    vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_a 
        = ((0U == (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__forwardA))
            ? vlSelfRef.tb_top__DOT__id_ex_rdDataOne
            : ((2U == (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__forwardA))
                ? vlSelfRef.tb_top__DOT__ex_mem_aluResult
                : (vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__wr_data 
                   & (- (IData)((1U == (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__forwardA)))))));
    vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__PCSrc 
        = (((~ (IData)(vlSelfRef.tb_top__DOT__ex_mem_zeroFlag)) 
            & (0x0cU == (0x0cU & (IData)(vlSelfRef.tb_top__DOT__ex_mem_memCtrl)))) 
           | ((IData)(vlSelfRef.tb_top__DOT__ex_mem_zeroFlag) 
              & (4U == (0x0cU & (IData)(vlSelfRef.tb_top__DOT__ex_mem_memCtrl)))));
    vlSelfRef.tb_top__DOT__if_id_inst = vlSelfRef.__Vdly__tb_top__DOT__if_id_inst;
    vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl 
        = (0x0000000fU & ((0x00000010U & (IData)(vlSelfRef.tb_top__DOT__id_ex_exCtrl))
                           ? ((4U & (IData)(vlSelfRef.tb_top__DOT__id_ex_exCtrl))
                               ? (9U & (- (IData)((1U 
                                                   & (~ 
                                                      ((IData)(vlSelfRef.tb_top__DOT__id_ex_exCtrl) 
                                                       >> 1U))))))
                               : ((2U & (IData)(vlSelfRef.tb_top__DOT__id_ex_exCtrl))
                                   ? 7U : 1U)) : ((4U 
                                                   & (IData)(vlSelfRef.tb_top__DOT__id_ex_exCtrl))
                                                   ? 
                                                  (((0x20U 
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
                                                     (((0x2aU 
                                                        == 
                                                        (0x0000003fU 
                                                         & vlSelfRef.tb_top__DOT__id_ex_sgnExt))
                                                        ? 7U
                                                        : 
                                                       ((0x21U 
                                                         == 
                                                         (0x0000003fU 
                                                          & vlSelfRef.tb_top__DOT__id_ex_sgnExt))
                                                         ? 3U
                                                         : 
                                                        ((0x23U 
                                                          == 
                                                          (0x0000003fU 
                                                           & vlSelfRef.tb_top__DOT__id_ex_sgnExt))
                                                          ? 8U
                                                          : 
                                                         (((0x27U 
                                                            == 
                                                            (0x0000003fU 
                                                             & vlSelfRef.tb_top__DOT__id_ex_sgnExt))
                                                            ? 0x0cU
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
                                                              : 
                                                             ((0x2bU 
                                                               == 
                                                               (0x0000003fU 
                                                                & vlSelfRef.tb_top__DOT__id_ex_sgnExt))
                                                               ? 9U
                                                               : 
                                                              ((0U 
                                                                == 
                                                                (0x0000003fU 
                                                                 & vlSelfRef.tb_top__DOT__id_ex_sgnExt))
                                                                ? 0x0eU
                                                                : 
                                                               ((2U 
                                                                 == 
                                                                 (0x0000003fU 
                                                                  & vlSelfRef.tb_top__DOT__id_ex_sgnExt))
                                                                 ? 0x0bU
                                                                 : 
                                                                (0x0dU 
                                                                 & (- (IData)(
                                                                              (0x19U 
                                                                               == 
                                                                               (0x0000003fU 
                                                                                & vlSelfRef.tb_top__DOT__id_ex_sgnExt))))))))))) 
                                                          | (- (IData)(
                                                                       (0x18U 
                                                                        == 
                                                                        (0x0000003fU 
                                                                         & vlSelfRef.tb_top__DOT__id_ex_sgnExt)))))))) 
                                                      & (- (IData)(
                                                                   (0x24U 
                                                                    != 
                                                                    (0x0000003fU 
                                                                     & vlSelfRef.tb_top__DOT__id_ex_sgnExt))))))) 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelfRef.tb_top__DOT__id_ex_exCtrl) 
                                                                     >> 1U))))))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.tb_top__DOT__id_ex_exCtrl))
                                                    ? 6U
                                                    : 2U))));
    vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__forwardB = 0U;
    if (((((IData)(vlSelfRef.tb_top__DOT__ex_mem_wbCtrl) 
           >> 1U) & (0U != (IData)(vlSelfRef.tb_top__DOT__ex_mem_regDst))) 
         & ((IData)(vlSelfRef.tb_top__DOT__ex_mem_regDst) 
            == (IData)(vlSelfRef.tb_top__DOT__id_ex_regT)))) {
        vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__forwardB = 2U;
    }
    if ((((((IData)(vlSelfRef.tb_top__DOT__mem_wb_wbCtrl) 
            >> 1U) & (0U != (IData)(vlSelfRef.tb_top__DOT__mem_wb_regDst))) 
          & (~ ((((IData)(vlSelfRef.tb_top__DOT__ex_mem_wbCtrl) 
                  >> 1U) & (0U != (IData)(vlSelfRef.tb_top__DOT__ex_mem_regDst))) 
                & ((IData)(vlSelfRef.tb_top__DOT__ex_mem_regDst) 
                   == (IData)(vlSelfRef.tb_top__DOT__id_ex_regT))))) 
         & ((IData)(vlSelfRef.tb_top__DOT__mem_wb_regDst) 
            == (IData)(vlSelfRef.tb_top__DOT__id_ex_regT)))) {
        vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__forwardB = 1U;
    }
    vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__PCWrite 
        = ((IData)(vlSelfRef.tb_top__DOT__id_ex_memCtrl) 
           & (((IData)(vlSelfRef.tb_top__DOT__id_ex_regT) 
               == (0x0000001fU & (vlSelfRef.tb_top__DOT__if_id_inst 
                                  >> 0x00000015U))) 
              | ((IData)(vlSelfRef.tb_top__DOT__id_ex_regT) 
                 == (0x0000001fU & (vlSelfRef.tb_top__DOT__if_id_inst 
                                    >> 0x00000010U)))));
    vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b 
        = ((0U == (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__forwardB))
            ? ((1U & (IData)(vlSelfRef.tb_top__DOT__id_ex_exCtrl))
                ? vlSelfRef.tb_top__DOT__id_ex_sgnExt
                : vlSelfRef.tb_top__DOT__id_ex_rdDataTwo)
            : ((2U == (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__forwardB))
                ? vlSelfRef.tb_top__DOT__ex_mem_aluResult
                : (vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__wr_data 
                   & (- (IData)((1U == (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__forwardB)))))));
    if ((8U & (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))) {
        if ((4U & (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))) {
            if ((2U & (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))) {
                if ((1U & (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))) {
                    vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended = 0ULL;
                    vlSelfRef.tb_top__DOT__ex_aluResult 
                        = VL_MULS_III(32, vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_a, vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b);
                } else {
                    vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended = 0ULL;
                    vlSelfRef.tb_top__DOT__ex_aluResult 
                        = (vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b 
                           << (IData)(vlSelfRef.tb_top__DOT__id_ex_shamt_out));
                }
            } else if ((1U & (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))) {
                vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended = 0ULL;
                vlSelfRef.tb_top__DOT__ex_aluResult 
                    = (vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_a 
                       * vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b);
            } else {
                vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended = 0ULL;
                vlSelfRef.tb_top__DOT__ex_aluResult 
                    = (~ (vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_a 
                          | vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b));
            }
        } else if ((2U & (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))) {
            if ((1U & (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))) {
                vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended = 0ULL;
                vlSelfRef.tb_top__DOT__ex_aluResult 
                    = (vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b 
                       >> (IData)(vlSelfRef.tb_top__DOT__id_ex_shamt_out));
            } else {
                vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended = 0ULL;
                vlSelfRef.tb_top__DOT__ex_aluResult = 0U;
            }
        } else if ((1U & (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))) {
            vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended = 0ULL;
            vlSelfRef.tb_top__DOT__ex_aluResult = (
                                                   (vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_a 
                                                    < vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b)
                                                    ? 1U
                                                    : 0U);
        } else {
            vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended = 0ULL;
            vlSelfRef.tb_top__DOT__ex_aluResult = (vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_a 
                                                   - vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b);
        }
        vlSelfRef.tb_top__DOT__ex_overflowFlag = 0U;
    } else if ((4U & (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))) {
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))) {
            if ((1U & (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))) {
                vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended = 0ULL;
                vlSelfRef.tb_top__DOT__ex_aluResult 
                    = (VL_LTS_III(32, vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_a, vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b)
                        ? 1U : 0U);
                vlSelfRef.tb_top__DOT__ex_overflowFlag = 0U;
            } else {
                vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended 
                    = (0x00000001ffffffffULL & ((((QData)((IData)(
                                                                  (vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_a 
                                                                   >> 0x1fU))) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_a))) 
                                                - (
                                                   ((QData)((IData)(
                                                                    (vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b 
                                                                     >> 0x1fU))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b)))));
                vlSelfRef.tb_top__DOT__ex_aluResult 
                    = (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended);
                vlSelfRef.tb_top__DOT__ex_overflowFlag 
                    = (1U & VL_REDXOR_64((0x0000000180000000ULL 
                                          & vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended)));
            }
        } else {
            if ((1U & (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))) {
                vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended = 0ULL;
                vlSelfRef.tb_top__DOT__ex_aluResult 
                    = VL_DIVS_III(32, vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_a, vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b);
            } else {
                vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended = 0ULL;
                vlSelfRef.tb_top__DOT__ex_aluResult 
                    = VL_DIV_III(32, vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_a, vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b);
            }
            vlSelfRef.tb_top__DOT__ex_overflowFlag = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))) {
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))) {
            vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended = 0ULL;
            vlSelfRef.tb_top__DOT__ex_aluResult = (vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_a 
                                                   + vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b);
            vlSelfRef.tb_top__DOT__ex_overflowFlag = 0U;
        } else {
            vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended 
                = (0x00000001ffffffffULL & ((((QData)((IData)(
                                                              (vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_a 
                                                               >> 0x1fU))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_a))) 
                                            + (((QData)((IData)(
                                                                (vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b 
                                                                 >> 0x1fU))) 
                                                << 0x00000020U) 
                                               | (QData)((IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b)))));
            vlSelfRef.tb_top__DOT__ex_aluResult = (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended);
            vlSelfRef.tb_top__DOT__ex_overflowFlag 
                = (1U & VL_REDXOR_64((0x0000000180000000ULL 
                                      & vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended)));
        }
    } else {
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))) {
            vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended = 0ULL;
            vlSelfRef.tb_top__DOT__ex_aluResult = (vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_a 
                                                   | vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b);
        } else {
            vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended = 0ULL;
            vlSelfRef.tb_top__DOT__ex_aluResult = (vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_a 
                                                   & vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b);
        }
        vlSelfRef.tb_top__DOT__ex_overflowFlag = 0U;
    }
}

extern const VlWide<64>/*2047:0*/ Vtb_top__ConstPool__CONST_h06e2f2cb_0;

void Vtb_top___024root___eval_nba(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_nba\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((1ULL & vlSelfRef.__VnbaTriggered[0U])))) {
        {
            // Inlined CFunc: _nba_sequent__TOP__0
            VL_WRITEF_NX("pc=%0d index=%0d inst=%h\n",3
                         , '#',32,vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__pc
                         , '#',32,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__pc 
                                   >> 2U), '#',32,(
                                                   (0x0eU 
                                                    >= 
                                                    (0x0000000fU 
                                                     & (vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__pc 
                                                        >> 2U)))
                                                    ? vlSelfRef.tb_top__DOT__top_00__DOT____Vcellinp__if_top__instruction_memory
                                                   [
                                                   (0x0000000fU 
                                                    & (vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__pc 
                                                       >> 2U))]
                                                    : 0U));
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
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_top___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__2
            CData/*0:0*/ __Vinline_0__nba_sequent__TOP__2___VdlySet__tb_top__DOT__reg_file_debug__v0;
            __Vinline_0__nba_sequent__TOP__2___VdlySet__tb_top__DOT__reg_file_debug__v0 = 0;
            IData/*31:0*/ __Vinline_0__nba_sequent__TOP__2___VdlyVal__tb_top__DOT__reg_file_debug__v32;
            __Vinline_0__nba_sequent__TOP__2___VdlyVal__tb_top__DOT__reg_file_debug__v32 = 0;
            CData/*4:0*/ __Vinline_0__nba_sequent__TOP__2___VdlyDim0__tb_top__DOT__reg_file_debug__v32;
            __Vinline_0__nba_sequent__TOP__2___VdlyDim0__tb_top__DOT__reg_file_debug__v32 = 0;
            CData/*0:0*/ __Vinline_0__nba_sequent__TOP__2___VdlySet__tb_top__DOT__reg_file_debug__v32;
            __Vinline_0__nba_sequent__TOP__2___VdlySet__tb_top__DOT__reg_file_debug__v32 = 0;
            __Vinline_0__nba_sequent__TOP__2___VdlySet__tb_top__DOT__reg_file_debug__v0 = 0U;
            __Vinline_0__nba_sequent__TOP__2___VdlySet__tb_top__DOT__reg_file_debug__v32 = 0U;
            if (vlSelfRef.tb_top__DOT__rst) {
                vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__i = 0x00000020U;
                __Vinline_0__nba_sequent__TOP__2___VdlySet__tb_top__DOT__reg_file_debug__v0 = 1U;
            } else if ((2U & (IData)(vlSelfRef.tb_top__DOT__mem_wb_wbCtrl))) {
                __Vinline_0__nba_sequent__TOP__2___VdlyVal__tb_top__DOT__reg_file_debug__v32 
                    = vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__wr_data;
                __Vinline_0__nba_sequent__TOP__2___VdlyDim0__tb_top__DOT__reg_file_debug__v32 
                    = vlSelfRef.tb_top__DOT__mem_wb_regDst;
                __Vinline_0__nba_sequent__TOP__2___VdlySet__tb_top__DOT__reg_file_debug__v32 = 1U;
            }
            if (__Vinline_0__nba_sequent__TOP__2___VdlySet__tb_top__DOT__reg_file_debug__v0) {
                vlSelfRef.tb_top__DOT__reg_file_debug[0U] = 0U;
                vlSelfRef.tb_top__DOT__reg_file_debug[1U] = 0U;
                vlSelfRef.tb_top__DOT__reg_file_debug[2U] = 0U;
                vlSelfRef.tb_top__DOT__reg_file_debug[3U] = 0U;
                vlSelfRef.tb_top__DOT__reg_file_debug[4U] = 0U;
                vlSelfRef.tb_top__DOT__reg_file_debug[5U] = 0U;
                vlSelfRef.tb_top__DOT__reg_file_debug[6U] = 0U;
                vlSelfRef.tb_top__DOT__reg_file_debug[7U] = 0U;
                vlSelfRef.tb_top__DOT__reg_file_debug[8U] = 0U;
                vlSelfRef.tb_top__DOT__reg_file_debug[9U] = 0U;
                vlSelfRef.tb_top__DOT__reg_file_debug[10U] = 0U;
                vlSelfRef.tb_top__DOT__reg_file_debug[11U] = 0U;
                vlSelfRef.tb_top__DOT__reg_file_debug[12U] = 0U;
                vlSelfRef.tb_top__DOT__reg_file_debug[13U] = 0U;
                vlSelfRef.tb_top__DOT__reg_file_debug[14U] = 0U;
                vlSelfRef.tb_top__DOT__reg_file_debug[15U] = 0U;
                vlSelfRef.tb_top__DOT__reg_file_debug[16U] = 0U;
                vlSelfRef.tb_top__DOT__reg_file_debug[17U] = 0U;
                vlSelfRef.tb_top__DOT__reg_file_debug[18U] = 0U;
                vlSelfRef.tb_top__DOT__reg_file_debug[19U] = 0U;
                vlSelfRef.tb_top__DOT__reg_file_debug[20U] = 0U;
                vlSelfRef.tb_top__DOT__reg_file_debug[21U] = 0U;
                vlSelfRef.tb_top__DOT__reg_file_debug[22U] = 0U;
                vlSelfRef.tb_top__DOT__reg_file_debug[23U] = 0U;
                vlSelfRef.tb_top__DOT__reg_file_debug[24U] = 0U;
                vlSelfRef.tb_top__DOT__reg_file_debug[25U] = 0U;
                vlSelfRef.tb_top__DOT__reg_file_debug[26U] = 0U;
                vlSelfRef.tb_top__DOT__reg_file_debug[27U] = 0U;
                vlSelfRef.tb_top__DOT__reg_file_debug[28U] = 0U;
                vlSelfRef.tb_top__DOT__reg_file_debug[29U] = 0U;
                vlSelfRef.tb_top__DOT__reg_file_debug[30U] = 0U;
                vlSelfRef.tb_top__DOT__reg_file_debug[31U] = 0U;
            }
            if (__Vinline_0__nba_sequent__TOP__2___VdlySet__tb_top__DOT__reg_file_debug__v32) {
                vlSelfRef.tb_top__DOT__reg_file_debug[__Vinline_0__nba_sequent__TOP__2___VdlyDim0__tb_top__DOT__reg_file_debug__v32] 
                    = __Vinline_0__nba_sequent__TOP__2___VdlyVal__tb_top__DOT__reg_file_debug__v32;
            }
        }
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__3
            if (vlSelfRef.__VdlySet__tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory__v0) {
                vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[vlSelfRef.__VdlyDim0__tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory__v0] 
                    = vlSelfRef.__VdlyVal__tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory__v0;
            }
        }
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_top___024root___nba_sequent__TOP__4(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((0x000000000000000bULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__0
            if (((IData)(vlSelfRef.tb_top__DOT__rst) 
                 | (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__PCWrite))) {
                vlSelfRef.tb_top__DOT__id_exCtrl = 0U;
                vlSelfRef.tb_top__DOT__id_memCtrl = 0U;
                vlSelfRef.tb_top__DOT__id_wbCtrl = 0U;
                vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 0U;
                vlSelfRef.tb_top__DOT__id_stallIF = 0U;
                vlSelfRef.tb_top__DOT__id_PCJmp = 0U;
                vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
            } else {
                vlSelfRef.__VcaseTableOut0 = (0x0001ffffU 
                                              & Vtb_top__ConstPool__CONST_h06e2f2cb_0
                                              [(vlSelfRef.tb_top__DOT__if_id_inst 
                                                >> 0x0000001aU)]);
                vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__signExtSel 
                    = (1U & vlSelfRef.__VcaseTableOut0);
                vlSelfRef.tb_top__DOT__id_stallIF = 
                    (1U & (vlSelfRef.__VcaseTableOut0 
                           >> 1U));
                vlSelfRef.tb_top__DOT__id_PCJmp = (1U 
                                                   & (vlSelfRef.__VcaseTableOut0 
                                                      >> 2U));
                vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__linkReg 
                    = (1U & (vlSelfRef.__VcaseTableOut0 
                             >> 3U));
                vlSelfRef.tb_top__DOT__id_memCtrl = 
                    (0x0000000fU & (vlSelfRef.__VcaseTableOut0 
                                    >> 4U));
                vlSelfRef.tb_top__DOT__id_wbCtrl = 
                    (0x0000000fU & (vlSelfRef.__VcaseTableOut0 
                                    >> 8U));
                vlSelfRef.tb_top__DOT__id_exCtrl = 
                    (0x0000001fU & (vlSelfRef.__VcaseTableOut0 
                                    >> 0x0000000cU));
            }
        }
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
    if ((0x000000000000000fULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__1
            vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__rd_data_one 
                = ((IData)(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__linkReg)
                    ? vlSelfRef.tb_top__DOT__if_id_pcIncr
                    : vlSelfRef.tb_top__DOT__reg_file_debug
                   [(0x0000001fU & (vlSelfRef.tb_top__DOT__if_id_inst 
                                    >> 0x00000015U))]);
        }
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
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        (((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                           << 3U) 
                                                          | (((~ (IData)(vlSelfRef.tb_top__DOT__clk)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__clk__0)) 
                                                             << 2U)) 
                                                         | ((((IData)(vlSelfRef.tb_top__DOT__rst) 
                                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__rst__0))) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.tb_top__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__clk__0 
            = vlSelfRef.tb_top__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__rst__0 
            = vlSelfRef.tb_top__DOT__rst;
    }
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
        {
            // Inlined CFunc: _timing_resume
            if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
                vlSelfRef.__VdlySched.resume();
            }
        }
        {
            // Inlined CFunc: _eval_act
            if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
                {
                    // Inlined CFunc: _act_sequent__TOP__0
                    if (((IData)(vlSelfRef.tb_top__DOT__rst) 
                         | (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__PCWrite))) {
                        vlSelfRef.tb_top__DOT__id_exCtrl = 0U;
                        vlSelfRef.tb_top__DOT__id_memCtrl = 0U;
                        vlSelfRef.tb_top__DOT__id_wbCtrl = 0U;
                        vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 0U;
                        vlSelfRef.tb_top__DOT__id_stallIF = 0U;
                        vlSelfRef.tb_top__DOT__id_PCJmp = 0U;
                        vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
                    } else {
                        vlSelfRef.__VcaseTableOut0 
                            = (0x0001ffffU & Vtb_top__ConstPool__CONST_h06e2f2cb_0
                               [(vlSelfRef.tb_top__DOT__if_id_inst 
                                 >> 0x0000001aU)]);
                        vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__signExtSel 
                            = (1U & vlSelfRef.__VcaseTableOut0);
                        vlSelfRef.tb_top__DOT__id_stallIF 
                            = (1U & (vlSelfRef.__VcaseTableOut0 
                                     >> 1U));
                        vlSelfRef.tb_top__DOT__id_PCJmp 
                            = (1U & (vlSelfRef.__VcaseTableOut0 
                                     >> 2U));
                        vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__linkReg 
                            = (1U & (vlSelfRef.__VcaseTableOut0 
                                     >> 3U));
                        vlSelfRef.tb_top__DOT__id_memCtrl 
                            = (0x0000000fU & (vlSelfRef.__VcaseTableOut0 
                                              >> 4U));
                        vlSelfRef.tb_top__DOT__id_wbCtrl 
                            = (0x0000000fU & (vlSelfRef.__VcaseTableOut0 
                                              >> 8U));
                        vlSelfRef.tb_top__DOT__id_exCtrl 
                            = (0x0000001fU & (vlSelfRef.__VcaseTableOut0 
                                              >> 0x0000000cU));
                    }
                    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__rd_data_one 
                        = ((IData)(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__linkReg)
                            ? vlSelfRef.tb_top__DOT__if_id_pcIncr
                            : vlSelfRef.tb_top__DOT__reg_file_debug
                           [(0x0000001fU & (vlSelfRef.tb_top__DOT__if_id_inst 
                                            >> 0x00000015U))]);
                }
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
            }
        }
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
        VL_FATAL_MT("tb/tb_top.sv", 7, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
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
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_top___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb/tb_top.sv", 7, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tb/tb_top.sv", 7, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tb/tb_top.sv", 7, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
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
