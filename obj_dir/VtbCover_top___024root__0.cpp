// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VtbCover_top.h for the primary calling header

#include "VtbCover_top__pch.h"

VL_ATTR_COLD void VtbCover_top___024root___eval_initial__TOP(VtbCover_top___024root* vlSelf);
VlCoroutine VtbCover_top___024root___eval_initial__TOP__Vtiming__0(VtbCover_top___024root* vlSelf);
VlCoroutine VtbCover_top___024root___eval_initial__TOP__Vtiming__1(VtbCover_top___024root* vlSelf);

void VtbCover_top___024root___eval_initial(VtbCover_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbCover_top___024root___eval_initial\n"); );
    VtbCover_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VtbCover_top___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VtbCover_top___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VtbCover_top___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine VtbCover_top___024root___eval_initial__TOP__Vtiming__0(VtbCover_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbCover_top___024root___eval_initial__TOP__Vtiming__0\n"); );
    VtbCover_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tbCover_top__DOT__cg_inst_0 = VL_NEW(VtbCover_top___024unit__03a__03acover_top, vlSymsp);
    vlSelfRef.tbCover_top__DOT__clk = 0U;
    vlSelfRef.tbCover_top__DOT__rst = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "tb/tbCover_top.sv", 
                                         284);
    vlSelfRef.tbCover_top__DOT__rst = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000007d0ULL, 
                                         nullptr, "tb/tbCover_top.sv", 
                                         286);
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000578ULL, 
                                         nullptr, "tb/tbCover_top.sv", 
                                         287);
    VL_FINISH_MT("tb/tbCover_top.sv", 287, "");
    ++(vlSelf->__Vcoverage[1565]);
    co_return;
}

VlCoroutine VtbCover_top___024root___eval_initial__TOP__Vtiming__1(VtbCover_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbCover_top___024root___eval_initial__TOP__Vtiming__1\n"); );
    VtbCover_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/tbCover_top.sv", 
                                             275);
        vlSelfRef.tbCover_top__DOT__clk = (1U & (~ (IData)(vlSelfRef.tbCover_top__DOT__clk)));
        if ((1U & (~ (IData)(vlSelfRef.tbCover_top__DOT__clk)))) {
            ++(vlSelf->__Vcoverage[1562]);
        }
        if (vlSelfRef.tbCover_top__DOT__clk) {
            ++(vlSelf->__Vcoverage[1563]);
        }
        ++(vlSelf->__Vcoverage[1564]);
    }
    co_return;
}

bool VtbCover_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbCover_top___024root___trigger_anySet__act\n"); );
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

void VtbCover_top___024root___act_sequent__TOP__0(VtbCover_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbCover_top___024root___act_sequent__TOP__0\n"); );
    VtbCover_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.tbCover_top__DOT__clk) ^ (IData)(vlSelfRef.tbCover_top__DOT____Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 3, vlSelfRef.tbCover_top__DOT__clk, vlSelfRef.tbCover_top__DOT____Vtogcov__clk);
        vlSelfRef.tbCover_top__DOT____Vtogcov__clk 
            = vlSelfRef.tbCover_top__DOT__clk;
    }
    if (((IData)(vlSelfRef.tbCover_top__DOT__rst) ^ (IData)(vlSelfRef.tbCover_top__DOT____Vtogcov__rst))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 5, vlSelfRef.tbCover_top__DOT__rst, vlSelfRef.tbCover_top__DOT____Vtogcov__rst);
        vlSelfRef.tbCover_top__DOT____Vtogcov__rst 
            = vlSelfRef.tbCover_top__DOT__rst;
    }
    if (vlSelfRef.tbCover_top__DOT__rst) {
        ++(vlSelf->__Vcoverage[2155]);
        vlSelfRef.tbCover_top__DOT__top_00__DOT__if_top__DOT____VlemCond_0 = 0U;
    } else {
        ++(vlSelf->__Vcoverage[2156]);
        vlSelfRef.tbCover_top__DOT__top_00__DOT__if_top__DOT____VlemCond_0 
            = ((0xc7U >= (0x000000ffU & (vlSelfRef.tbCover_top__DOT__top_00__DOT__if_top__DOT__pc 
                                         >> 2U))) ? vlSelfRef.tbCover_top__DOT__top_00__DOT____Vcellinp__if_top__instruction_memory
               [(0x000000ffU & (vlSelfRef.tbCover_top__DOT__top_00__DOT__if_top__DOT__pc 
                                >> 2U))] : 0U);
    }
    vlSelfRef.tbCover_top__DOT__if_inst = vlSelfRef.tbCover_top__DOT__top_00__DOT__if_top__DOT____VlemCond_0;
    if (vlSelfRef.tbCover_top__DOT__rst) {
        ++(vlSelf->__Vcoverage[2153]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tbCover_top__DOT__rst)))) {
        ++(vlSelf->__Vcoverage[2154]);
    }
    if (((IData)(vlSelfRef.tbCover_top__DOT__rst) | (IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__flushCtrlSignals))) {
        vlSelfRef.tbCover_top__DOT__id_exCtrl = 0U;
        vlSelfRef.tbCover_top__DOT__id_memCtrl = 0U;
        vlSelfRef.tbCover_top__DOT__id_wbCtrl = 0U;
        vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 0U;
        vlSelfRef.tbCover_top__DOT__id_PCJmp = 0U;
        vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
        ++(vlSelf->__Vcoverage[1997]);
    } else {
        if ((vlSelfRef.tbCover_top__DOT__if_id_inst 
             >> 0x0000001fU)) {
            if ((0x40000000U & vlSelfRef.tbCover_top__DOT__if_id_inst)) {
                if ((0x20000000U & vlSelfRef.tbCover_top__DOT__if_id_inst)) {
                    if ((0x10000000U & vlSelfRef.tbCover_top__DOT__if_id_inst)) {
                        vlSelfRef.tbCover_top__DOT__id_exCtrl = 0U;
                        vlSelfRef.tbCover_top__DOT__id_memCtrl = 0U;
                        vlSelfRef.tbCover_top__DOT__id_wbCtrl = 0U;
                        vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 1U;
                        vlSelfRef.tbCover_top__DOT__id_PCJmp = 0U;
                        vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
                        ++(vlSelf->__Vcoverage[1996]);
                    } else if ((0x08000000U & vlSelfRef.tbCover_top__DOT__if_id_inst)) {
                        vlSelfRef.tbCover_top__DOT__id_exCtrl = 0U;
                        vlSelfRef.tbCover_top__DOT__id_memCtrl = 0U;
                        vlSelfRef.tbCover_top__DOT__id_wbCtrl = 0U;
                        vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 1U;
                        vlSelfRef.tbCover_top__DOT__id_PCJmp = 0U;
                        vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
                        ++(vlSelf->__Vcoverage[1996]);
                    } else if ((0x04000000U & vlSelfRef.tbCover_top__DOT__if_id_inst)) {
                        vlSelfRef.tbCover_top__DOT__id_exCtrl = 0U;
                        vlSelfRef.tbCover_top__DOT__id_memCtrl = 0U;
                        vlSelfRef.tbCover_top__DOT__id_wbCtrl = 0U;
                        vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 1U;
                        vlSelfRef.tbCover_top__DOT__id_PCJmp = 0U;
                        vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
                        ++(vlSelf->__Vcoverage[1996]);
                    } else {
                        vlSelfRef.tbCover_top__DOT__id_exCtrl = 1U;
                        vlSelfRef.tbCover_top__DOT__id_memCtrl = 2U;
                        vlSelfRef.tbCover_top__DOT__id_wbCtrl = 0U;
                        vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 1U;
                        vlSelfRef.tbCover_top__DOT__id_PCJmp = 0U;
                        vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
                        ++(vlSelf->__Vcoverage[1993]);
                    }
                } else {
                    vlSelfRef.tbCover_top__DOT__id_exCtrl = 0U;
                    vlSelfRef.tbCover_top__DOT__id_memCtrl = 0U;
                    vlSelfRef.tbCover_top__DOT__id_wbCtrl = 0U;
                    vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 1U;
                    vlSelfRef.tbCover_top__DOT__id_PCJmp = 0U;
                    vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
                    ++(vlSelf->__Vcoverage[1996]);
                }
            } else if ((0x20000000U & vlSelfRef.tbCover_top__DOT__if_id_inst)) {
                if ((0x10000000U & vlSelfRef.tbCover_top__DOT__if_id_inst)) {
                    vlSelfRef.tbCover_top__DOT__id_exCtrl = 0U;
                    vlSelfRef.tbCover_top__DOT__id_memCtrl = 0U;
                    vlSelfRef.tbCover_top__DOT__id_wbCtrl = 0U;
                    vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 1U;
                    vlSelfRef.tbCover_top__DOT__id_PCJmp = 0U;
                    vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
                    ++(vlSelf->__Vcoverage[1996]);
                } else if ((0x08000000U & vlSelfRef.tbCover_top__DOT__if_id_inst)) {
                    if ((0x04000000U & vlSelfRef.tbCover_top__DOT__if_id_inst)) {
                        vlSelfRef.tbCover_top__DOT__id_exCtrl = 1U;
                        vlSelfRef.tbCover_top__DOT__id_memCtrl = 2U;
                        vlSelfRef.tbCover_top__DOT__id_wbCtrl = 0U;
                        vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 1U;
                        vlSelfRef.tbCover_top__DOT__id_PCJmp = 0U;
                        vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
                        ++(vlSelf->__Vcoverage[1995]);
                    } else {
                        vlSelfRef.tbCover_top__DOT__id_exCtrl = 0U;
                        vlSelfRef.tbCover_top__DOT__id_memCtrl = 0U;
                        vlSelfRef.tbCover_top__DOT__id_wbCtrl = 0U;
                        vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 1U;
                        vlSelfRef.tbCover_top__DOT__id_PCJmp = 0U;
                        vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
                        ++(vlSelf->__Vcoverage[1996]);
                    }
                } else if ((0x04000000U & vlSelfRef.tbCover_top__DOT__if_id_inst)) {
                    vlSelfRef.tbCover_top__DOT__id_exCtrl = 1U;
                    vlSelfRef.tbCover_top__DOT__id_memCtrl = 2U;
                    vlSelfRef.tbCover_top__DOT__id_wbCtrl = 8U;
                    vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 1U;
                    vlSelfRef.tbCover_top__DOT__id_PCJmp = 0U;
                    vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
                    ++(vlSelf->__Vcoverage[1994]);
                } else {
                    vlSelfRef.tbCover_top__DOT__id_exCtrl = 1U;
                    vlSelfRef.tbCover_top__DOT__id_memCtrl = 2U;
                    vlSelfRef.tbCover_top__DOT__id_wbCtrl = 4U;
                    vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 1U;
                    vlSelfRef.tbCover_top__DOT__id_PCJmp = 0U;
                    vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
                    ++(vlSelf->__Vcoverage[1992]);
                }
            } else if ((0x10000000U & vlSelfRef.tbCover_top__DOT__if_id_inst)) {
                if ((0x08000000U & vlSelfRef.tbCover_top__DOT__if_id_inst)) {
                    vlSelfRef.tbCover_top__DOT__id_exCtrl = 0U;
                    vlSelfRef.tbCover_top__DOT__id_memCtrl = 0U;
                    vlSelfRef.tbCover_top__DOT__id_wbCtrl = 0U;
                    vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 1U;
                    vlSelfRef.tbCover_top__DOT__id_PCJmp = 0U;
                    vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
                    ++(vlSelf->__Vcoverage[1996]);
                } else if ((0x04000000U & vlSelfRef.tbCover_top__DOT__if_id_inst)) {
                    vlSelfRef.tbCover_top__DOT__id_exCtrl = 1U;
                    vlSelfRef.tbCover_top__DOT__id_memCtrl = 1U;
                    vlSelfRef.tbCover_top__DOT__id_wbCtrl = 0x0bU;
                    vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 1U;
                    vlSelfRef.tbCover_top__DOT__id_PCJmp = 0U;
                    vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
                    ++(vlSelf->__Vcoverage[1986]);
                } else {
                    vlSelfRef.tbCover_top__DOT__id_exCtrl = 1U;
                    vlSelfRef.tbCover_top__DOT__id_memCtrl = 1U;
                    vlSelfRef.tbCover_top__DOT__id_wbCtrl = 7U;
                    vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 1U;
                    vlSelfRef.tbCover_top__DOT__id_PCJmp = 0U;
                    vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
                    ++(vlSelf->__Vcoverage[1985]);
                }
            } else if ((0x08000000U & vlSelfRef.tbCover_top__DOT__if_id_inst)) {
                if ((0x04000000U & vlSelfRef.tbCover_top__DOT__if_id_inst)) {
                    vlSelfRef.tbCover_top__DOT__id_exCtrl = 1U;
                    vlSelfRef.tbCover_top__DOT__id_memCtrl = 2U;
                    vlSelfRef.tbCover_top__DOT__id_wbCtrl = 0x0cU;
                    vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 1U;
                    vlSelfRef.tbCover_top__DOT__id_PCJmp = 0U;
                    vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
                    ++(vlSelf->__Vcoverage[1988]);
                } else {
                    vlSelfRef.tbCover_top__DOT__id_exCtrl = 0U;
                    vlSelfRef.tbCover_top__DOT__id_memCtrl = 0U;
                    vlSelfRef.tbCover_top__DOT__id_wbCtrl = 0U;
                    vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 1U;
                    vlSelfRef.tbCover_top__DOT__id_PCJmp = 0U;
                    vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
                    ++(vlSelf->__Vcoverage[1996]);
                }
            } else {
                vlSelfRef.tbCover_top__DOT__id_exCtrl = 0U;
                vlSelfRef.tbCover_top__DOT__id_memCtrl = 0U;
                vlSelfRef.tbCover_top__DOT__id_wbCtrl = 0U;
                vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 1U;
                vlSelfRef.tbCover_top__DOT__id_PCJmp = 0U;
                vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
                ++(vlSelf->__Vcoverage[1996]);
            }
        } else if ((0x40000000U & vlSelfRef.tbCover_top__DOT__if_id_inst)) {
            vlSelfRef.tbCover_top__DOT__id_exCtrl = 0U;
            vlSelfRef.tbCover_top__DOT__id_memCtrl = 0U;
            vlSelfRef.tbCover_top__DOT__id_wbCtrl = 0U;
            vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 1U;
            vlSelfRef.tbCover_top__DOT__id_PCJmp = 0U;
            vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
            ++(vlSelf->__Vcoverage[1996]);
        } else if ((0x20000000U & vlSelfRef.tbCover_top__DOT__if_id_inst)) {
            if ((0x10000000U & vlSelfRef.tbCover_top__DOT__if_id_inst)) {
                if ((0x08000000U & vlSelfRef.tbCover_top__DOT__if_id_inst)) {
                    if ((0x04000000U & vlSelfRef.tbCover_top__DOT__if_id_inst)) {
                        vlSelfRef.tbCover_top__DOT__id_exCtrl = 1U;
                        vlSelfRef.tbCover_top__DOT__id_memCtrl = 1U;
                        vlSelfRef.tbCover_top__DOT__id_wbCtrl = 0x0fU;
                        vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 1U;
                        vlSelfRef.tbCover_top__DOT__id_PCJmp = 0U;
                        vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
                        ++(vlSelf->__Vcoverage[1987]);
                    } else {
                        vlSelfRef.tbCover_top__DOT__id_exCtrl = 0U;
                        vlSelfRef.tbCover_top__DOT__id_memCtrl = 0U;
                        vlSelfRef.tbCover_top__DOT__id_wbCtrl = 0U;
                        vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 1U;
                        vlSelfRef.tbCover_top__DOT__id_PCJmp = 0U;
                        vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
                        ++(vlSelf->__Vcoverage[1996]);
                    }
                } else if ((0x04000000U & vlSelfRef.tbCover_top__DOT__if_id_inst)) {
                    vlSelfRef.tbCover_top__DOT__id_exCtrl = 0x11U;
                    vlSelfRef.tbCover_top__DOT__id_memCtrl = 0U;
                    vlSelfRef.tbCover_top__DOT__id_wbCtrl = 2U;
                    vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 0U;
                    vlSelfRef.tbCover_top__DOT__id_PCJmp = 0U;
                    vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
                    ++(vlSelf->__Vcoverage[1989]);
                } else {
                    vlSelfRef.tbCover_top__DOT__id_exCtrl = 7U;
                    vlSelfRef.tbCover_top__DOT__id_memCtrl = 0U;
                    vlSelfRef.tbCover_top__DOT__id_wbCtrl = 2U;
                    vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 0U;
                    vlSelfRef.tbCover_top__DOT__id_PCJmp = 0U;
                    vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
                    ++(vlSelf->__Vcoverage[1980]);
                }
            } else if ((0x08000000U & vlSelfRef.tbCover_top__DOT__if_id_inst)) {
                if ((0x04000000U & vlSelfRef.tbCover_top__DOT__if_id_inst)) {
                    vlSelfRef.tbCover_top__DOT__id_exCtrl = 0x1dU;
                    vlSelfRef.tbCover_top__DOT__id_memCtrl = 0U;
                    vlSelfRef.tbCover_top__DOT__id_wbCtrl = 2U;
                    vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 0U;
                    vlSelfRef.tbCover_top__DOT__id_PCJmp = 0U;
                    vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
                    ++(vlSelf->__Vcoverage[1991]);
                } else {
                    vlSelfRef.tbCover_top__DOT__id_exCtrl = 0x1bU;
                    vlSelfRef.tbCover_top__DOT__id_memCtrl = 0U;
                    vlSelfRef.tbCover_top__DOT__id_wbCtrl = 2U;
                    vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 0U;
                    vlSelfRef.tbCover_top__DOT__id_PCJmp = 0U;
                    vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
                    ++(vlSelf->__Vcoverage[1990]);
                }
            } else if ((0x04000000U & vlSelfRef.tbCover_top__DOT__if_id_inst)) {
                vlSelfRef.tbCover_top__DOT__id_exCtrl = 1U;
                vlSelfRef.tbCover_top__DOT__id_memCtrl = 0U;
                vlSelfRef.tbCover_top__DOT__id_wbCtrl = 2U;
                vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 1U;
                vlSelfRef.tbCover_top__DOT__id_PCJmp = 0U;
                vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
                ++(vlSelf->__Vcoverage[1979]);
            } else {
                vlSelfRef.tbCover_top__DOT__id_exCtrl = 1U;
                vlSelfRef.tbCover_top__DOT__id_memCtrl = 0U;
                vlSelfRef.tbCover_top__DOT__id_wbCtrl = 2U;
                vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 1U;
                vlSelfRef.tbCover_top__DOT__id_PCJmp = 0U;
                vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
                ++(vlSelf->__Vcoverage[1978]);
            }
        } else if ((0x10000000U & vlSelfRef.tbCover_top__DOT__if_id_inst)) {
            if ((0x08000000U & vlSelfRef.tbCover_top__DOT__if_id_inst)) {
                vlSelfRef.tbCover_top__DOT__id_exCtrl = 0U;
                vlSelfRef.tbCover_top__DOT__id_memCtrl = 0U;
                vlSelfRef.tbCover_top__DOT__id_wbCtrl = 0U;
                vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 1U;
                vlSelfRef.tbCover_top__DOT__id_PCJmp = 0U;
                vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
                ++(vlSelf->__Vcoverage[1996]);
            } else if ((0x04000000U & vlSelfRef.tbCover_top__DOT__if_id_inst)) {
                vlSelfRef.tbCover_top__DOT__id_exCtrl = 0U;
                vlSelfRef.tbCover_top__DOT__id_memCtrl = 0x0cU;
                vlSelfRef.tbCover_top__DOT__id_wbCtrl = 0U;
                vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 1U;
                vlSelfRef.tbCover_top__DOT__id_PCJmp = 0U;
                vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
                ++(vlSelf->__Vcoverage[1982]);
            } else {
                vlSelfRef.tbCover_top__DOT__id_exCtrl = 0U;
                vlSelfRef.tbCover_top__DOT__id_memCtrl = 4U;
                vlSelfRef.tbCover_top__DOT__id_wbCtrl = 0U;
                vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 1U;
                vlSelfRef.tbCover_top__DOT__id_PCJmp = 0U;
                vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
                ++(vlSelf->__Vcoverage[1981]);
            }
        } else if ((0x08000000U & vlSelfRef.tbCover_top__DOT__if_id_inst)) {
            if ((0x04000000U & vlSelfRef.tbCover_top__DOT__if_id_inst)) {
                vlSelfRef.tbCover_top__DOT__id_exCtrl = 0U;
                vlSelfRef.tbCover_top__DOT__id_memCtrl = 0U;
                vlSelfRef.tbCover_top__DOT__id_wbCtrl = 2U;
                vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 1U;
                vlSelfRef.tbCover_top__DOT__id_PCJmp = 1U;
                vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 1U;
                ++(vlSelf->__Vcoverage[1984]);
            } else {
                vlSelfRef.tbCover_top__DOT__id_exCtrl = 0U;
                vlSelfRef.tbCover_top__DOT__id_memCtrl = 0U;
                vlSelfRef.tbCover_top__DOT__id_wbCtrl = 0U;
                vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 1U;
                vlSelfRef.tbCover_top__DOT__id_PCJmp = 1U;
                vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
                ++(vlSelf->__Vcoverage[1983]);
            }
        } else if ((0x04000000U & vlSelfRef.tbCover_top__DOT__if_id_inst)) {
            vlSelfRef.tbCover_top__DOT__id_exCtrl = 0U;
            vlSelfRef.tbCover_top__DOT__id_memCtrl = 0U;
            vlSelfRef.tbCover_top__DOT__id_wbCtrl = 0U;
            vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 1U;
            vlSelfRef.tbCover_top__DOT__id_PCJmp = 0U;
            vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
            ++(vlSelf->__Vcoverage[1996]);
        } else {
            vlSelfRef.tbCover_top__DOT__id_exCtrl = 0x0cU;
            vlSelfRef.tbCover_top__DOT__id_memCtrl = 0U;
            vlSelfRef.tbCover_top__DOT__id_wbCtrl = 2U;
            vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 1U;
            vlSelfRef.tbCover_top__DOT__id_PCJmp = 0U;
            vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
            ++(vlSelf->__Vcoverage[1977]);
        }
        ++(vlSelf->__Vcoverage[1998]);
    }
    if (vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__flushCtrlSignals) {
        ++(vlSelf->__Vcoverage[1999]);
    }
    if (vlSelfRef.tbCover_top__DOT__rst) {
        ++(vlSelf->__Vcoverage[2000]);
    }
    if ((1U & ((~ (IData)(vlSelfRef.tbCover_top__DOT__rst)) 
               & (~ (IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__flushCtrlSignals))))) {
        ++(vlSelf->__Vcoverage[2001]);
    }
    ++(vlSelf->__Vcoverage[2002]);
    if ((0U != (vlSelfRef.tbCover_top__DOT__if_inst 
                ^ vlSelfRef.tbCover_top__DOT____Vtogcov__if_inst))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 80, vlSelfRef.tbCover_top__DOT__if_inst, vlSelfRef.tbCover_top__DOT____Vtogcov__if_inst);
        vlSelfRef.tbCover_top__DOT____Vtogcov__if_inst 
            = vlSelfRef.tbCover_top__DOT__if_inst;
    }
    if ((0U != ((IData)(vlSelfRef.tbCover_top__DOT__id_exCtrl) 
                ^ (IData)(vlSelfRef.tbCover_top__DOT____Vtogcov__id_exCtrl)))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSelf->__Vcoverage + 302, vlSelfRef.tbCover_top__DOT__id_exCtrl, vlSelfRef.tbCover_top__DOT____Vtogcov__id_exCtrl);
        vlSelfRef.tbCover_top__DOT____Vtogcov__id_exCtrl 
            = vlSelfRef.tbCover_top__DOT__id_exCtrl;
    }
    if ((0U != ((IData)(vlSelfRef.tbCover_top__DOT__id_memCtrl) 
                ^ (IData)(vlSelfRef.tbCover_top__DOT____Vtogcov__id_memCtrl)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 312, vlSelfRef.tbCover_top__DOT__id_memCtrl, vlSelfRef.tbCover_top__DOT____Vtogcov__id_memCtrl);
        vlSelfRef.tbCover_top__DOT____Vtogcov__id_memCtrl 
            = vlSelfRef.tbCover_top__DOT__id_memCtrl;
    }
    if ((0U != ((IData)(vlSelfRef.tbCover_top__DOT__id_wbCtrl) 
                ^ (IData)(vlSelfRef.tbCover_top__DOT____Vtogcov__id_wbCtrl)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 320, vlSelfRef.tbCover_top__DOT__id_wbCtrl, vlSelfRef.tbCover_top__DOT____Vtogcov__id_wbCtrl);
        vlSelfRef.tbCover_top__DOT____Vtogcov__id_wbCtrl 
            = vlSelfRef.tbCover_top__DOT__id_wbCtrl;
    }
    if (((IData)(vlSelfRef.tbCover_top__DOT__id_PCJmp) 
         ^ (IData)(vlSelfRef.tbCover_top__DOT____Vtogcov__id_PCJmp))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 520, vlSelfRef.tbCover_top__DOT__id_PCJmp, vlSelfRef.tbCover_top__DOT____Vtogcov__id_PCJmp);
        vlSelfRef.tbCover_top__DOT____Vtogcov__id_PCJmp 
            = vlSelfRef.tbCover_top__DOT__id_PCJmp;
    }
    if (((IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel) 
         ^ (IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT____Vtogcov__signExtSel))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1937, vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel, vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT____Vtogcov__signExtSel);
        vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT____Vtogcov__signExtSel 
            = vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel;
    }
    if (vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel) {
        ++(vlSelf->__Vcoverage[1941]);
        vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT____VlemCond_0 
            = (((- (IData)((1U & (vlSelfRef.tbCover_top__DOT__if_id_inst 
                                  >> 0x0fU)))) << 0x00000010U) 
               | (0x0000ffffU & vlSelfRef.tbCover_top__DOT__if_id_inst));
    } else {
        ++(vlSelf->__Vcoverage[1942]);
        vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT____VlemCond_0 
            = (0x0000ffffU & vlSelfRef.tbCover_top__DOT__if_id_inst);
    }
    vlSelfRef.tbCover_top__DOT__id_sgnExt = vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT____VlemCond_0;
    if (vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel) {
        ++(vlSelf->__Vcoverage[1939]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel)))) {
        ++(vlSelf->__Vcoverage[1940]);
    }
    ++(vlSelf->__Vcoverage[1943]);
    if (((IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg) 
         ^ (IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT____Vtogcov__linkReg))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1935, vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg, vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT____Vtogcov__linkReg);
        vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT____Vtogcov__linkReg 
            = vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg;
    }
    if (vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg) {
        ++(vlSelf->__Vcoverage[1951]);
        vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT____VlemCond_1 = 0x1fU;
    } else {
        ++(vlSelf->__Vcoverage[1952]);
        vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT____VlemCond_1 
            = (0x0000001fU & (vlSelfRef.tbCover_top__DOT__if_id_inst 
                              >> 0x0bU));
    }
    vlSelfRef.tbCover_top__DOT__id_regD = vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT____VlemCond_1;
    if (vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg) {
        ++(vlSelf->__Vcoverage[1949]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg)))) {
        ++(vlSelf->__Vcoverage[1950]);
    }
    if (vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg) {
        ++(vlSelf->__Vcoverage[1959]);
        vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT____VlemCond_3 = 4U;
    } else {
        ++(vlSelf->__Vcoverage[1960]);
        vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT____VlemCond_3 
            = vlSelfRef.tbCover_top__DOT__reg_file_debug
            [(0x0000001fU & (vlSelfRef.tbCover_top__DOT__if_id_inst 
                             >> 0x10U))];
    }
    vlSelfRef.tbCover_top__DOT__id_rdDataTwo = vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT____VlemCond_3;
    if (vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg) {
        ++(vlSelf->__Vcoverage[1957]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg)))) {
        ++(vlSelf->__Vcoverage[1958]);
    }
    if (vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg) {
        ++(vlSelf->__Vcoverage[1955]);
        vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT____VlemCond_2 
            = vlSelfRef.tbCover_top__DOT__if_id_pcIncr;
    } else {
        ++(vlSelf->__Vcoverage[1956]);
        vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT____VlemCond_2 
            = vlSelfRef.tbCover_top__DOT__reg_file_debug
            [(0x0000001fU & (vlSelfRef.tbCover_top__DOT__if_id_inst 
                             >> 0x15U))];
    }
    vlSelfRef.tbCover_top__DOT__id_rdDataOne = vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT____VlemCond_2;
    if (vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg) {
        ++(vlSelf->__Vcoverage[1953]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg)))) {
        ++(vlSelf->__Vcoverage[1954]);
    }
    if ((0U != (vlSelfRef.tbCover_top__DOT__id_sgnExt 
                ^ vlSelfRef.tbCover_top__DOT____Vtogcov__id_sgnExt))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 328, vlSelfRef.tbCover_top__DOT__id_sgnExt, vlSelfRef.tbCover_top__DOT____Vtogcov__id_sgnExt);
        vlSelfRef.tbCover_top__DOT____Vtogcov__id_sgnExt 
            = vlSelfRef.tbCover_top__DOT__id_sgnExt;
    }
    if ((0U != ((IData)(vlSelfRef.tbCover_top__DOT__id_regD) 
                ^ (IData)(vlSelfRef.tbCover_top__DOT____Vtogcov__id_regD)))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSelf->__Vcoverage + 282, vlSelfRef.tbCover_top__DOT__id_regD, vlSelfRef.tbCover_top__DOT____Vtogcov__id_regD);
        vlSelfRef.tbCover_top__DOT____Vtogcov__id_regD 
            = vlSelfRef.tbCover_top__DOT__id_regD;
    }
    if ((0U != (vlSelfRef.tbCover_top__DOT__id_rdDataTwo 
                ^ vlSelfRef.tbCover_top__DOT____Vtogcov__id_rdDataTwo))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 456, vlSelfRef.tbCover_top__DOT__id_rdDataTwo, vlSelfRef.tbCover_top__DOT____Vtogcov__id_rdDataTwo);
        vlSelfRef.tbCover_top__DOT____Vtogcov__id_rdDataTwo 
            = vlSelfRef.tbCover_top__DOT__id_rdDataTwo;
    }
    if ((0U != (vlSelfRef.tbCover_top__DOT__id_rdDataOne 
                ^ vlSelfRef.tbCover_top__DOT____Vtogcov__id_rdDataOne))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 392, vlSelfRef.tbCover_top__DOT__id_rdDataOne, vlSelfRef.tbCover_top__DOT____Vtogcov__id_rdDataOne);
        vlSelfRef.tbCover_top__DOT____Vtogcov__id_rdDataOne 
            = vlSelfRef.tbCover_top__DOT__id_rdDataOne;
    }
    if (vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__is_jr) {
        ++(vlSelf->__Vcoverage[1973]);
        vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT____VlemCond_4 
            = vlSelfRef.tbCover_top__DOT__id_rdDataOne;
    } else {
        ++(vlSelf->__Vcoverage[1976]);
        if (vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__is_j_type) {
            ++(vlSelf->__Vcoverage[1974]);
            vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT____VlemCond_4 
                = ((0xf0000000U & vlSelfRef.tbCover_top__DOT__if_id_pcIncr) 
                   | (0x0ffffffcU & (vlSelfRef.tbCover_top__DOT__if_id_inst 
                                     << 2U)));
        } else {
            ++(vlSelf->__Vcoverage[1975]);
            vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT____VlemCond_4 = 0U;
        }
    }
    vlSelfRef.tbCover_top__DOT__id_jump_addr = vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT____VlemCond_4;
    if (vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__is_jr) {
        ++(vlSelf->__Vcoverage[1971]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__is_jr)))) {
        ++(vlSelf->__Vcoverage[1972]);
    }
    if ((0U != (vlSelfRef.tbCover_top__DOT__id_jump_addr 
                ^ vlSelfRef.tbCover_top__DOT____Vtogcov__id_jump_addr))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 522, vlSelfRef.tbCover_top__DOT__id_jump_addr, vlSelfRef.tbCover_top__DOT____Vtogcov__id_jump_addr);
        vlSelfRef.tbCover_top__DOT____Vtogcov__id_jump_addr 
            = vlSelfRef.tbCover_top__DOT__id_jump_addr;
    }
}

void VtbCover_top___024root___nba_sequent__TOP__2(VtbCover_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbCover_top___024root___nba_sequent__TOP__2\n"); );
    VtbCover_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdlySet__tbCover_top__DOT__reg_file_debug__v0;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v0 = 0;
    CData/*0:0*/ __VdlySet__tbCover_top__DOT__reg_file_debug__v1;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v1 = 0;
    CData/*0:0*/ __VdlySet__tbCover_top__DOT__reg_file_debug__v2;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v2 = 0;
    CData/*0:0*/ __VdlySet__tbCover_top__DOT__reg_file_debug__v3;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v3 = 0;
    CData/*0:0*/ __VdlySet__tbCover_top__DOT__reg_file_debug__v4;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v4 = 0;
    CData/*0:0*/ __VdlySet__tbCover_top__DOT__reg_file_debug__v5;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v5 = 0;
    CData/*0:0*/ __VdlySet__tbCover_top__DOT__reg_file_debug__v6;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v6 = 0;
    CData/*0:0*/ __VdlySet__tbCover_top__DOT__reg_file_debug__v7;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v7 = 0;
    CData/*0:0*/ __VdlySet__tbCover_top__DOT__reg_file_debug__v8;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v8 = 0;
    CData/*0:0*/ __VdlySet__tbCover_top__DOT__reg_file_debug__v9;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v9 = 0;
    CData/*0:0*/ __VdlySet__tbCover_top__DOT__reg_file_debug__v10;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v10 = 0;
    CData/*0:0*/ __VdlySet__tbCover_top__DOT__reg_file_debug__v11;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v11 = 0;
    CData/*0:0*/ __VdlySet__tbCover_top__DOT__reg_file_debug__v12;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v12 = 0;
    CData/*0:0*/ __VdlySet__tbCover_top__DOT__reg_file_debug__v13;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v13 = 0;
    CData/*0:0*/ __VdlySet__tbCover_top__DOT__reg_file_debug__v14;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v14 = 0;
    CData/*0:0*/ __VdlySet__tbCover_top__DOT__reg_file_debug__v15;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v15 = 0;
    CData/*0:0*/ __VdlySet__tbCover_top__DOT__reg_file_debug__v16;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v16 = 0;
    CData/*0:0*/ __VdlySet__tbCover_top__DOT__reg_file_debug__v17;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v17 = 0;
    CData/*0:0*/ __VdlySet__tbCover_top__DOT__reg_file_debug__v18;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v18 = 0;
    CData/*0:0*/ __VdlySet__tbCover_top__DOT__reg_file_debug__v19;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v19 = 0;
    CData/*0:0*/ __VdlySet__tbCover_top__DOT__reg_file_debug__v20;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v20 = 0;
    CData/*0:0*/ __VdlySet__tbCover_top__DOT__reg_file_debug__v21;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v21 = 0;
    CData/*0:0*/ __VdlySet__tbCover_top__DOT__reg_file_debug__v22;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v22 = 0;
    CData/*0:0*/ __VdlySet__tbCover_top__DOT__reg_file_debug__v23;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v23 = 0;
    CData/*0:0*/ __VdlySet__tbCover_top__DOT__reg_file_debug__v24;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v24 = 0;
    CData/*0:0*/ __VdlySet__tbCover_top__DOT__reg_file_debug__v25;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v25 = 0;
    CData/*0:0*/ __VdlySet__tbCover_top__DOT__reg_file_debug__v26;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v26 = 0;
    CData/*0:0*/ __VdlySet__tbCover_top__DOT__reg_file_debug__v27;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v27 = 0;
    CData/*0:0*/ __VdlySet__tbCover_top__DOT__reg_file_debug__v28;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v28 = 0;
    CData/*0:0*/ __VdlySet__tbCover_top__DOT__reg_file_debug__v29;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v29 = 0;
    CData/*0:0*/ __VdlySet__tbCover_top__DOT__reg_file_debug__v30;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v30 = 0;
    CData/*0:0*/ __VdlySet__tbCover_top__DOT__reg_file_debug__v31;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v31 = 0;
    IData/*31:0*/ __VdlyVal__tbCover_top__DOT__reg_file_debug__v32;
    __VdlyVal__tbCover_top__DOT__reg_file_debug__v32 = 0;
    CData/*4:0*/ __VdlyDim0__tbCover_top__DOT__reg_file_debug__v32;
    __VdlyDim0__tbCover_top__DOT__reg_file_debug__v32 = 0;
    CData/*0:0*/ __VdlySet__tbCover_top__DOT__reg_file_debug__v32;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v32 = 0;
    // Body
    __VdlySet__tbCover_top__DOT__reg_file_debug__v0 = 0U;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v1 = 0U;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v2 = 0U;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v3 = 0U;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v4 = 0U;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v5 = 0U;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v6 = 0U;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v7 = 0U;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v8 = 0U;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v9 = 0U;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v10 = 0U;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v11 = 0U;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v12 = 0U;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v13 = 0U;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v14 = 0U;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v15 = 0U;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v16 = 0U;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v17 = 0U;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v18 = 0U;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v19 = 0U;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v20 = 0U;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v21 = 0U;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v22 = 0U;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v23 = 0U;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v24 = 0U;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v25 = 0U;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v26 = 0U;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v27 = 0U;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v28 = 0U;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v29 = 0U;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v30 = 0U;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v31 = 0U;
    __VdlySet__tbCover_top__DOT__reg_file_debug__v32 = 0U;
    if (vlSelfRef.tbCover_top__DOT__rst) {
        ++(vlSelf->__Vcoverage[1944]);
        vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__i = 0x00000020U;
        __VdlySet__tbCover_top__DOT__reg_file_debug__v0 = 1U;
        ++(vlSelf->__Vcoverage[1944]);
        __VdlySet__tbCover_top__DOT__reg_file_debug__v1 = 1U;
        ++(vlSelf->__Vcoverage[1944]);
        __VdlySet__tbCover_top__DOT__reg_file_debug__v2 = 1U;
        ++(vlSelf->__Vcoverage[1944]);
        __VdlySet__tbCover_top__DOT__reg_file_debug__v3 = 1U;
        ++(vlSelf->__Vcoverage[1944]);
        __VdlySet__tbCover_top__DOT__reg_file_debug__v4 = 1U;
        ++(vlSelf->__Vcoverage[1944]);
        __VdlySet__tbCover_top__DOT__reg_file_debug__v5 = 1U;
        ++(vlSelf->__Vcoverage[1944]);
        __VdlySet__tbCover_top__DOT__reg_file_debug__v6 = 1U;
        ++(vlSelf->__Vcoverage[1944]);
        __VdlySet__tbCover_top__DOT__reg_file_debug__v7 = 1U;
        ++(vlSelf->__Vcoverage[1944]);
        __VdlySet__tbCover_top__DOT__reg_file_debug__v8 = 1U;
        ++(vlSelf->__Vcoverage[1944]);
        __VdlySet__tbCover_top__DOT__reg_file_debug__v9 = 1U;
        ++(vlSelf->__Vcoverage[1944]);
        __VdlySet__tbCover_top__DOT__reg_file_debug__v10 = 1U;
        ++(vlSelf->__Vcoverage[1944]);
        __VdlySet__tbCover_top__DOT__reg_file_debug__v11 = 1U;
        ++(vlSelf->__Vcoverage[1944]);
        __VdlySet__tbCover_top__DOT__reg_file_debug__v12 = 1U;
        ++(vlSelf->__Vcoverage[1944]);
        __VdlySet__tbCover_top__DOT__reg_file_debug__v13 = 1U;
        ++(vlSelf->__Vcoverage[1944]);
        __VdlySet__tbCover_top__DOT__reg_file_debug__v14 = 1U;
        ++(vlSelf->__Vcoverage[1944]);
        __VdlySet__tbCover_top__DOT__reg_file_debug__v15 = 1U;
        ++(vlSelf->__Vcoverage[1944]);
        __VdlySet__tbCover_top__DOT__reg_file_debug__v16 = 1U;
        ++(vlSelf->__Vcoverage[1944]);
        __VdlySet__tbCover_top__DOT__reg_file_debug__v17 = 1U;
        ++(vlSelf->__Vcoverage[1944]);
        __VdlySet__tbCover_top__DOT__reg_file_debug__v18 = 1U;
        ++(vlSelf->__Vcoverage[1944]);
        __VdlySet__tbCover_top__DOT__reg_file_debug__v19 = 1U;
        ++(vlSelf->__Vcoverage[1944]);
        __VdlySet__tbCover_top__DOT__reg_file_debug__v20 = 1U;
        ++(vlSelf->__Vcoverage[1944]);
        __VdlySet__tbCover_top__DOT__reg_file_debug__v21 = 1U;
        ++(vlSelf->__Vcoverage[1944]);
        __VdlySet__tbCover_top__DOT__reg_file_debug__v22 = 1U;
        ++(vlSelf->__Vcoverage[1944]);
        __VdlySet__tbCover_top__DOT__reg_file_debug__v23 = 1U;
        ++(vlSelf->__Vcoverage[1944]);
        __VdlySet__tbCover_top__DOT__reg_file_debug__v24 = 1U;
        ++(vlSelf->__Vcoverage[1944]);
        __VdlySet__tbCover_top__DOT__reg_file_debug__v25 = 1U;
        ++(vlSelf->__Vcoverage[1944]);
        __VdlySet__tbCover_top__DOT__reg_file_debug__v26 = 1U;
        ++(vlSelf->__Vcoverage[1944]);
        __VdlySet__tbCover_top__DOT__reg_file_debug__v27 = 1U;
        ++(vlSelf->__Vcoverage[1944]);
        __VdlySet__tbCover_top__DOT__reg_file_debug__v28 = 1U;
        ++(vlSelf->__Vcoverage[1944]);
        __VdlySet__tbCover_top__DOT__reg_file_debug__v29 = 1U;
        ++(vlSelf->__Vcoverage[1944]);
        __VdlySet__tbCover_top__DOT__reg_file_debug__v30 = 1U;
        ++(vlSelf->__Vcoverage[1944]);
        __VdlySet__tbCover_top__DOT__reg_file_debug__v31 = 1U;
        ++(vlSelf->__Vcoverage[1947]);
    } else if ((2U & (IData)(vlSelfRef.tbCover_top__DOT__mem_wb_wbCtrl))) {
        ++(vlSelf->__Vcoverage[1945]);
        __VdlyVal__tbCover_top__DOT__reg_file_debug__v32 
            = vlSelfRef.tbCover_top__DOT__wb_regData;
        __VdlyDim0__tbCover_top__DOT__reg_file_debug__v32 
            = vlSelfRef.tbCover_top__DOT__mem_wb_regDst;
        __VdlySet__tbCover_top__DOT__reg_file_debug__v32 = 1U;
    } else {
        ++(vlSelf->__Vcoverage[1946]);
    }
    ++(vlSelf->__Vcoverage[1948]);
    if (__VdlySet__tbCover_top__DOT__reg_file_debug__v0) {
        vlSelfRef.tbCover_top__DOT__reg_file_debug[0U] = 0U;
    }
    if (__VdlySet__tbCover_top__DOT__reg_file_debug__v1) {
        vlSelfRef.tbCover_top__DOT__reg_file_debug[1U] = 0U;
    }
    if (__VdlySet__tbCover_top__DOT__reg_file_debug__v2) {
        vlSelfRef.tbCover_top__DOT__reg_file_debug[2U] = 0U;
    }
    if (__VdlySet__tbCover_top__DOT__reg_file_debug__v3) {
        vlSelfRef.tbCover_top__DOT__reg_file_debug[3U] = 0U;
    }
    if (__VdlySet__tbCover_top__DOT__reg_file_debug__v4) {
        vlSelfRef.tbCover_top__DOT__reg_file_debug[4U] = 0U;
    }
    if (__VdlySet__tbCover_top__DOT__reg_file_debug__v5) {
        vlSelfRef.tbCover_top__DOT__reg_file_debug[5U] = 0U;
    }
    if (__VdlySet__tbCover_top__DOT__reg_file_debug__v6) {
        vlSelfRef.tbCover_top__DOT__reg_file_debug[6U] = 0U;
    }
    if (__VdlySet__tbCover_top__DOT__reg_file_debug__v7) {
        vlSelfRef.tbCover_top__DOT__reg_file_debug[7U] = 0U;
    }
    if (__VdlySet__tbCover_top__DOT__reg_file_debug__v8) {
        vlSelfRef.tbCover_top__DOT__reg_file_debug[8U] = 0U;
    }
    if (__VdlySet__tbCover_top__DOT__reg_file_debug__v9) {
        vlSelfRef.tbCover_top__DOT__reg_file_debug[9U] = 0U;
    }
    if (__VdlySet__tbCover_top__DOT__reg_file_debug__v10) {
        vlSelfRef.tbCover_top__DOT__reg_file_debug[10U] = 0U;
    }
    if (__VdlySet__tbCover_top__DOT__reg_file_debug__v11) {
        vlSelfRef.tbCover_top__DOT__reg_file_debug[11U] = 0U;
    }
    if (__VdlySet__tbCover_top__DOT__reg_file_debug__v12) {
        vlSelfRef.tbCover_top__DOT__reg_file_debug[12U] = 0U;
    }
    if (__VdlySet__tbCover_top__DOT__reg_file_debug__v13) {
        vlSelfRef.tbCover_top__DOT__reg_file_debug[13U] = 0U;
    }
    if (__VdlySet__tbCover_top__DOT__reg_file_debug__v14) {
        vlSelfRef.tbCover_top__DOT__reg_file_debug[14U] = 0U;
    }
    if (__VdlySet__tbCover_top__DOT__reg_file_debug__v15) {
        vlSelfRef.tbCover_top__DOT__reg_file_debug[15U] = 0U;
    }
    if (__VdlySet__tbCover_top__DOT__reg_file_debug__v16) {
        vlSelfRef.tbCover_top__DOT__reg_file_debug[16U] = 0U;
    }
    if (__VdlySet__tbCover_top__DOT__reg_file_debug__v17) {
        vlSelfRef.tbCover_top__DOT__reg_file_debug[17U] = 0U;
    }
    if (__VdlySet__tbCover_top__DOT__reg_file_debug__v18) {
        vlSelfRef.tbCover_top__DOT__reg_file_debug[18U] = 0U;
    }
    if (__VdlySet__tbCover_top__DOT__reg_file_debug__v19) {
        vlSelfRef.tbCover_top__DOT__reg_file_debug[19U] = 0U;
    }
    if (__VdlySet__tbCover_top__DOT__reg_file_debug__v20) {
        vlSelfRef.tbCover_top__DOT__reg_file_debug[20U] = 0U;
    }
    if (__VdlySet__tbCover_top__DOT__reg_file_debug__v21) {
        vlSelfRef.tbCover_top__DOT__reg_file_debug[21U] = 0U;
    }
    if (__VdlySet__tbCover_top__DOT__reg_file_debug__v22) {
        vlSelfRef.tbCover_top__DOT__reg_file_debug[22U] = 0U;
    }
    if (__VdlySet__tbCover_top__DOT__reg_file_debug__v23) {
        vlSelfRef.tbCover_top__DOT__reg_file_debug[23U] = 0U;
    }
    if (__VdlySet__tbCover_top__DOT__reg_file_debug__v24) {
        vlSelfRef.tbCover_top__DOT__reg_file_debug[24U] = 0U;
    }
    if (__VdlySet__tbCover_top__DOT__reg_file_debug__v25) {
        vlSelfRef.tbCover_top__DOT__reg_file_debug[25U] = 0U;
    }
    if (__VdlySet__tbCover_top__DOT__reg_file_debug__v26) {
        vlSelfRef.tbCover_top__DOT__reg_file_debug[26U] = 0U;
    }
    if (__VdlySet__tbCover_top__DOT__reg_file_debug__v27) {
        vlSelfRef.tbCover_top__DOT__reg_file_debug[27U] = 0U;
    }
    if (__VdlySet__tbCover_top__DOT__reg_file_debug__v28) {
        vlSelfRef.tbCover_top__DOT__reg_file_debug[28U] = 0U;
    }
    if (__VdlySet__tbCover_top__DOT__reg_file_debug__v29) {
        vlSelfRef.tbCover_top__DOT__reg_file_debug[29U] = 0U;
    }
    if (__VdlySet__tbCover_top__DOT__reg_file_debug__v30) {
        vlSelfRef.tbCover_top__DOT__reg_file_debug[30U] = 0U;
    }
    if (__VdlySet__tbCover_top__DOT__reg_file_debug__v31) {
        vlSelfRef.tbCover_top__DOT__reg_file_debug[31U] = 0U;
    }
    if (__VdlySet__tbCover_top__DOT__reg_file_debug__v32) {
        vlSelfRef.tbCover_top__DOT__reg_file_debug[__VdlyDim0__tbCover_top__DOT__reg_file_debug__v32] 
            = __VdlyVal__tbCover_top__DOT__reg_file_debug__v32;
    }
}

void VtbCover_top___024root___nba_sequent__TOP__4(VtbCover_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbCover_top___024root___nba_sequent__TOP__4\n"); );
    VtbCover_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tbCover_top__DOT__rst) {
        ++(vlSelf->__Vcoverage[1590]);
        vlSelfRef.tbCover_top__DOT__mem_wb_wbCtrl = 0U;
        vlSelfRef.tbCover_top__DOT__mem_wb_regDst = 0U;
        vlSelfRef.tbCover_top__DOT__mem_wb_memReadData = 0U;
        vlSelfRef.tbCover_top__DOT__mem_wb_aluResult = 0U;
    } else {
        ++(vlSelf->__Vcoverage[1591]);
        vlSelfRef.tbCover_top__DOT__mem_wb_wbCtrl = vlSelfRef.tbCover_top__DOT__ex_mem_wbCtrl;
        vlSelfRef.tbCover_top__DOT__mem_wb_regDst = vlSelfRef.tbCover_top__DOT__ex_mem_regDst;
        vlSelfRef.tbCover_top__DOT__mem_wb_memReadData 
            = vlSelfRef.tbCover_top__DOT__mem_memReadData;
        vlSelfRef.tbCover_top__DOT__mem_wb_aluResult 
            = vlSelfRef.tbCover_top__DOT__ex_mem_aluResult;
    }
    ++(vlSelf->__Vcoverage[1592]);
    if ((0U != ((IData)(vlSelfRef.tbCover_top__DOT__mem_wb_regDst) 
                ^ (IData)(vlSelfRef.tbCover_top__DOT____Vtogcov__mem_wb_regDst)))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSelf->__Vcoverage + 1358, vlSelfRef.tbCover_top__DOT__mem_wb_regDst, vlSelfRef.tbCover_top__DOT____Vtogcov__mem_wb_regDst);
        vlSelfRef.tbCover_top__DOT____Vtogcov__mem_wb_regDst 
            = vlSelfRef.tbCover_top__DOT__mem_wb_regDst;
    }
    if ((0U != (vlSelfRef.tbCover_top__DOT__mem_wb_memReadData 
                ^ vlSelfRef.tbCover_top__DOT____Vtogcov__mem_wb_memReadData))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 1368, vlSelfRef.tbCover_top__DOT__mem_wb_memReadData, vlSelfRef.tbCover_top__DOT____Vtogcov__mem_wb_memReadData);
        vlSelfRef.tbCover_top__DOT____Vtogcov__mem_wb_memReadData 
            = vlSelfRef.tbCover_top__DOT__mem_wb_memReadData;
    }
    if ((0U != (vlSelfRef.tbCover_top__DOT__mem_wb_aluResult 
                ^ vlSelfRef.tbCover_top__DOT____Vtogcov__mem_wb_aluResult))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 1432, vlSelfRef.tbCover_top__DOT__mem_wb_aluResult, vlSelfRef.tbCover_top__DOT____Vtogcov__mem_wb_aluResult);
        vlSelfRef.tbCover_top__DOT____Vtogcov__mem_wb_aluResult 
            = vlSelfRef.tbCover_top__DOT__mem_wb_aluResult;
    }
    if ((0U != ((IData)(vlSelfRef.tbCover_top__DOT__mem_wb_wbCtrl) 
                ^ (IData)(vlSelfRef.tbCover_top__DOT____Vtogcov__mem_wb_wbCtrl)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 1350, vlSelfRef.tbCover_top__DOT__mem_wb_wbCtrl, vlSelfRef.tbCover_top__DOT____Vtogcov__mem_wb_wbCtrl);
        vlSelfRef.tbCover_top__DOT____Vtogcov__mem_wb_wbCtrl 
            = vlSelfRef.tbCover_top__DOT__mem_wb_wbCtrl;
    }
    if ((1U & (((IData)(vlSelfRef.tbCover_top__DOT__mem_wb_wbCtrl) 
                >> 1U) ^ (IData)(vlSelfRef.tbCover_top__DOT____Vtogcov__wb_regWrite)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1496, 
                               ((IData)(vlSelfRef.tbCover_top__DOT__mem_wb_wbCtrl) 
                                >> 1U), vlSelfRef.tbCover_top__DOT____Vtogcov__wb_regWrite);
        vlSelfRef.tbCover_top__DOT____Vtogcov__wb_regWrite 
            = (1U & ((IData)(vlSelfRef.tbCover_top__DOT__mem_wb_wbCtrl) 
                     >> 1U));
    }
    if ((1U & (IData)(vlSelfRef.tbCover_top__DOT__mem_wb_wbCtrl))) {
        ++(vlSelf->__Vcoverage[2076]);
        vlSelfRef.tbCover_top__DOT__top_00__DOT__wb_top__DOT____VlemCond_0 
            = vlSelfRef.tbCover_top__DOT__mem_wb_memReadData;
    } else {
        ++(vlSelf->__Vcoverage[2077]);
        vlSelfRef.tbCover_top__DOT__top_00__DOT__wb_top__DOT____VlemCond_0 
            = vlSelfRef.tbCover_top__DOT__mem_wb_aluResult;
    }
    vlSelfRef.tbCover_top__DOT__top_00__DOT__wb_top__DOT__tempMemData 
        = vlSelfRef.tbCover_top__DOT__top_00__DOT__wb_top__DOT____VlemCond_0;
    if ((1U & (IData)(vlSelfRef.tbCover_top__DOT__mem_wb_wbCtrl))) {
        ++(vlSelf->__Vcoverage[2074]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tbCover_top__DOT__mem_wb_wbCtrl)))) {
        ++(vlSelf->__Vcoverage[2075]);
    }
    if ((((IData)(vlSelfRef.tbCover_top__DOT__rst) 
          | (IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__if_top__DOT__PCSrc)) 
         | (IData)(vlSelfRef.tbCover_top__DOT__id_PCJmp))) {
        ++(vlSelf->__Vcoverage[1583]);
        vlSelfRef.tbCover_top__DOT__ex_mem_regDst = 0U;
        vlSelfRef.tbCover_top__DOT__ex_mem_memCtrl = 0U;
        vlSelfRef.tbCover_top__DOT__ex_mem_wbCtrl = 0U;
        vlSelfRef.tbCover_top__DOT__ex_mem_zeroFlag = 0U;
        vlSelfRef.tbCover_top__DOT__ex_mem_aluResult = 0U;
        vlSelfRef.tbCover_top__DOT__ex_mem_rdDataTwo = 0U;
        vlSelfRef.tbCover_top__DOT__ex_mem_pcAdd = 0U;
    } else {
        ++(vlSelf->__Vcoverage[1584]);
        vlSelfRef.tbCover_top__DOT__ex_mem_regDst = vlSelfRef.tbCover_top__DOT__ex_regDst;
        vlSelfRef.tbCover_top__DOT__ex_mem_memCtrl 
            = vlSelfRef.tbCover_top__DOT__id_ex_memCtrl;
        vlSelfRef.tbCover_top__DOT__ex_mem_wbCtrl = vlSelfRef.tbCover_top__DOT__id_ex_wbCtrl;
        vlSelfRef.tbCover_top__DOT__ex_mem_zeroFlag 
            = (0U == vlSelfRef.tbCover_top__DOT__ex_aluResult);
        vlSelfRef.tbCover_top__DOT__ex_mem_aluResult 
            = vlSelfRef.tbCover_top__DOT__ex_aluResult;
        vlSelfRef.tbCover_top__DOT__ex_mem_rdDataTwo 
            = vlSelfRef.tbCover_top__DOT__id_ex_rdDataTwo;
        vlSelfRef.tbCover_top__DOT__ex_mem_pcAdd = vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__pc_slt_add;
    }
    if (vlSelfRef.tbCover_top__DOT__id_PCJmp) {
        ++(vlSelf->__Vcoverage[1585]);
    }
    if (vlSelfRef.tbCover_top__DOT__top_00__DOT__if_top__DOT__PCSrc) {
        ++(vlSelf->__Vcoverage[1586]);
    }
    if (vlSelfRef.tbCover_top__DOT__rst) {
        ++(vlSelf->__Vcoverage[1587]);
    }
    if ((1U & (((~ (IData)(vlSelfRef.tbCover_top__DOT__rst)) 
                & (~ (IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__if_top__DOT__PCSrc))) 
               & (~ (IData)(vlSelfRef.tbCover_top__DOT__id_PCJmp))))) {
        ++(vlSelf->__Vcoverage[1588]);
    }
    ++(vlSelf->__Vcoverage[1589]);
    if ((0U != (vlSelfRef.tbCover_top__DOT__top_00__DOT__wb_top__DOT__tempMemData 
                ^ vlSelfRef.tbCover_top__DOT__top_00__DOT__wb_top__DOT____Vtogcov__tempMemData))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 2010, vlSelfRef.tbCover_top__DOT__top_00__DOT__wb_top__DOT__tempMemData, vlSelfRef.tbCover_top__DOT__top_00__DOT__wb_top__DOT____Vtogcov__tempMemData);
        vlSelfRef.tbCover_top__DOT__top_00__DOT__wb_top__DOT____Vtogcov__tempMemData 
            = vlSelfRef.tbCover_top__DOT__top_00__DOT__wb_top__DOT__tempMemData;
    }
    if ((8U & (IData)(vlSelfRef.tbCover_top__DOT__mem_wb_wbCtrl))) {
        if ((4U & (IData)(vlSelfRef.tbCover_top__DOT__mem_wb_wbCtrl))) {
            vlSelfRef.tbCover_top__DOT__wb_regData 
                = (vlSelfRef.tbCover_top__DOT__top_00__DOT__wb_top__DOT__tempMemData 
                   << 0x00000010U);
            ++(vlSelf->__Vcoverage[2081]);
        } else {
            vlSelfRef.tbCover_top__DOT__wb_regData 
                = (0x0000ffffU & vlSelfRef.tbCover_top__DOT__top_00__DOT__wb_top__DOT__tempMemData);
            ++(vlSelf->__Vcoverage[2080]);
        }
    } else if ((4U & (IData)(vlSelfRef.tbCover_top__DOT__mem_wb_wbCtrl))) {
        vlSelfRef.tbCover_top__DOT__wb_regData = (0x000000ffU 
                                                  & vlSelfRef.tbCover_top__DOT__top_00__DOT__wb_top__DOT__tempMemData);
        ++(vlSelf->__Vcoverage[2079]);
    } else {
        vlSelfRef.tbCover_top__DOT__wb_regData = vlSelfRef.tbCover_top__DOT__top_00__DOT__wb_top__DOT__tempMemData;
        ++(vlSelf->__Vcoverage[2078]);
    }
    ++(vlSelf->__Vcoverage[2082]);
    if ((0U != (vlSelfRef.tbCover_top__DOT__wb_regData 
                ^ vlSelfRef.tbCover_top__DOT____Vtogcov__wb_regData))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 1498, vlSelfRef.tbCover_top__DOT__wb_regData, vlSelfRef.tbCover_top__DOT____Vtogcov__wb_regData);
        vlSelfRef.tbCover_top__DOT____Vtogcov__wb_regData 
            = vlSelfRef.tbCover_top__DOT__wb_regData;
    }
    if ((0U != (vlSelfRef.tbCover_top__DOT__ex_mem_rdDataTwo 
                ^ vlSelfRef.tbCover_top__DOT____Vtogcov__ex_mem_rdDataTwo))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 1156, vlSelfRef.tbCover_top__DOT__ex_mem_rdDataTwo, vlSelfRef.tbCover_top__DOT____Vtogcov__ex_mem_rdDataTwo);
        vlSelfRef.tbCover_top__DOT____Vtogcov__ex_mem_rdDataTwo 
            = vlSelfRef.tbCover_top__DOT__ex_mem_rdDataTwo;
    }
    if ((0U != (vlSelfRef.tbCover_top__DOT__ex_mem_pcAdd 
                ^ vlSelfRef.tbCover_top__DOT____Vtogcov__ex_mem_pcAdd))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 1220, vlSelfRef.tbCover_top__DOT__ex_mem_pcAdd, vlSelfRef.tbCover_top__DOT____Vtogcov__ex_mem_pcAdd);
        vlSelfRef.tbCover_top__DOT____Vtogcov__ex_mem_pcAdd 
            = vlSelfRef.tbCover_top__DOT__ex_mem_pcAdd;
    }
    if (((IData)(vlSelfRef.tbCover_top__DOT__ex_mem_zeroFlag) 
         ^ (IData)(vlSelfRef.tbCover_top__DOT____Vtogcov__ex_mem_zeroFlag))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1090, vlSelfRef.tbCover_top__DOT__ex_mem_zeroFlag, vlSelfRef.tbCover_top__DOT____Vtogcov__ex_mem_zeroFlag);
        vlSelfRef.tbCover_top__DOT____Vtogcov__ex_mem_zeroFlag 
            = vlSelfRef.tbCover_top__DOT__ex_mem_zeroFlag;
    }
    if ((IData)(((0x0cU == (0x0cU & (IData)(vlSelfRef.tbCover_top__DOT__ex_mem_memCtrl))) 
                 & (~ (IData)(vlSelfRef.tbCover_top__DOT__ex_mem_zeroFlag))))) {
        ++(vlSelf->__Vcoverage[1911]);
    }
    if ((IData)(((4U == (0x0cU & (IData)(vlSelfRef.tbCover_top__DOT__ex_mem_memCtrl))) 
                 & (IData)(vlSelfRef.tbCover_top__DOT__ex_mem_zeroFlag)))) {
        ++(vlSelf->__Vcoverage[1912]);
    }
    if ((1U & ((~ (IData)(vlSelfRef.tbCover_top__DOT__ex_mem_zeroFlag)) 
               & (~ ((IData)(vlSelfRef.tbCover_top__DOT__ex_mem_memCtrl) 
                     >> 2U))))) {
        ++(vlSelf->__Vcoverage[1913]);
    }
    if ((1U & ((~ (IData)(vlSelfRef.tbCover_top__DOT__ex_mem_zeroFlag)) 
               & (~ ((IData)(vlSelfRef.tbCover_top__DOT__ex_mem_memCtrl) 
                     >> 3U))))) {
        ++(vlSelf->__Vcoverage[1914]);
    }
    if (((~ ((IData)(vlSelfRef.tbCover_top__DOT__ex_mem_memCtrl) 
             >> 2U)) & (IData)(vlSelfRef.tbCover_top__DOT__ex_mem_zeroFlag))) {
        ++(vlSelf->__Vcoverage[1915]);
    }
    if ((1U & (~ ((IData)(vlSelfRef.tbCover_top__DOT__ex_mem_memCtrl) 
                  >> 2U)))) {
        ++(vlSelf->__Vcoverage[1916]);
    }
    if ((IData)((0U == (0x0cU & (IData)(vlSelfRef.tbCover_top__DOT__ex_mem_memCtrl))))) {
        ++(vlSelf->__Vcoverage[1917]);
    }
    if ((((IData)(vlSelfRef.tbCover_top__DOT__ex_mem_memCtrl) 
          >> 3U) & (IData)(vlSelfRef.tbCover_top__DOT__ex_mem_zeroFlag))) {
        ++(vlSelf->__Vcoverage[1918]);
    }
    if ((IData)((8U == (0x0cU & (IData)(vlSelfRef.tbCover_top__DOT__ex_mem_memCtrl))))) {
        ++(vlSelf->__Vcoverage[1919]);
    }
    if ((0U != ((IData)(vlSelfRef.tbCover_top__DOT__ex_mem_memCtrl) 
                ^ (IData)(vlSelfRef.tbCover_top__DOT____Vtogcov__ex_mem_memCtrl)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 1074, vlSelfRef.tbCover_top__DOT__ex_mem_memCtrl, vlSelfRef.tbCover_top__DOT____Vtogcov__ex_mem_memCtrl);
        vlSelfRef.tbCover_top__DOT____Vtogcov__ex_mem_memCtrl 
            = vlSelfRef.tbCover_top__DOT__ex_mem_memCtrl;
    }
    if ((1U & (((IData)(vlSelfRef.tbCover_top__DOT__ex_mem_memCtrl) 
                >> 1U) ^ (IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT____Vtogcov__wr_en)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1920, 
                               ((IData)(vlSelfRef.tbCover_top__DOT__ex_mem_memCtrl) 
                                >> 1U), vlSelfRef.tbCover_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT____Vtogcov__wr_en);
        vlSelfRef.tbCover_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT____Vtogcov__wr_en 
            = (1U & ((IData)(vlSelfRef.tbCover_top__DOT__ex_mem_memCtrl) 
                     >> 1U));
    }
    if ((1U & ((IData)(vlSelfRef.tbCover_top__DOT__ex_mem_memCtrl) 
               ^ (IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT____Vtogcov__rd_en)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1922, vlSelfRef.tbCover_top__DOT__ex_mem_memCtrl, vlSelfRef.tbCover_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT____Vtogcov__rd_en);
        vlSelfRef.tbCover_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT____Vtogcov__rd_en 
            = (1U & (IData)(vlSelfRef.tbCover_top__DOT__ex_mem_memCtrl));
    }
    if ((0U != (vlSelfRef.tbCover_top__DOT__ex_mem_aluResult 
                ^ vlSelfRef.tbCover_top__DOT____Vtogcov__ex_mem_aluResult))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 1092, vlSelfRef.tbCover_top__DOT__ex_mem_aluResult, vlSelfRef.tbCover_top__DOT____Vtogcov__ex_mem_aluResult);
        vlSelfRef.tbCover_top__DOT____Vtogcov__ex_mem_aluResult 
            = vlSelfRef.tbCover_top__DOT__ex_mem_aluResult;
    }
    if ((0U != ((IData)(vlSelfRef.tbCover_top__DOT__ex_mem_regDst) 
                ^ (IData)(vlSelfRef.tbCover_top__DOT____Vtogcov__ex_mem_regDst)))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSelf->__Vcoverage + 1064, vlSelfRef.tbCover_top__DOT__ex_mem_regDst, vlSelfRef.tbCover_top__DOT____Vtogcov__ex_mem_regDst);
        vlSelfRef.tbCover_top__DOT____Vtogcov__ex_mem_regDst 
            = vlSelfRef.tbCover_top__DOT__ex_mem_regDst;
    }
    if ((0U != ((IData)(vlSelfRef.tbCover_top__DOT__ex_mem_wbCtrl) 
                ^ (IData)(vlSelfRef.tbCover_top__DOT____Vtogcov__ex_mem_wbCtrl)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 1082, vlSelfRef.tbCover_top__DOT__ex_mem_wbCtrl, vlSelfRef.tbCover_top__DOT____Vtogcov__ex_mem_wbCtrl);
        vlSelfRef.tbCover_top__DOT____Vtogcov__ex_mem_wbCtrl 
            = vlSelfRef.tbCover_top__DOT__ex_mem_wbCtrl;
    }
    if ((1U & (((IData)(vlSelfRef.tbCover_top__DOT__ex_mem_wbCtrl) 
                >> 1U) ^ (IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT____Vtogcov__ex_mem_RegWrite)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1593, 
                               ((IData)(vlSelfRef.tbCover_top__DOT__ex_mem_wbCtrl) 
                                >> 1U), vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT____Vtogcov__ex_mem_RegWrite);
        vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT____Vtogcov__ex_mem_RegWrite 
            = (1U & ((IData)(vlSelfRef.tbCover_top__DOT__ex_mem_wbCtrl) 
                     >> 1U));
    }
    if ((((IData)(vlSelfRef.tbCover_top__DOT__rst) 
          | (IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__if_top__DOT__PCSrc)) 
         | (IData)(vlSelfRef.tbCover_top__DOT__id_PCJmp))) {
        ++(vlSelf->__Vcoverage[1576]);
        vlSelfRef.tbCover_top__DOT__id_ex_regT = 0U;
        vlSelfRef.tbCover_top__DOT__id_ex_regD = 0U;
        vlSelfRef.tbCover_top__DOT__id_ex_regS = 0U;
        vlSelfRef.tbCover_top__DOT__id_ex_exCtrl = 0U;
        vlSelfRef.tbCover_top__DOT__id_ex_memCtrl = 0U;
        vlSelfRef.tbCover_top__DOT__id_ex_wbCtrl = 0U;
        vlSelfRef.tbCover_top__DOT__id_ex_pcIncr = 0U;
        vlSelfRef.tbCover_top__DOT__id_ex_sgnExt = 0U;
        vlSelfRef.tbCover_top__DOT__id_ex_rdDataOne = 0U;
        vlSelfRef.tbCover_top__DOT__id_ex_rdDataTwo = 0U;
        vlSelfRef.tbCover_top__DOT__id_ex_shamt_out = 0U;
    } else {
        ++(vlSelf->__Vcoverage[1577]);
        vlSelfRef.tbCover_top__DOT__id_ex_regT = (0x0000001fU 
                                                  & (vlSelfRef.tbCover_top__DOT__if_id_inst 
                                                     >> 0x00000010U));
        vlSelfRef.tbCover_top__DOT__id_ex_regD = vlSelfRef.tbCover_top__DOT__id_regD;
        vlSelfRef.tbCover_top__DOT__id_ex_regS = (0x0000001fU 
                                                  & (vlSelfRef.tbCover_top__DOT__if_id_inst 
                                                     >> 0x00000015U));
        vlSelfRef.tbCover_top__DOT__id_ex_exCtrl = vlSelfRef.tbCover_top__DOT__id_exCtrl;
        vlSelfRef.tbCover_top__DOT__id_ex_memCtrl = vlSelfRef.tbCover_top__DOT__id_memCtrl;
        vlSelfRef.tbCover_top__DOT__id_ex_wbCtrl = vlSelfRef.tbCover_top__DOT__id_wbCtrl;
        vlSelfRef.tbCover_top__DOT__id_ex_pcIncr = vlSelfRef.tbCover_top__DOT__if_id_pcIncr;
        vlSelfRef.tbCover_top__DOT__id_ex_sgnExt = vlSelfRef.tbCover_top__DOT__id_sgnExt;
        vlSelfRef.tbCover_top__DOT__id_ex_rdDataOne 
            = vlSelfRef.tbCover_top__DOT__id_rdDataOne;
        vlSelfRef.tbCover_top__DOT__id_ex_rdDataTwo 
            = vlSelfRef.tbCover_top__DOT__id_rdDataTwo;
        vlSelfRef.tbCover_top__DOT__id_ex_shamt_out 
            = (0x0000001fU & (vlSelfRef.tbCover_top__DOT__if_id_inst 
                              >> 6U));
    }
    if (vlSelfRef.tbCover_top__DOT__id_PCJmp) {
        ++(vlSelf->__Vcoverage[1578]);
    }
    if (vlSelfRef.tbCover_top__DOT__top_00__DOT__if_top__DOT__PCSrc) {
        ++(vlSelf->__Vcoverage[1579]);
    }
    if (vlSelfRef.tbCover_top__DOT__rst) {
        ++(vlSelf->__Vcoverage[1580]);
    }
    if ((1U & (((~ (IData)(vlSelfRef.tbCover_top__DOT__rst)) 
                & (~ (IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__if_top__DOT__PCSrc))) 
               & (~ (IData)(vlSelfRef.tbCover_top__DOT__id_PCJmp))))) {
        ++(vlSelf->__Vcoverage[1581]);
    }
    ++(vlSelf->__Vcoverage[1582]);
    vlSelfRef.tbCover_top__DOT__top_00__DOT__if_top__DOT__PCSrc 
        = (((~ (IData)(vlSelfRef.tbCover_top__DOT__ex_mem_zeroFlag)) 
            & (0x0cU == (0x0cU & (IData)(vlSelfRef.tbCover_top__DOT__ex_mem_memCtrl)))) 
           | ((IData)(vlSelfRef.tbCover_top__DOT__ex_mem_zeroFlag) 
              & (4U == (0x0cU & (IData)(vlSelfRef.tbCover_top__DOT__ex_mem_memCtrl)))));
    vlSelfRef.tbCover_top__DOT__if_id_pcIncr = vlSelfRef.__Vdly__tbCover_top__DOT__if_id_pcIncr;
    vlSelfRef.tbCover_top__DOT__if_id_inst = vlSelfRef.__Vdly__tbCover_top__DOT__if_id_inst;
    if ((0U != ((IData)(vlSelfRef.tbCover_top__DOT__id_ex_wbCtrl) 
                ^ (IData)(vlSelfRef.tbCover_top__DOT____Vtogcov__id_ex_wbCtrl)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 658, vlSelfRef.tbCover_top__DOT__id_ex_wbCtrl, vlSelfRef.tbCover_top__DOT____Vtogcov__id_ex_wbCtrl);
        vlSelfRef.tbCover_top__DOT____Vtogcov__id_ex_wbCtrl 
            = vlSelfRef.tbCover_top__DOT__id_ex_wbCtrl;
    }
    if (((IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__if_top__DOT__PCSrc) 
         ^ (IData)(vlSelfRef.tbCover_top__DOT____Vtogcov__mem_branchFlag))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1284, vlSelfRef.tbCover_top__DOT__top_00__DOT__if_top__DOT__PCSrc, vlSelfRef.tbCover_top__DOT____Vtogcov__mem_branchFlag);
        vlSelfRef.tbCover_top__DOT____Vtogcov__mem_branchFlag 
            = vlSelfRef.tbCover_top__DOT__top_00__DOT__if_top__DOT__PCSrc;
    }
    if ((0U != (vlSelfRef.tbCover_top__DOT__id_ex_pcIncr 
                ^ vlSelfRef.tbCover_top__DOT____Vtogcov__id_ex_pcIncr))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 666, vlSelfRef.tbCover_top__DOT__id_ex_pcIncr, vlSelfRef.tbCover_top__DOT____Vtogcov__id_ex_pcIncr);
        vlSelfRef.tbCover_top__DOT____Vtogcov__id_ex_pcIncr 
            = vlSelfRef.tbCover_top__DOT__id_ex_pcIncr;
    }
    if ((0U != ((IData)(vlSelfRef.tbCover_top__DOT__id_ex_regD) 
                ^ (IData)(vlSelfRef.tbCover_top__DOT____Vtogcov__id_ex_regD)))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSelf->__Vcoverage + 610, vlSelfRef.tbCover_top__DOT__id_ex_regD, vlSelfRef.tbCover_top__DOT____Vtogcov__id_ex_regD);
        vlSelfRef.tbCover_top__DOT____Vtogcov__id_ex_regD 
            = vlSelfRef.tbCover_top__DOT__id_ex_regD;
    }
    if ((0U != ((IData)(vlSelfRef.tbCover_top__DOT__id_ex_shamt_out) 
                ^ (IData)(vlSelfRef.tbCover_top__DOT____Vtogcov__id_ex_shamt_out)))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSelf->__Vcoverage + 630, vlSelfRef.tbCover_top__DOT__id_ex_shamt_out, vlSelfRef.tbCover_top__DOT____Vtogcov__id_ex_shamt_out);
        vlSelfRef.tbCover_top__DOT____Vtogcov__id_ex_shamt_out 
            = vlSelfRef.tbCover_top__DOT__id_ex_shamt_out;
    }
    if ((0U != (vlSelfRef.tbCover_top__DOT__id_ex_rdDataOne 
                ^ vlSelfRef.tbCover_top__DOT____Vtogcov__id_ex_rdDataOne))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 794, vlSelfRef.tbCover_top__DOT__id_ex_rdDataOne, vlSelfRef.tbCover_top__DOT____Vtogcov__id_ex_rdDataOne);
        vlSelfRef.tbCover_top__DOT____Vtogcov__id_ex_rdDataOne 
            = vlSelfRef.tbCover_top__DOT__id_ex_rdDataOne;
    }
    if ((0U != (vlSelfRef.tbCover_top__DOT__if_id_pcIncr 
                ^ vlSelfRef.tbCover_top__DOT____Vtogcov__if_id_pcIncr))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 144, vlSelfRef.tbCover_top__DOT__if_id_pcIncr, vlSelfRef.tbCover_top__DOT____Vtogcov__if_id_pcIncr);
        vlSelfRef.tbCover_top__DOT____Vtogcov__if_id_pcIncr 
            = vlSelfRef.tbCover_top__DOT__if_id_pcIncr;
    }
    if ((0U != (vlSelfRef.tbCover_top__DOT__id_ex_rdDataTwo 
                ^ vlSelfRef.tbCover_top__DOT____Vtogcov__id_ex_rdDataTwo))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 858, vlSelfRef.tbCover_top__DOT__id_ex_rdDataTwo, vlSelfRef.tbCover_top__DOT____Vtogcov__id_ex_rdDataTwo);
        vlSelfRef.tbCover_top__DOT____Vtogcov__id_ex_rdDataTwo 
            = vlSelfRef.tbCover_top__DOT__id_ex_rdDataTwo;
    }
    if ((0U != (vlSelfRef.tbCover_top__DOT__id_ex_sgnExt 
                ^ vlSelfRef.tbCover_top__DOT____Vtogcov__id_ex_sgnExt))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 730, vlSelfRef.tbCover_top__DOT__id_ex_sgnExt, vlSelfRef.tbCover_top__DOT____Vtogcov__id_ex_sgnExt);
        vlSelfRef.tbCover_top__DOT____Vtogcov__id_ex_sgnExt 
            = vlSelfRef.tbCover_top__DOT__id_ex_sgnExt;
    }
    vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__pc_slt_add 
        = (vlSelfRef.tbCover_top__DOT__id_ex_pcIncr 
           + (vlSelfRef.tbCover_top__DOT__id_ex_sgnExt 
              << 2U));
    if ((0U != ((IData)(vlSelfRef.tbCover_top__DOT__id_ex_exCtrl) 
                ^ (IData)(vlSelfRef.tbCover_top__DOT____Vtogcov__id_ex_exCtrl)))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSelf->__Vcoverage + 640, vlSelfRef.tbCover_top__DOT__id_ex_exCtrl, vlSelfRef.tbCover_top__DOT____Vtogcov__id_ex_exCtrl);
        vlSelfRef.tbCover_top__DOT____Vtogcov__id_ex_exCtrl 
            = vlSelfRef.tbCover_top__DOT__id_ex_exCtrl;
    }
    if ((0x00000010U & (IData)(vlSelfRef.tbCover_top__DOT__id_ex_exCtrl))) {
        if ((4U & (IData)(vlSelfRef.tbCover_top__DOT__id_ex_exCtrl))) {
            if ((2U & (IData)(vlSelfRef.tbCover_top__DOT__id_ex_exCtrl))) {
                vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl = 0U;
                ++(vlSelf->__Vcoverage[1779]);
            } else {
                vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl = 9U;
                ++(vlSelf->__Vcoverage[1778]);
            }
        } else if ((2U & (IData)(vlSelfRef.tbCover_top__DOT__id_ex_exCtrl))) {
            vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl = 7U;
            ++(vlSelf->__Vcoverage[1777]);
        } else {
            vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl = 1U;
            ++(vlSelf->__Vcoverage[1776]);
        }
    } else if ((4U & (IData)(vlSelfRef.tbCover_top__DOT__id_ex_exCtrl))) {
        if ((2U & (IData)(vlSelfRef.tbCover_top__DOT__id_ex_exCtrl))) {
            vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl = 0U;
            ++(vlSelf->__Vcoverage[1775]);
        } else {
            if ((0x20U == (0x0000003fU & vlSelfRef.tbCover_top__DOT__id_ex_sgnExt))) {
                vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl = 2U;
                ++(vlSelf->__Vcoverage[1773]);
            } else if ((0x22U == (0x0000003fU & vlSelfRef.tbCover_top__DOT__id_ex_sgnExt))) {
                vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl = 6U;
                ++(vlSelf->__Vcoverage[1772]);
            } else if ((0x24U == (0x0000003fU & vlSelfRef.tbCover_top__DOT__id_ex_sgnExt))) {
                vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl = 0U;
                ++(vlSelf->__Vcoverage[1771]);
            } else if ((0x2aU == (0x0000003fU & vlSelfRef.tbCover_top__DOT__id_ex_sgnExt))) {
                vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl = 7U;
                ++(vlSelf->__Vcoverage[1770]);
            } else if ((0x21U == (0x0000003fU & vlSelfRef.tbCover_top__DOT__id_ex_sgnExt))) {
                vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl = 3U;
                ++(vlSelf->__Vcoverage[1769]);
            } else if ((0x23U == (0x0000003fU & vlSelfRef.tbCover_top__DOT__id_ex_sgnExt))) {
                vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl = 8U;
                ++(vlSelf->__Vcoverage[1768]);
            } else if ((0x18U == (0x0000003fU & vlSelfRef.tbCover_top__DOT__id_ex_sgnExt))) {
                vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl = 0x0fU;
                ++(vlSelf->__Vcoverage[1767]);
            } else if ((0x27U == (0x0000003fU & vlSelfRef.tbCover_top__DOT__id_ex_sgnExt))) {
                vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl = 0x0cU;
                ++(vlSelf->__Vcoverage[1766]);
            } else if ((0x25U == (0x0000003fU & vlSelfRef.tbCover_top__DOT__id_ex_sgnExt))) {
                vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl = 1U;
                ++(vlSelf->__Vcoverage[1765]);
            } else if ((0x2aU == (0x0000003fU & vlSelfRef.tbCover_top__DOT__id_ex_sgnExt))) {
                vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl = 7U;
                ++(vlSelf->__Vcoverage[1764]);
            } else if ((0x2bU == (0x0000003fU & vlSelfRef.tbCover_top__DOT__id_ex_sgnExt))) {
                vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl = 9U;
                ++(vlSelf->__Vcoverage[1763]);
            } else if ((0U == (0x0000003fU & vlSelfRef.tbCover_top__DOT__id_ex_sgnExt))) {
                vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl = 0x0eU;
                ++(vlSelf->__Vcoverage[1762]);
            } else if ((2U == (0x0000003fU & vlSelfRef.tbCover_top__DOT__id_ex_sgnExt))) {
                vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl = 0x0bU;
                ++(vlSelf->__Vcoverage[1761]);
            } else if ((0x19U == (0x0000003fU & vlSelfRef.tbCover_top__DOT__id_ex_sgnExt))) {
                vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl = 0x0dU;
                ++(vlSelf->__Vcoverage[1759]);
            } else {
                vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl = 0U;
                ++(vlSelf->__Vcoverage[1760]);
            }
            ++(vlSelf->__Vcoverage[1774]);
        }
    } else if ((2U & (IData)(vlSelfRef.tbCover_top__DOT__id_ex_exCtrl))) {
        vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl = 6U;
        ++(vlSelf->__Vcoverage[1758]);
    } else {
        vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl = 2U;
        ++(vlSelf->__Vcoverage[1757]);
    }
    ++(vlSelf->__Vcoverage[1780]);
    if ((0U != ((IData)(vlSelfRef.tbCover_top__DOT__id_ex_regS) 
                ^ (IData)(vlSelfRef.tbCover_top__DOT____Vtogcov__id_ex_regS)))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSelf->__Vcoverage + 620, vlSelfRef.tbCover_top__DOT__id_ex_regS, vlSelfRef.tbCover_top__DOT____Vtogcov__id_ex_regS);
        vlSelfRef.tbCover_top__DOT____Vtogcov__id_ex_regS 
            = vlSelfRef.tbCover_top__DOT__id_ex_regS;
    }
    if ((0U != ((IData)(vlSelfRef.tbCover_top__DOT__id_ex_memCtrl) 
                ^ (IData)(vlSelfRef.tbCover_top__DOT____Vtogcov__id_ex_memCtrl)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 650, vlSelfRef.tbCover_top__DOT__id_ex_memCtrl, vlSelfRef.tbCover_top__DOT____Vtogcov__id_ex_memCtrl);
        vlSelfRef.tbCover_top__DOT____Vtogcov__id_ex_memCtrl 
            = vlSelfRef.tbCover_top__DOT__id_ex_memCtrl;
    }
    if ((1U & ((IData)(vlSelfRef.tbCover_top__DOT__id_ex_memCtrl) 
               ^ (IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT____Vtogcov__id_ex_MemRead)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1931, vlSelfRef.tbCover_top__DOT__id_ex_memCtrl, vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT____Vtogcov__id_ex_MemRead);
        vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT____Vtogcov__id_ex_MemRead 
            = (1U & (IData)(vlSelfRef.tbCover_top__DOT__id_ex_memCtrl));
    }
    if ((0U != ((IData)(vlSelfRef.tbCover_top__DOT__id_ex_regT) 
                ^ (IData)(vlSelfRef.tbCover_top__DOT____Vtogcov__id_ex_regT)))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSelf->__Vcoverage + 600, vlSelfRef.tbCover_top__DOT__id_ex_regT, vlSelfRef.tbCover_top__DOT____Vtogcov__id_ex_regT);
        vlSelfRef.tbCover_top__DOT____Vtogcov__id_ex_regT 
            = vlSelfRef.tbCover_top__DOT__id_ex_regT;
    }
    if ((8U & (IData)(vlSelfRef.tbCover_top__DOT__id_ex_exCtrl))) {
        ++(vlSelf->__Vcoverage[1605]);
        vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT____VlemCond_0 
            = vlSelfRef.tbCover_top__DOT__id_ex_regD;
    } else {
        ++(vlSelf->__Vcoverage[1606]);
        vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT____VlemCond_0 
            = vlSelfRef.tbCover_top__DOT__id_ex_regT;
    }
    vlSelfRef.tbCover_top__DOT__ex_regDst = vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT____VlemCond_0;
    if ((8U & (IData)(vlSelfRef.tbCover_top__DOT__id_ex_exCtrl))) {
        ++(vlSelf->__Vcoverage[1603]);
    }
    if ((1U & (~ ((IData)(vlSelfRef.tbCover_top__DOT__id_ex_exCtrl) 
                  >> 3U)))) {
        ++(vlSelf->__Vcoverage[1604]);
    }
    vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__forwardA = 0U;
    vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__forwardB = 0U;
    if (((((IData)(vlSelfRef.tbCover_top__DOT__ex_mem_wbCtrl) 
           >> 1U) & (0U != (IData)(vlSelfRef.tbCover_top__DOT__ex_mem_regDst))) 
         & ((IData)(vlSelfRef.tbCover_top__DOT__ex_mem_regDst) 
            == (IData)(vlSelfRef.tbCover_top__DOT__id_ex_regS)))) {
        vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__forwardA = 2U;
        ++(vlSelf->__Vcoverage[1880]);
    } else {
        ++(vlSelf->__Vcoverage[1881]);
    }
    if ((((((IData)(vlSelfRef.tbCover_top__DOT__mem_wb_wbCtrl) 
            >> 1U) & (0U != (IData)(vlSelfRef.tbCover_top__DOT__mem_wb_regDst))) 
          & (~ ((((IData)(vlSelfRef.tbCover_top__DOT__ex_mem_wbCtrl) 
                  >> 1U) & (0U != (IData)(vlSelfRef.tbCover_top__DOT__ex_mem_regDst))) 
                & ((IData)(vlSelfRef.tbCover_top__DOT__ex_mem_regDst) 
                   == (IData)(vlSelfRef.tbCover_top__DOT__id_ex_regS))))) 
         & ((IData)(vlSelfRef.tbCover_top__DOT__mem_wb_regDst) 
            == (IData)(vlSelfRef.tbCover_top__DOT__id_ex_regS)))) {
        vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__forwardA = 1U;
        ++(vlSelf->__Vcoverage[1886]);
    } else {
        ++(vlSelf->__Vcoverage[1887]);
    }
    if (((((IData)(vlSelfRef.tbCover_top__DOT__ex_mem_wbCtrl) 
           >> 1U) & (0U != (IData)(vlSelfRef.tbCover_top__DOT__ex_mem_regDst))) 
         & ((IData)(vlSelfRef.tbCover_top__DOT__ex_mem_regDst) 
            == (IData)(vlSelfRef.tbCover_top__DOT__id_ex_regT)))) {
        vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__forwardB = 2U;
        ++(vlSelf->__Vcoverage[1895]);
    } else {
        ++(vlSelf->__Vcoverage[1896]);
    }
    if ((((((IData)(vlSelfRef.tbCover_top__DOT__mem_wb_wbCtrl) 
            >> 1U) & (0U != (IData)(vlSelfRef.tbCover_top__DOT__mem_wb_regDst))) 
          & (~ ((((IData)(vlSelfRef.tbCover_top__DOT__ex_mem_wbCtrl) 
                  >> 1U) & (0U != (IData)(vlSelfRef.tbCover_top__DOT__ex_mem_regDst))) 
                & ((IData)(vlSelfRef.tbCover_top__DOT__ex_mem_regDst) 
                   == (IData)(vlSelfRef.tbCover_top__DOT__id_ex_regT))))) 
         & ((IData)(vlSelfRef.tbCover_top__DOT__mem_wb_regDst) 
            == (IData)(vlSelfRef.tbCover_top__DOT__id_ex_regT)))) {
        vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__forwardB = 1U;
        ++(vlSelf->__Vcoverage[1901]);
    } else {
        ++(vlSelf->__Vcoverage[1902]);
    }
    if (((((IData)(vlSelfRef.tbCover_top__DOT__ex_mem_wbCtrl) 
           >> 1U) & (0U != (IData)(vlSelfRef.tbCover_top__DOT__ex_mem_regDst))) 
         & ((IData)(vlSelfRef.tbCover_top__DOT__ex_mem_regDst) 
            == (IData)(vlSelfRef.tbCover_top__DOT__id_ex_regS)))) {
        ++(vlSelf->__Vcoverage[1882]);
    }
    if (((IData)(vlSelfRef.tbCover_top__DOT__ex_mem_regDst) 
         != (IData)(vlSelfRef.tbCover_top__DOT__id_ex_regS))) {
        ++(vlSelf->__Vcoverage[1883]);
    }
    if ((0U == (IData)(vlSelfRef.tbCover_top__DOT__ex_mem_regDst))) {
        ++(vlSelf->__Vcoverage[1884]);
    }
    if ((1U & (~ ((IData)(vlSelfRef.tbCover_top__DOT__ex_mem_wbCtrl) 
                  >> 1U)))) {
        ++(vlSelf->__Vcoverage[1885]);
    }
    if ((((((IData)(vlSelfRef.tbCover_top__DOT__mem_wb_wbCtrl) 
            >> 1U) & (0U != (IData)(vlSelfRef.tbCover_top__DOT__mem_wb_regDst))) 
          & ((IData)(vlSelfRef.tbCover_top__DOT__ex_mem_regDst) 
             != (IData)(vlSelfRef.tbCover_top__DOT__id_ex_regS))) 
         & ((IData)(vlSelfRef.tbCover_top__DOT__mem_wb_regDst) 
            == (IData)(vlSelfRef.tbCover_top__DOT__id_ex_regS)))) {
        ++(vlSelf->__Vcoverage[1888]);
    }
    if ((((((IData)(vlSelfRef.tbCover_top__DOT__mem_wb_wbCtrl) 
            >> 1U) & (0U != (IData)(vlSelfRef.tbCover_top__DOT__mem_wb_regDst))) 
          & (0U == (IData)(vlSelfRef.tbCover_top__DOT__ex_mem_regDst))) 
         & ((IData)(vlSelfRef.tbCover_top__DOT__mem_wb_regDst) 
            == (IData)(vlSelfRef.tbCover_top__DOT__id_ex_regS)))) {
        ++(vlSelf->__Vcoverage[1889]);
    }
    if ((((((IData)(vlSelfRef.tbCover_top__DOT__mem_wb_wbCtrl) 
            >> 1U) & (0U != (IData)(vlSelfRef.tbCover_top__DOT__mem_wb_regDst))) 
          & (~ ((IData)(vlSelfRef.tbCover_top__DOT__ex_mem_wbCtrl) 
                >> 1U))) & ((IData)(vlSelfRef.tbCover_top__DOT__mem_wb_regDst) 
                            == (IData)(vlSelfRef.tbCover_top__DOT__id_ex_regS)))) {
        ++(vlSelf->__Vcoverage[1890]);
    }
    if (((IData)(vlSelfRef.tbCover_top__DOT__mem_wb_regDst) 
         != (IData)(vlSelfRef.tbCover_top__DOT__id_ex_regS))) {
        ++(vlSelf->__Vcoverage[1891]);
    }
    if (((((IData)(vlSelfRef.tbCover_top__DOT__ex_mem_wbCtrl) 
           >> 1U) & (0U != (IData)(vlSelfRef.tbCover_top__DOT__ex_mem_regDst))) 
         & ((IData)(vlSelfRef.tbCover_top__DOT__ex_mem_regDst) 
            == (IData)(vlSelfRef.tbCover_top__DOT__id_ex_regS)))) {
        ++(vlSelf->__Vcoverage[1892]);
    }
    if ((0U == (IData)(vlSelfRef.tbCover_top__DOT__mem_wb_regDst))) {
        ++(vlSelf->__Vcoverage[1893]);
    }
    if ((1U & (~ ((IData)(vlSelfRef.tbCover_top__DOT__mem_wb_wbCtrl) 
                  >> 1U)))) {
        ++(vlSelf->__Vcoverage[1894]);
    }
    if (((((IData)(vlSelfRef.tbCover_top__DOT__ex_mem_wbCtrl) 
           >> 1U) & (0U != (IData)(vlSelfRef.tbCover_top__DOT__ex_mem_regDst))) 
         & ((IData)(vlSelfRef.tbCover_top__DOT__ex_mem_regDst) 
            == (IData)(vlSelfRef.tbCover_top__DOT__id_ex_regT)))) {
        ++(vlSelf->__Vcoverage[1897]);
    }
    if (((IData)(vlSelfRef.tbCover_top__DOT__ex_mem_regDst) 
         != (IData)(vlSelfRef.tbCover_top__DOT__id_ex_regT))) {
        ++(vlSelf->__Vcoverage[1898]);
    }
    if ((0U == (IData)(vlSelfRef.tbCover_top__DOT__ex_mem_regDst))) {
        ++(vlSelf->__Vcoverage[1899]);
    }
    if ((1U & (~ ((IData)(vlSelfRef.tbCover_top__DOT__ex_mem_wbCtrl) 
                  >> 1U)))) {
        ++(vlSelf->__Vcoverage[1900]);
    }
    if ((((((IData)(vlSelfRef.tbCover_top__DOT__mem_wb_wbCtrl) 
            >> 1U) & (0U != (IData)(vlSelfRef.tbCover_top__DOT__mem_wb_regDst))) 
          & ((IData)(vlSelfRef.tbCover_top__DOT__ex_mem_regDst) 
             != (IData)(vlSelfRef.tbCover_top__DOT__id_ex_regT))) 
         & ((IData)(vlSelfRef.tbCover_top__DOT__mem_wb_regDst) 
            == (IData)(vlSelfRef.tbCover_top__DOT__id_ex_regT)))) {
        ++(vlSelf->__Vcoverage[1903]);
    }
    if ((((((IData)(vlSelfRef.tbCover_top__DOT__mem_wb_wbCtrl) 
            >> 1U) & (0U != (IData)(vlSelfRef.tbCover_top__DOT__mem_wb_regDst))) 
          & (0U == (IData)(vlSelfRef.tbCover_top__DOT__ex_mem_regDst))) 
         & ((IData)(vlSelfRef.tbCover_top__DOT__mem_wb_regDst) 
            == (IData)(vlSelfRef.tbCover_top__DOT__id_ex_regT)))) {
        ++(vlSelf->__Vcoverage[1904]);
    }
    if ((((((IData)(vlSelfRef.tbCover_top__DOT__mem_wb_wbCtrl) 
            >> 1U) & (0U != (IData)(vlSelfRef.tbCover_top__DOT__mem_wb_regDst))) 
          & (~ ((IData)(vlSelfRef.tbCover_top__DOT__ex_mem_wbCtrl) 
                >> 1U))) & ((IData)(vlSelfRef.tbCover_top__DOT__mem_wb_regDst) 
                            == (IData)(vlSelfRef.tbCover_top__DOT__id_ex_regT)))) {
        ++(vlSelf->__Vcoverage[1905]);
    }
    if (((IData)(vlSelfRef.tbCover_top__DOT__mem_wb_regDst) 
         != (IData)(vlSelfRef.tbCover_top__DOT__id_ex_regT))) {
        ++(vlSelf->__Vcoverage[1906]);
    }
    if (((((IData)(vlSelfRef.tbCover_top__DOT__ex_mem_wbCtrl) 
           >> 1U) & (0U != (IData)(vlSelfRef.tbCover_top__DOT__ex_mem_regDst))) 
         & ((IData)(vlSelfRef.tbCover_top__DOT__ex_mem_regDst) 
            == (IData)(vlSelfRef.tbCover_top__DOT__id_ex_regT)))) {
        ++(vlSelf->__Vcoverage[1907]);
    }
    if ((0U == (IData)(vlSelfRef.tbCover_top__DOT__mem_wb_regDst))) {
        ++(vlSelf->__Vcoverage[1908]);
    }
    if ((1U & (~ ((IData)(vlSelfRef.tbCover_top__DOT__mem_wb_wbCtrl) 
                  >> 1U)))) {
        ++(vlSelf->__Vcoverage[1909]);
    }
    ++(vlSelf->__Vcoverage[1910]);
    if ((IData)((8U == (0xfc00003fU & vlSelfRef.tbCover_top__DOT__if_id_inst)))) {
        ++(vlSelf->__Vcoverage[1963]);
    }
    if ((8U != (0x0000003fU & vlSelfRef.tbCover_top__DOT__if_id_inst))) {
        ++(vlSelf->__Vcoverage[1964]);
    }
    if ((0U != (vlSelfRef.tbCover_top__DOT__if_id_inst 
                >> 0x1aU))) {
        ++(vlSelf->__Vcoverage[1965]);
    }
    if ((3U == (vlSelfRef.tbCover_top__DOT__if_id_inst 
                >> 0x1aU))) {
        ++(vlSelf->__Vcoverage[1968]);
    }
    if ((2U == (vlSelfRef.tbCover_top__DOT__if_id_inst 
                >> 0x1aU))) {
        ++(vlSelf->__Vcoverage[1969]);
    }
    if (((2U != (vlSelfRef.tbCover_top__DOT__if_id_inst 
                 >> 0x1aU)) & (3U != (vlSelfRef.tbCover_top__DOT__if_id_inst 
                                      >> 0x1aU)))) {
        ++(vlSelf->__Vcoverage[1970]);
    }
    if ((0U != (vlSelfRef.tbCover_top__DOT__if_id_inst 
                ^ vlSelfRef.tbCover_top__DOT____Vtogcov__if_id_inst))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 208, vlSelfRef.tbCover_top__DOT__if_id_inst, vlSelfRef.tbCover_top__DOT____Vtogcov__if_id_inst);
        vlSelfRef.tbCover_top__DOT____Vtogcov__if_id_inst 
            = vlSelfRef.tbCover_top__DOT__if_id_inst;
    }
    if ((0U != (0x0000001fU & ((vlSelfRef.tbCover_top__DOT__if_id_inst 
                                >> 0x00000010U) ^ (IData)(vlSelfRef.tbCover_top__DOT____Vtogcov__id_regT))))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSelf->__Vcoverage + 272, 
                               (vlSelfRef.tbCover_top__DOT__if_id_inst 
                                >> 0x00000010U), vlSelfRef.tbCover_top__DOT____Vtogcov__id_regT);
        vlSelfRef.tbCover_top__DOT____Vtogcov__id_regT 
            = (0x0000001fU & (vlSelfRef.tbCover_top__DOT__if_id_inst 
                              >> 0x00000010U));
    }
    if ((0U != (0x0000001fU & ((vlSelfRef.tbCover_top__DOT__if_id_inst 
                                >> 0x00000015U) ^ (IData)(vlSelfRef.tbCover_top__DOT____Vtogcov__id_regS))))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSelf->__Vcoverage + 292, 
                               (vlSelfRef.tbCover_top__DOT__if_id_inst 
                                >> 0x00000015U), vlSelfRef.tbCover_top__DOT____Vtogcov__id_regS);
        vlSelfRef.tbCover_top__DOT____Vtogcov__id_regS 
            = (0x0000001fU & (vlSelfRef.tbCover_top__DOT__if_id_inst 
                              >> 0x00000015U));
    }
    if ((0U != (0x0000001fU & ((vlSelfRef.tbCover_top__DOT__if_id_inst 
                                >> 6U) ^ (IData)(vlSelfRef.tbCover_top__DOT____Vtogcov__id_shamt_out))))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSelf->__Vcoverage + 586, 
                               (vlSelfRef.tbCover_top__DOT__if_id_inst 
                                >> 6U), vlSelfRef.tbCover_top__DOT____Vtogcov__id_shamt_out);
        vlSelfRef.tbCover_top__DOT____Vtogcov__id_shamt_out 
            = (0x0000001fU & (vlSelfRef.tbCover_top__DOT__if_id_inst 
                              >> 6U));
    }
    vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__is_jr 
        = (IData)((8U == (0xfc00003fU & vlSelfRef.tbCover_top__DOT__if_id_inst)));
    vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__is_j_type 
        = ((2U == (vlSelfRef.tbCover_top__DOT__if_id_inst 
                   >> 0x0000001aU)) | (3U == (vlSelfRef.tbCover_top__DOT__if_id_inst 
                                              >> 0x0000001aU)));
    if (((IData)(vlSelfRef.tbCover_top__DOT__id_ex_memCtrl) 
         & (((IData)(vlSelfRef.tbCover_top__DOT__id_ex_regT) 
             == (0x0000001fU & (vlSelfRef.tbCover_top__DOT__if_id_inst 
                                >> 0x00000015U))) | 
            ((IData)(vlSelfRef.tbCover_top__DOT__id_ex_regT) 
             == (0x0000001fU & (vlSelfRef.tbCover_top__DOT__if_id_inst 
                                >> 0x00000010U)))))) {
        vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__flushCtrlSignals = 1U;
        vlSelfRef.tbCover_top__DOT__PCWrite = 1U;
        vlSelfRef.tbCover_top__DOT__if_id_write = 1U;
        ++(vlSelf->__Vcoverage[2003]);
    } else {
        vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__flushCtrlSignals = 0U;
        vlSelfRef.tbCover_top__DOT__PCWrite = 0U;
        vlSelfRef.tbCover_top__DOT__if_id_write = 0U;
        ++(vlSelf->__Vcoverage[2004]);
    }
    if (((IData)(vlSelfRef.tbCover_top__DOT__id_ex_memCtrl) 
         & ((IData)(vlSelfRef.tbCover_top__DOT__id_ex_regT) 
            == (0x0000001fU & (vlSelfRef.tbCover_top__DOT__if_id_inst 
                               >> 0x00000010U))))) {
        ++(vlSelf->__Vcoverage[2005]);
    }
    if (((IData)(vlSelfRef.tbCover_top__DOT__id_ex_memCtrl) 
         & ((IData)(vlSelfRef.tbCover_top__DOT__id_ex_regT) 
            == (0x0000001fU & (vlSelfRef.tbCover_top__DOT__if_id_inst 
                               >> 0x00000015U))))) {
        ++(vlSelf->__Vcoverage[2006]);
    }
    if ((((IData)(vlSelfRef.tbCover_top__DOT__id_ex_regT) 
          != (0x0000001fU & (vlSelfRef.tbCover_top__DOT__if_id_inst 
                             >> 0x00000015U))) & ((IData)(vlSelfRef.tbCover_top__DOT__id_ex_regT) 
                                                  != 
                                                  (0x0000001fU 
                                                   & (vlSelfRef.tbCover_top__DOT__if_id_inst 
                                                      >> 0x00000010U))))) {
        ++(vlSelf->__Vcoverage[2007]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tbCover_top__DOT__id_ex_memCtrl)))) {
        ++(vlSelf->__Vcoverage[2008]);
    }
    ++(vlSelf->__Vcoverage[2009]);
    if ((0U != (vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__pc_slt_add 
                ^ vlSelfRef.tbCover_top__DOT____Vtogcov__ex_pcAdd))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 1000, vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__pc_slt_add, vlSelfRef.tbCover_top__DOT____Vtogcov__ex_pcAdd);
        vlSelfRef.tbCover_top__DOT____Vtogcov__ex_pcAdd 
            = vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__pc_slt_add;
    }
    if ((0U != ((IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl) 
                ^ (IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT____Vtogcov__alu_ctrl)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 1607, vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl, vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT____Vtogcov__alu_ctrl);
        vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT____Vtogcov__alu_ctrl 
            = vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl;
    }
    if ((0U != ((IData)(vlSelfRef.tbCover_top__DOT__ex_regDst) 
                ^ (IData)(vlSelfRef.tbCover_top__DOT____Vtogcov__ex_regDst)))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSelf->__Vcoverage + 922, vlSelfRef.tbCover_top__DOT__ex_regDst, vlSelfRef.tbCover_top__DOT____Vtogcov__ex_regDst);
        vlSelfRef.tbCover_top__DOT____Vtogcov__ex_regDst 
            = vlSelfRef.tbCover_top__DOT__ex_regDst;
    }
    if ((0U != ((IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__forwardA) 
                ^ (IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT____Vtogcov__forwardA)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 1595, vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__forwardA, vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT____Vtogcov__forwardA);
        vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT____Vtogcov__forwardA 
            = vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__forwardA;
    }
    if ((0U == (IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__forwardA))) {
        vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_in_a 
            = vlSelfRef.tbCover_top__DOT__id_ex_rdDataOne;
        ++(vlSelf->__Vcoverage[1743]);
    } else if ((2U == (IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__forwardA))) {
        vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_in_a 
            = vlSelfRef.tbCover_top__DOT__ex_mem_aluResult;
        ++(vlSelf->__Vcoverage[1744]);
    } else if ((1U == (IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__forwardA))) {
        vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_in_a 
            = vlSelfRef.tbCover_top__DOT__wb_regData;
        ++(vlSelf->__Vcoverage[1745]);
    } else {
        vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_in_a = 0U;
        ++(vlSelf->__Vcoverage[1746]);
    }
    ++(vlSelf->__Vcoverage[1747]);
    if ((0U != ((IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__forwardB) 
                ^ (IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT____Vtogcov__forwardB)))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSelf->__Vcoverage + 1599, vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__forwardB, vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT____Vtogcov__forwardB);
        vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT____Vtogcov__forwardB 
            = vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__forwardB;
    }
    if ((0U == (IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__forwardB))) {
        if ((1U & (IData)(vlSelfRef.tbCover_top__DOT__id_ex_exCtrl))) {
            ++(vlSelf->__Vcoverage[1750]);
            vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT____VlemCond_1 
                = vlSelfRef.tbCover_top__DOT__id_ex_sgnExt;
        } else {
            ++(vlSelf->__Vcoverage[1751]);
            vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT____VlemCond_1 
                = vlSelfRef.tbCover_top__DOT__id_ex_rdDataTwo;
        }
        vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b 
            = vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT____VlemCond_1;
        if ((1U & (IData)(vlSelfRef.tbCover_top__DOT__id_ex_exCtrl))) {
            ++(vlSelf->__Vcoverage[1748]);
        }
        if ((1U & (~ (IData)(vlSelfRef.tbCover_top__DOT__id_ex_exCtrl)))) {
            ++(vlSelf->__Vcoverage[1749]);
        }
        ++(vlSelf->__Vcoverage[1752]);
    } else if ((2U == (IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__forwardB))) {
        vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b 
            = vlSelfRef.tbCover_top__DOT__ex_mem_aluResult;
        ++(vlSelf->__Vcoverage[1753]);
    } else if ((1U == (IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__forwardB))) {
        vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b 
            = vlSelfRef.tbCover_top__DOT__wb_regData;
        ++(vlSelf->__Vcoverage[1754]);
    } else {
        vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b = 0U;
        ++(vlSelf->__Vcoverage[1755]);
    }
    ++(vlSelf->__Vcoverage[1756]);
    if (((IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__is_jr) 
         ^ (IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT____Vtogcov__is_jr))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1961, vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__is_jr, vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT____Vtogcov__is_jr);
        vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT____Vtogcov__is_jr 
            = vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__is_jr;
    }
    if (((IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__is_j_type) 
         ^ (IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT____Vtogcov__is_j_type))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1966, vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__is_j_type, vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT____Vtogcov__is_j_type);
        vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT____Vtogcov__is_j_type 
            = vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__is_j_type;
    }
    if (((IData)(vlSelfRef.tbCover_top__DOT__PCWrite) 
         ^ (IData)(vlSelfRef.tbCover_top__DOT____Vtogcov__PCWrite))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 598, vlSelfRef.tbCover_top__DOT__PCWrite, vlSelfRef.tbCover_top__DOT____Vtogcov__PCWrite);
        vlSelfRef.tbCover_top__DOT____Vtogcov__PCWrite 
            = vlSelfRef.tbCover_top__DOT__PCWrite;
    }
    if (((IData)(vlSelfRef.tbCover_top__DOT__if_id_write) 
         ^ (IData)(vlSelfRef.tbCover_top__DOT____Vtogcov__if_id_write))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 596, vlSelfRef.tbCover_top__DOT__if_id_write, vlSelfRef.tbCover_top__DOT____Vtogcov__if_id_write);
        vlSelfRef.tbCover_top__DOT____Vtogcov__if_id_write 
            = vlSelfRef.tbCover_top__DOT__if_id_write;
    }
    if (((IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__flushCtrlSignals) 
         ^ (IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT____Vtogcov__flushCtrlSignals))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1933, vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__flushCtrlSignals, vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT____Vtogcov__flushCtrlSignals);
        vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT____Vtogcov__flushCtrlSignals 
            = vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__flushCtrlSignals;
    }
    if ((0U != (vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_in_a 
                ^ vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT____Vtogcov__alu_in_a))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 1615, vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_in_a, vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT____Vtogcov__alu_in_a);
        vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT____Vtogcov__alu_in_a 
            = vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_in_a;
    }
    if ((0U != (vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b 
                ^ vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT____Vtogcov__alu_in_b))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 1679, vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b, vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT____Vtogcov__alu_in_b);
        vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT____Vtogcov__alu_in_b 
            = vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b;
    }
    if ((8U & (IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))) {
        if ((4U & (IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))) {
            if ((2U & (IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))) {
                if ((1U & (IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))) {
                    vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended = 0ULL;
                    vlSelfRef.tbCover_top__DOT__ex_aluResult 
                        = VL_MULS_III(32, vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_in_a, vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b);
                    vlSelfRef.tbCover_top__DOT__ex_overflowFlag = 0U;
                    ++(vlSelf->__Vcoverage[1874]);
                } else {
                    vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended = 0ULL;
                    vlSelfRef.tbCover_top__DOT__ex_aluResult 
                        = (vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b 
                           << (IData)(vlSelfRef.tbCover_top__DOT__id_ex_shamt_out));
                    vlSelfRef.tbCover_top__DOT__ex_overflowFlag = 0U;
                    ++(vlSelf->__Vcoverage[1872]);
                }
            } else if ((1U & (IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))) {
                vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended = 0ULL;
                vlSelfRef.tbCover_top__DOT__ex_aluResult 
                    = (vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_in_a 
                       * vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b);
                vlSelfRef.tbCover_top__DOT__ex_overflowFlag = 0U;
                ++(vlSelf->__Vcoverage[1875]);
            } else {
                vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended = 0ULL;
                vlSelfRef.tbCover_top__DOT__ex_aluResult 
                    = (~ (vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_in_a 
                          | vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b));
                vlSelfRef.tbCover_top__DOT__ex_overflowFlag = 0U;
                ++(vlSelf->__Vcoverage[1861]);
            }
        } else if ((2U & (IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))) {
            if ((1U & (IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))) {
                vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended = 0ULL;
                vlSelfRef.tbCover_top__DOT__ex_aluResult 
                    = (vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b 
                       >> (IData)(vlSelfRef.tbCover_top__DOT__id_ex_shamt_out));
                vlSelfRef.tbCover_top__DOT__ex_overflowFlag = 0U;
                ++(vlSelf->__Vcoverage[1873]);
            } else {
                vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended = 0ULL;
                vlSelfRef.tbCover_top__DOT__ex_aluResult = 0U;
                vlSelfRef.tbCover_top__DOT__ex_overflowFlag = 0U;
                ++(vlSelf->__Vcoverage[1878]);
            }
        } else if ((1U & (IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))) {
            vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended = 0ULL;
            if ((vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_in_a 
                 < vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b)) {
                ++(vlSelf->__Vcoverage[1869]);
                vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT____VlemCond_1 = 1U;
            } else {
                ++(vlSelf->__Vcoverage[1870]);
                vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT____VlemCond_1 = 0U;
            }
            vlSelfRef.tbCover_top__DOT__ex_overflowFlag = 0U;
            vlSelfRef.tbCover_top__DOT__ex_aluResult 
                = vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT____VlemCond_1;
            if ((vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_in_a 
                 < vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b)) {
                ++(vlSelf->__Vcoverage[1867]);
            }
            if ((vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_in_a 
                 >= vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b)) {
                ++(vlSelf->__Vcoverage[1868]);
            }
            ++(vlSelf->__Vcoverage[1871]);
        } else {
            vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended = 0ULL;
            vlSelfRef.tbCover_top__DOT__ex_aluResult 
                = (vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_in_a 
                   - vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b);
            vlSelfRef.tbCover_top__DOT__ex_overflowFlag = 0U;
            ++(vlSelf->__Vcoverage[1860]);
        }
    } else if ((4U & (IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))) {
        if ((2U & (IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))) {
            if ((1U & (IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))) {
                vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended = 0ULL;
                if (VL_LTS_III(32, vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_in_a, vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b)) {
                    ++(vlSelf->__Vcoverage[1864]);
                    vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT____VlemCond_0 = 1U;
                } else {
                    ++(vlSelf->__Vcoverage[1865]);
                    vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT____VlemCond_0 = 0U;
                }
                vlSelfRef.tbCover_top__DOT__ex_overflowFlag = 0U;
                vlSelfRef.tbCover_top__DOT__ex_aluResult 
                    = vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT____VlemCond_0;
                if (VL_LTS_III(32, vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_in_a, vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b)) {
                    ++(vlSelf->__Vcoverage[1862]);
                }
                if (VL_GTES_III(32, vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_in_a, vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b)) {
                    ++(vlSelf->__Vcoverage[1863]);
                }
                ++(vlSelf->__Vcoverage[1866]);
            } else {
                vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended 
                    = (0x00000001ffffffffULL & ((((QData)((IData)(
                                                                  (vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_in_a 
                                                                   >> 0x1fU))) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_in_a))) 
                                                - (
                                                   ((QData)((IData)(
                                                                    (vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b 
                                                                     >> 0x1fU))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b)))));
                vlSelfRef.tbCover_top__DOT__ex_aluResult 
                    = (IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended);
                vlSelfRef.tbCover_top__DOT__ex_overflowFlag 
                    = (1U & VL_REDXOR_64((0x0000000180000000ULL 
                                          & vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended)));
                if ((IData)((0x0000000100000000ULL 
                             == (0x0000000180000000ULL 
                                 & vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended)))) {
                    ++(vlSelf->__Vcoverage[1855]);
                }
                if ((IData)((0x0000000080000000ULL 
                             == (0x0000000180000000ULL 
                                 & vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended)))) {
                    ++(vlSelf->__Vcoverage[1856]);
                }
                if ((IData)((0x0000000180000000ULL 
                             == (0x0000000180000000ULL 
                                 & vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended)))) {
                    ++(vlSelf->__Vcoverage[1857]);
                }
                if ((IData)((0ULL == (0x0000000180000000ULL 
                                      & vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended)))) {
                    ++(vlSelf->__Vcoverage[1858]);
                }
                ++(vlSelf->__Vcoverage[1859]);
            }
        } else if ((1U & (IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))) {
            vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended = 0ULL;
            vlSelfRef.tbCover_top__DOT__ex_aluResult 
                = VL_DIVS_III(32, vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_in_a, vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b);
            vlSelfRef.tbCover_top__DOT__ex_overflowFlag = 0U;
            ++(vlSelf->__Vcoverage[1876]);
        } else {
            vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended = 0ULL;
            vlSelfRef.tbCover_top__DOT__ex_aluResult 
                = VL_DIV_III(32, vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_in_a, vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b);
            vlSelfRef.tbCover_top__DOT__ex_overflowFlag = 0U;
            ++(vlSelf->__Vcoverage[1877]);
        }
    } else if ((2U & (IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))) {
        if ((1U & (IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))) {
            vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended = 0ULL;
            vlSelfRef.tbCover_top__DOT__ex_aluResult 
                = (vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_in_a 
                   + vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b);
            vlSelfRef.tbCover_top__DOT__ex_overflowFlag = 0U;
            ++(vlSelf->__Vcoverage[1854]);
        } else {
            vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended 
                = (0x00000001ffffffffULL & ((((QData)((IData)(
                                                              (vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_in_a 
                                                               >> 0x1fU))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_in_a))) 
                                            + (((QData)((IData)(
                                                                (vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b 
                                                                 >> 0x1fU))) 
                                                << 0x00000020U) 
                                               | (QData)((IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b)))));
            vlSelfRef.tbCover_top__DOT__ex_aluResult 
                = (IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended);
            vlSelfRef.tbCover_top__DOT__ex_overflowFlag 
                = (1U & VL_REDXOR_64((0x0000000180000000ULL 
                                      & vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended)));
            if ((IData)((0x0000000100000000ULL == (0x0000000180000000ULL 
                                                   & vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended)))) {
                ++(vlSelf->__Vcoverage[1849]);
            }
            if ((IData)((0x0000000080000000ULL == (0x0000000180000000ULL 
                                                   & vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended)))) {
                ++(vlSelf->__Vcoverage[1850]);
            }
            if ((IData)((0x0000000180000000ULL == (0x0000000180000000ULL 
                                                   & vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended)))) {
                ++(vlSelf->__Vcoverage[1851]);
            }
            if ((IData)((0ULL == (0x0000000180000000ULL 
                                  & vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended)))) {
                ++(vlSelf->__Vcoverage[1852]);
            }
            ++(vlSelf->__Vcoverage[1853]);
        }
    } else if ((1U & (IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))) {
        vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended = 0ULL;
        vlSelfRef.tbCover_top__DOT__ex_aluResult = 
            (vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_in_a 
             | vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b);
        vlSelfRef.tbCover_top__DOT__ex_overflowFlag = 0U;
        ++(vlSelf->__Vcoverage[1848]);
    } else {
        vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended = 0ULL;
        vlSelfRef.tbCover_top__DOT__ex_aluResult = 
            (vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_in_a 
             & vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b);
        vlSelfRef.tbCover_top__DOT__ex_overflowFlag = 0U;
        ++(vlSelf->__Vcoverage[1847]);
    }
    ++(vlSelf->__Vcoverage[1879]);
    if ((0ULL != (vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended 
                  ^ vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT____Vtogcov__result_extended))) {
        VL_COV_TOGGLE_CHG_ST_Q(33, vlSelf->__Vcoverage + 1781, vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended, vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT____Vtogcov__result_extended);
        vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT____Vtogcov__result_extended 
            = vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended;
    }
    if (((IData)(vlSelfRef.tbCover_top__DOT__ex_overflowFlag) 
         ^ (IData)(vlSelfRef.tbCover_top__DOT____Vtogcov__ex_overflowFlag))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 934, vlSelfRef.tbCover_top__DOT__ex_overflowFlag, vlSelfRef.tbCover_top__DOT____Vtogcov__ex_overflowFlag);
        vlSelfRef.tbCover_top__DOT____Vtogcov__ex_overflowFlag 
            = vlSelfRef.tbCover_top__DOT__ex_overflowFlag;
    }
    if (((0U == vlSelfRef.tbCover_top__DOT__ex_aluResult) 
         ^ (IData)(vlSelfRef.tbCover_top__DOT____Vtogcov__ex_zeroFlag))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 932, 
                               (0U == vlSelfRef.tbCover_top__DOT__ex_aluResult), vlSelfRef.tbCover_top__DOT____Vtogcov__ex_zeroFlag);
        vlSelfRef.tbCover_top__DOT____Vtogcov__ex_zeroFlag 
            = (0U == vlSelfRef.tbCover_top__DOT__ex_aluResult);
    }
    if ((0U != (vlSelfRef.tbCover_top__DOT__ex_aluResult 
                ^ vlSelfRef.tbCover_top__DOT____Vtogcov__ex_aluResult))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 936, vlSelfRef.tbCover_top__DOT__ex_aluResult, vlSelfRef.tbCover_top__DOT____Vtogcov__ex_aluResult);
        vlSelfRef.tbCover_top__DOT____Vtogcov__ex_aluResult 
            = vlSelfRef.tbCover_top__DOT__ex_aluResult;
    }
}

void VtbCover_top___024root___nba_comb__TOP__2(VtbCover_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbCover_top___024root___nba_comb__TOP__2\n"); );
    VtbCover_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.tbCover_top__DOT__rst) | (IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__flushCtrlSignals))) {
        vlSelfRef.tbCover_top__DOT__id_exCtrl = 0U;
        vlSelfRef.tbCover_top__DOT__id_memCtrl = 0U;
        vlSelfRef.tbCover_top__DOT__id_wbCtrl = 0U;
        vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 0U;
        vlSelfRef.tbCover_top__DOT__id_PCJmp = 0U;
        vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
        ++(vlSelf->__Vcoverage[1997]);
    } else {
        if ((vlSelfRef.tbCover_top__DOT__if_id_inst 
             >> 0x0000001fU)) {
            if ((0x40000000U & vlSelfRef.tbCover_top__DOT__if_id_inst)) {
                if ((0x20000000U & vlSelfRef.tbCover_top__DOT__if_id_inst)) {
                    if ((0x10000000U & vlSelfRef.tbCover_top__DOT__if_id_inst)) {
                        vlSelfRef.tbCover_top__DOT__id_exCtrl = 0U;
                        vlSelfRef.tbCover_top__DOT__id_memCtrl = 0U;
                        vlSelfRef.tbCover_top__DOT__id_wbCtrl = 0U;
                        vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 1U;
                        vlSelfRef.tbCover_top__DOT__id_PCJmp = 0U;
                        vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
                        ++(vlSelf->__Vcoverage[1996]);
                    } else if ((0x08000000U & vlSelfRef.tbCover_top__DOT__if_id_inst)) {
                        vlSelfRef.tbCover_top__DOT__id_exCtrl = 0U;
                        vlSelfRef.tbCover_top__DOT__id_memCtrl = 0U;
                        vlSelfRef.tbCover_top__DOT__id_wbCtrl = 0U;
                        vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 1U;
                        vlSelfRef.tbCover_top__DOT__id_PCJmp = 0U;
                        vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
                        ++(vlSelf->__Vcoverage[1996]);
                    } else if ((0x04000000U & vlSelfRef.tbCover_top__DOT__if_id_inst)) {
                        vlSelfRef.tbCover_top__DOT__id_exCtrl = 0U;
                        vlSelfRef.tbCover_top__DOT__id_memCtrl = 0U;
                        vlSelfRef.tbCover_top__DOT__id_wbCtrl = 0U;
                        vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 1U;
                        vlSelfRef.tbCover_top__DOT__id_PCJmp = 0U;
                        vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
                        ++(vlSelf->__Vcoverage[1996]);
                    } else {
                        vlSelfRef.tbCover_top__DOT__id_exCtrl = 1U;
                        vlSelfRef.tbCover_top__DOT__id_memCtrl = 2U;
                        vlSelfRef.tbCover_top__DOT__id_wbCtrl = 0U;
                        vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 1U;
                        vlSelfRef.tbCover_top__DOT__id_PCJmp = 0U;
                        vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
                        ++(vlSelf->__Vcoverage[1993]);
                    }
                } else {
                    vlSelfRef.tbCover_top__DOT__id_exCtrl = 0U;
                    vlSelfRef.tbCover_top__DOT__id_memCtrl = 0U;
                    vlSelfRef.tbCover_top__DOT__id_wbCtrl = 0U;
                    vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 1U;
                    vlSelfRef.tbCover_top__DOT__id_PCJmp = 0U;
                    vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
                    ++(vlSelf->__Vcoverage[1996]);
                }
            } else if ((0x20000000U & vlSelfRef.tbCover_top__DOT__if_id_inst)) {
                if ((0x10000000U & vlSelfRef.tbCover_top__DOT__if_id_inst)) {
                    vlSelfRef.tbCover_top__DOT__id_exCtrl = 0U;
                    vlSelfRef.tbCover_top__DOT__id_memCtrl = 0U;
                    vlSelfRef.tbCover_top__DOT__id_wbCtrl = 0U;
                    vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 1U;
                    vlSelfRef.tbCover_top__DOT__id_PCJmp = 0U;
                    vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
                    ++(vlSelf->__Vcoverage[1996]);
                } else if ((0x08000000U & vlSelfRef.tbCover_top__DOT__if_id_inst)) {
                    if ((0x04000000U & vlSelfRef.tbCover_top__DOT__if_id_inst)) {
                        vlSelfRef.tbCover_top__DOT__id_exCtrl = 1U;
                        vlSelfRef.tbCover_top__DOT__id_memCtrl = 2U;
                        vlSelfRef.tbCover_top__DOT__id_wbCtrl = 0U;
                        vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 1U;
                        vlSelfRef.tbCover_top__DOT__id_PCJmp = 0U;
                        vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
                        ++(vlSelf->__Vcoverage[1995]);
                    } else {
                        vlSelfRef.tbCover_top__DOT__id_exCtrl = 0U;
                        vlSelfRef.tbCover_top__DOT__id_memCtrl = 0U;
                        vlSelfRef.tbCover_top__DOT__id_wbCtrl = 0U;
                        vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 1U;
                        vlSelfRef.tbCover_top__DOT__id_PCJmp = 0U;
                        vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
                        ++(vlSelf->__Vcoverage[1996]);
                    }
                } else if ((0x04000000U & vlSelfRef.tbCover_top__DOT__if_id_inst)) {
                    vlSelfRef.tbCover_top__DOT__id_exCtrl = 1U;
                    vlSelfRef.tbCover_top__DOT__id_memCtrl = 2U;
                    vlSelfRef.tbCover_top__DOT__id_wbCtrl = 8U;
                    vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 1U;
                    vlSelfRef.tbCover_top__DOT__id_PCJmp = 0U;
                    vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
                    ++(vlSelf->__Vcoverage[1994]);
                } else {
                    vlSelfRef.tbCover_top__DOT__id_exCtrl = 1U;
                    vlSelfRef.tbCover_top__DOT__id_memCtrl = 2U;
                    vlSelfRef.tbCover_top__DOT__id_wbCtrl = 4U;
                    vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 1U;
                    vlSelfRef.tbCover_top__DOT__id_PCJmp = 0U;
                    vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
                    ++(vlSelf->__Vcoverage[1992]);
                }
            } else if ((0x10000000U & vlSelfRef.tbCover_top__DOT__if_id_inst)) {
                if ((0x08000000U & vlSelfRef.tbCover_top__DOT__if_id_inst)) {
                    vlSelfRef.tbCover_top__DOT__id_exCtrl = 0U;
                    vlSelfRef.tbCover_top__DOT__id_memCtrl = 0U;
                    vlSelfRef.tbCover_top__DOT__id_wbCtrl = 0U;
                    vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 1U;
                    vlSelfRef.tbCover_top__DOT__id_PCJmp = 0U;
                    vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
                    ++(vlSelf->__Vcoverage[1996]);
                } else if ((0x04000000U & vlSelfRef.tbCover_top__DOT__if_id_inst)) {
                    vlSelfRef.tbCover_top__DOT__id_exCtrl = 1U;
                    vlSelfRef.tbCover_top__DOT__id_memCtrl = 1U;
                    vlSelfRef.tbCover_top__DOT__id_wbCtrl = 0x0bU;
                    vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 1U;
                    vlSelfRef.tbCover_top__DOT__id_PCJmp = 0U;
                    vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
                    ++(vlSelf->__Vcoverage[1986]);
                } else {
                    vlSelfRef.tbCover_top__DOT__id_exCtrl = 1U;
                    vlSelfRef.tbCover_top__DOT__id_memCtrl = 1U;
                    vlSelfRef.tbCover_top__DOT__id_wbCtrl = 7U;
                    vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 1U;
                    vlSelfRef.tbCover_top__DOT__id_PCJmp = 0U;
                    vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
                    ++(vlSelf->__Vcoverage[1985]);
                }
            } else if ((0x08000000U & vlSelfRef.tbCover_top__DOT__if_id_inst)) {
                if ((0x04000000U & vlSelfRef.tbCover_top__DOT__if_id_inst)) {
                    vlSelfRef.tbCover_top__DOT__id_exCtrl = 1U;
                    vlSelfRef.tbCover_top__DOT__id_memCtrl = 2U;
                    vlSelfRef.tbCover_top__DOT__id_wbCtrl = 0x0cU;
                    vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 1U;
                    vlSelfRef.tbCover_top__DOT__id_PCJmp = 0U;
                    vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
                    ++(vlSelf->__Vcoverage[1988]);
                } else {
                    vlSelfRef.tbCover_top__DOT__id_exCtrl = 0U;
                    vlSelfRef.tbCover_top__DOT__id_memCtrl = 0U;
                    vlSelfRef.tbCover_top__DOT__id_wbCtrl = 0U;
                    vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 1U;
                    vlSelfRef.tbCover_top__DOT__id_PCJmp = 0U;
                    vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
                    ++(vlSelf->__Vcoverage[1996]);
                }
            } else {
                vlSelfRef.tbCover_top__DOT__id_exCtrl = 0U;
                vlSelfRef.tbCover_top__DOT__id_memCtrl = 0U;
                vlSelfRef.tbCover_top__DOT__id_wbCtrl = 0U;
                vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 1U;
                vlSelfRef.tbCover_top__DOT__id_PCJmp = 0U;
                vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
                ++(vlSelf->__Vcoverage[1996]);
            }
        } else if ((0x40000000U & vlSelfRef.tbCover_top__DOT__if_id_inst)) {
            vlSelfRef.tbCover_top__DOT__id_exCtrl = 0U;
            vlSelfRef.tbCover_top__DOT__id_memCtrl = 0U;
            vlSelfRef.tbCover_top__DOT__id_wbCtrl = 0U;
            vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 1U;
            vlSelfRef.tbCover_top__DOT__id_PCJmp = 0U;
            vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
            ++(vlSelf->__Vcoverage[1996]);
        } else if ((0x20000000U & vlSelfRef.tbCover_top__DOT__if_id_inst)) {
            if ((0x10000000U & vlSelfRef.tbCover_top__DOT__if_id_inst)) {
                if ((0x08000000U & vlSelfRef.tbCover_top__DOT__if_id_inst)) {
                    if ((0x04000000U & vlSelfRef.tbCover_top__DOT__if_id_inst)) {
                        vlSelfRef.tbCover_top__DOT__id_exCtrl = 1U;
                        vlSelfRef.tbCover_top__DOT__id_memCtrl = 1U;
                        vlSelfRef.tbCover_top__DOT__id_wbCtrl = 0x0fU;
                        vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 1U;
                        vlSelfRef.tbCover_top__DOT__id_PCJmp = 0U;
                        vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
                        ++(vlSelf->__Vcoverage[1987]);
                    } else {
                        vlSelfRef.tbCover_top__DOT__id_exCtrl = 0U;
                        vlSelfRef.tbCover_top__DOT__id_memCtrl = 0U;
                        vlSelfRef.tbCover_top__DOT__id_wbCtrl = 0U;
                        vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 1U;
                        vlSelfRef.tbCover_top__DOT__id_PCJmp = 0U;
                        vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
                        ++(vlSelf->__Vcoverage[1996]);
                    }
                } else if ((0x04000000U & vlSelfRef.tbCover_top__DOT__if_id_inst)) {
                    vlSelfRef.tbCover_top__DOT__id_exCtrl = 0x11U;
                    vlSelfRef.tbCover_top__DOT__id_memCtrl = 0U;
                    vlSelfRef.tbCover_top__DOT__id_wbCtrl = 2U;
                    vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 0U;
                    vlSelfRef.tbCover_top__DOT__id_PCJmp = 0U;
                    vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
                    ++(vlSelf->__Vcoverage[1989]);
                } else {
                    vlSelfRef.tbCover_top__DOT__id_exCtrl = 7U;
                    vlSelfRef.tbCover_top__DOT__id_memCtrl = 0U;
                    vlSelfRef.tbCover_top__DOT__id_wbCtrl = 2U;
                    vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 0U;
                    vlSelfRef.tbCover_top__DOT__id_PCJmp = 0U;
                    vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
                    ++(vlSelf->__Vcoverage[1980]);
                }
            } else if ((0x08000000U & vlSelfRef.tbCover_top__DOT__if_id_inst)) {
                if ((0x04000000U & vlSelfRef.tbCover_top__DOT__if_id_inst)) {
                    vlSelfRef.tbCover_top__DOT__id_exCtrl = 0x1dU;
                    vlSelfRef.tbCover_top__DOT__id_memCtrl = 0U;
                    vlSelfRef.tbCover_top__DOT__id_wbCtrl = 2U;
                    vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 0U;
                    vlSelfRef.tbCover_top__DOT__id_PCJmp = 0U;
                    vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
                    ++(vlSelf->__Vcoverage[1991]);
                } else {
                    vlSelfRef.tbCover_top__DOT__id_exCtrl = 0x1bU;
                    vlSelfRef.tbCover_top__DOT__id_memCtrl = 0U;
                    vlSelfRef.tbCover_top__DOT__id_wbCtrl = 2U;
                    vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 0U;
                    vlSelfRef.tbCover_top__DOT__id_PCJmp = 0U;
                    vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
                    ++(vlSelf->__Vcoverage[1990]);
                }
            } else if ((0x04000000U & vlSelfRef.tbCover_top__DOT__if_id_inst)) {
                vlSelfRef.tbCover_top__DOT__id_exCtrl = 1U;
                vlSelfRef.tbCover_top__DOT__id_memCtrl = 0U;
                vlSelfRef.tbCover_top__DOT__id_wbCtrl = 2U;
                vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 1U;
                vlSelfRef.tbCover_top__DOT__id_PCJmp = 0U;
                vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
                ++(vlSelf->__Vcoverage[1979]);
            } else {
                vlSelfRef.tbCover_top__DOT__id_exCtrl = 1U;
                vlSelfRef.tbCover_top__DOT__id_memCtrl = 0U;
                vlSelfRef.tbCover_top__DOT__id_wbCtrl = 2U;
                vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 1U;
                vlSelfRef.tbCover_top__DOT__id_PCJmp = 0U;
                vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
                ++(vlSelf->__Vcoverage[1978]);
            }
        } else if ((0x10000000U & vlSelfRef.tbCover_top__DOT__if_id_inst)) {
            if ((0x08000000U & vlSelfRef.tbCover_top__DOT__if_id_inst)) {
                vlSelfRef.tbCover_top__DOT__id_exCtrl = 0U;
                vlSelfRef.tbCover_top__DOT__id_memCtrl = 0U;
                vlSelfRef.tbCover_top__DOT__id_wbCtrl = 0U;
                vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 1U;
                vlSelfRef.tbCover_top__DOT__id_PCJmp = 0U;
                vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
                ++(vlSelf->__Vcoverage[1996]);
            } else if ((0x04000000U & vlSelfRef.tbCover_top__DOT__if_id_inst)) {
                vlSelfRef.tbCover_top__DOT__id_exCtrl = 0U;
                vlSelfRef.tbCover_top__DOT__id_memCtrl = 0x0cU;
                vlSelfRef.tbCover_top__DOT__id_wbCtrl = 0U;
                vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 1U;
                vlSelfRef.tbCover_top__DOT__id_PCJmp = 0U;
                vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
                ++(vlSelf->__Vcoverage[1982]);
            } else {
                vlSelfRef.tbCover_top__DOT__id_exCtrl = 0U;
                vlSelfRef.tbCover_top__DOT__id_memCtrl = 4U;
                vlSelfRef.tbCover_top__DOT__id_wbCtrl = 0U;
                vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 1U;
                vlSelfRef.tbCover_top__DOT__id_PCJmp = 0U;
                vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
                ++(vlSelf->__Vcoverage[1981]);
            }
        } else if ((0x08000000U & vlSelfRef.tbCover_top__DOT__if_id_inst)) {
            if ((0x04000000U & vlSelfRef.tbCover_top__DOT__if_id_inst)) {
                vlSelfRef.tbCover_top__DOT__id_exCtrl = 0U;
                vlSelfRef.tbCover_top__DOT__id_memCtrl = 0U;
                vlSelfRef.tbCover_top__DOT__id_wbCtrl = 2U;
                vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 1U;
                vlSelfRef.tbCover_top__DOT__id_PCJmp = 1U;
                vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 1U;
                ++(vlSelf->__Vcoverage[1984]);
            } else {
                vlSelfRef.tbCover_top__DOT__id_exCtrl = 0U;
                vlSelfRef.tbCover_top__DOT__id_memCtrl = 0U;
                vlSelfRef.tbCover_top__DOT__id_wbCtrl = 0U;
                vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 1U;
                vlSelfRef.tbCover_top__DOT__id_PCJmp = 1U;
                vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
                ++(vlSelf->__Vcoverage[1983]);
            }
        } else if ((0x04000000U & vlSelfRef.tbCover_top__DOT__if_id_inst)) {
            vlSelfRef.tbCover_top__DOT__id_exCtrl = 0U;
            vlSelfRef.tbCover_top__DOT__id_memCtrl = 0U;
            vlSelfRef.tbCover_top__DOT__id_wbCtrl = 0U;
            vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 1U;
            vlSelfRef.tbCover_top__DOT__id_PCJmp = 0U;
            vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
            ++(vlSelf->__Vcoverage[1996]);
        } else {
            vlSelfRef.tbCover_top__DOT__id_exCtrl = 0x0cU;
            vlSelfRef.tbCover_top__DOT__id_memCtrl = 0U;
            vlSelfRef.tbCover_top__DOT__id_wbCtrl = 2U;
            vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel = 1U;
            vlSelfRef.tbCover_top__DOT__id_PCJmp = 0U;
            vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg = 0U;
            ++(vlSelf->__Vcoverage[1977]);
        }
        ++(vlSelf->__Vcoverage[1998]);
    }
    if (vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__flushCtrlSignals) {
        ++(vlSelf->__Vcoverage[1999]);
    }
    if (vlSelfRef.tbCover_top__DOT__rst) {
        ++(vlSelf->__Vcoverage[2000]);
    }
    if ((1U & ((~ (IData)(vlSelfRef.tbCover_top__DOT__rst)) 
               & (~ (IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__flushCtrlSignals))))) {
        ++(vlSelf->__Vcoverage[2001]);
    }
    ++(vlSelf->__Vcoverage[2002]);
    if ((0U != ((IData)(vlSelfRef.tbCover_top__DOT__id_exCtrl) 
                ^ (IData)(vlSelfRef.tbCover_top__DOT____Vtogcov__id_exCtrl)))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSelf->__Vcoverage + 302, vlSelfRef.tbCover_top__DOT__id_exCtrl, vlSelfRef.tbCover_top__DOT____Vtogcov__id_exCtrl);
        vlSelfRef.tbCover_top__DOT____Vtogcov__id_exCtrl 
            = vlSelfRef.tbCover_top__DOT__id_exCtrl;
    }
    if ((0U != ((IData)(vlSelfRef.tbCover_top__DOT__id_memCtrl) 
                ^ (IData)(vlSelfRef.tbCover_top__DOT____Vtogcov__id_memCtrl)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 312, vlSelfRef.tbCover_top__DOT__id_memCtrl, vlSelfRef.tbCover_top__DOT____Vtogcov__id_memCtrl);
        vlSelfRef.tbCover_top__DOT____Vtogcov__id_memCtrl 
            = vlSelfRef.tbCover_top__DOT__id_memCtrl;
    }
    if ((0U != ((IData)(vlSelfRef.tbCover_top__DOT__id_wbCtrl) 
                ^ (IData)(vlSelfRef.tbCover_top__DOT____Vtogcov__id_wbCtrl)))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSelf->__Vcoverage + 320, vlSelfRef.tbCover_top__DOT__id_wbCtrl, vlSelfRef.tbCover_top__DOT____Vtogcov__id_wbCtrl);
        vlSelfRef.tbCover_top__DOT____Vtogcov__id_wbCtrl 
            = vlSelfRef.tbCover_top__DOT__id_wbCtrl;
    }
    if (((IData)(vlSelfRef.tbCover_top__DOT__id_PCJmp) 
         ^ (IData)(vlSelfRef.tbCover_top__DOT____Vtogcov__id_PCJmp))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 520, vlSelfRef.tbCover_top__DOT__id_PCJmp, vlSelfRef.tbCover_top__DOT____Vtogcov__id_PCJmp);
        vlSelfRef.tbCover_top__DOT____Vtogcov__id_PCJmp 
            = vlSelfRef.tbCover_top__DOT__id_PCJmp;
    }
    if (((IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel) 
         ^ (IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT____Vtogcov__signExtSel))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1937, vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel, vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT____Vtogcov__signExtSel);
        vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT____Vtogcov__signExtSel 
            = vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel;
    }
    if (vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel) {
        ++(vlSelf->__Vcoverage[1941]);
        vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT____VlemCond_0 
            = (((- (IData)((1U & (vlSelfRef.tbCover_top__DOT__if_id_inst 
                                  >> 0x0fU)))) << 0x00000010U) 
               | (0x0000ffffU & vlSelfRef.tbCover_top__DOT__if_id_inst));
    } else {
        ++(vlSelf->__Vcoverage[1942]);
        vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT____VlemCond_0 
            = (0x0000ffffU & vlSelfRef.tbCover_top__DOT__if_id_inst);
    }
    vlSelfRef.tbCover_top__DOT__id_sgnExt = vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT____VlemCond_0;
    if (vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel) {
        ++(vlSelf->__Vcoverage[1939]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel)))) {
        ++(vlSelf->__Vcoverage[1940]);
    }
    ++(vlSelf->__Vcoverage[1943]);
    if (((IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg) 
         ^ (IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT____Vtogcov__linkReg))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 1935, vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg, vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT____Vtogcov__linkReg);
        vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT____Vtogcov__linkReg 
            = vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg;
    }
    if (vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg) {
        ++(vlSelf->__Vcoverage[1951]);
        vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT____VlemCond_1 = 0x1fU;
    } else {
        ++(vlSelf->__Vcoverage[1952]);
        vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT____VlemCond_1 
            = (0x0000001fU & (vlSelfRef.tbCover_top__DOT__if_id_inst 
                              >> 0x0bU));
    }
    vlSelfRef.tbCover_top__DOT__id_regD = vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT____VlemCond_1;
    if (vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg) {
        ++(vlSelf->__Vcoverage[1949]);
    }
    if ((1U & (~ (IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg)))) {
        ++(vlSelf->__Vcoverage[1950]);
    }
    if ((0U != (vlSelfRef.tbCover_top__DOT__id_sgnExt 
                ^ vlSelfRef.tbCover_top__DOT____Vtogcov__id_sgnExt))) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 328, vlSelfRef.tbCover_top__DOT__id_sgnExt, vlSelfRef.tbCover_top__DOT____Vtogcov__id_sgnExt);
        vlSelfRef.tbCover_top__DOT____Vtogcov__id_sgnExt 
            = vlSelfRef.tbCover_top__DOT__id_sgnExt;
    }
    if ((0U != ((IData)(vlSelfRef.tbCover_top__DOT__id_regD) 
                ^ (IData)(vlSelfRef.tbCover_top__DOT____Vtogcov__id_regD)))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSelf->__Vcoverage + 282, vlSelfRef.tbCover_top__DOT__id_regD, vlSelfRef.tbCover_top__DOT____Vtogcov__id_regD);
        vlSelfRef.tbCover_top__DOT____Vtogcov__id_regD 
            = vlSelfRef.tbCover_top__DOT__id_regD;
    }
}

void VtbCover_top___024root___eval_nba(VtbCover_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbCover_top___024root___eval_nba\n"); );
    VtbCover_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__0
            IData/*31:0*/ __Vinline_0__nba_sequent__TOP__0___VdlyVal__tbCover_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory__v0;
            __Vinline_0__nba_sequent__TOP__0___VdlyVal__tbCover_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory__v0 = 0;
            CData/*4:0*/ __Vinline_0__nba_sequent__TOP__0___VdlyDim0__tbCover_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory__v0;
            __Vinline_0__nba_sequent__TOP__0___VdlyDim0__tbCover_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory__v0 = 0;
            CData/*0:0*/ __Vinline_0__nba_sequent__TOP__0___VdlySet__tbCover_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory__v0;
            __Vinline_0__nba_sequent__TOP__0___VdlySet__tbCover_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory__v0 = 0;
            VL_NULL_CHECK(vlSelfRef.tbCover_top__DOT__cg_inst_0, "tb/tbCover_top.sv", 279)->__VnoInFunc_sample(vlSymsp);
            __Vinline_0__nba_sequent__TOP__0___VdlySet__tbCover_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory__v0 = 0U;
            if ((2U & (IData)(vlSelfRef.tbCover_top__DOT__ex_mem_memCtrl))) {
                ++(vlSelf->__Vcoverage[1928]);
                __Vinline_0__nba_sequent__TOP__0___VdlyVal__tbCover_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory__v0 
                    = vlSelfRef.tbCover_top__DOT__ex_mem_rdDataTwo;
                __Vinline_0__nba_sequent__TOP__0___VdlyDim0__tbCover_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory__v0 
                    = (0x0000001fU & (vlSelfRef.tbCover_top__DOT__ex_mem_aluResult 
                                      >> 2U));
                __Vinline_0__nba_sequent__TOP__0___VdlySet__tbCover_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory__v0 = 1U;
            } else {
                ++(vlSelf->__Vcoverage[1929]);
            }
            ++(vlSelf->__Vcoverage[1930]);
            if (__Vinline_0__nba_sequent__TOP__0___VdlySet__tbCover_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory__v0) {
                vlSelfRef.tbCover_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[__Vinline_0__nba_sequent__TOP__0___VdlyDim0__tbCover_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory__v0] 
                    = __Vinline_0__nba_sequent__TOP__0___VdlyVal__tbCover_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory__v0;
            }
        }
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__1
            IData/*31:0*/ __Vinline_0__nba_sequent__TOP__1___Vdly__tbCover_top__DOT__top_00__DOT__if_top__DOT__pc;
            __Vinline_0__nba_sequent__TOP__1___Vdly__tbCover_top__DOT__top_00__DOT__if_top__DOT__pc = 0;
            vlSelfRef.__Vdly__tbCover_top__DOT__if_id_pcIncr 
                = vlSelfRef.tbCover_top__DOT__if_id_pcIncr;
            vlSelfRef.__Vdly__tbCover_top__DOT__if_id_inst 
                = vlSelfRef.tbCover_top__DOT__if_id_inst;
            __Vinline_0__nba_sequent__TOP__1___Vdly__tbCover_top__DOT__top_00__DOT__if_top__DOT__pc 
                = vlSelfRef.tbCover_top__DOT__top_00__DOT__if_top__DOT__pc;
            if ((((IData)(vlSelfRef.tbCover_top__DOT__rst) 
                  | (IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__if_top__DOT__PCSrc)) 
                 | (IData)(vlSelfRef.tbCover_top__DOT__id_PCJmp))) {
                ++(vlSelf->__Vcoverage[1570]);
                vlSelfRef.__Vdly__tbCover_top__DOT__if_id_pcIncr = 0U;
                vlSelfRef.__Vdly__tbCover_top__DOT__if_id_inst = 0U;
            } else if (vlSelfRef.tbCover_top__DOT__if_id_write) {
                vlSelfRef.__Vdly__tbCover_top__DOT__if_id_pcIncr 
                    = vlSelfRef.tbCover_top__DOT__if_id_pcIncr;
                vlSelfRef.__Vdly__tbCover_top__DOT__if_id_inst 
                    = vlSelfRef.tbCover_top__DOT__if_id_inst;
                ++(vlSelf->__Vcoverage[1568]);
            } else {
                ++(vlSelf->__Vcoverage[1569]);
                vlSelfRef.__Vdly__tbCover_top__DOT__if_id_pcIncr 
                    = ((IData)(4U) + vlSelfRef.tbCover_top__DOT__top_00__DOT__if_top__DOT__pc);
                vlSelfRef.__Vdly__tbCover_top__DOT__if_id_inst 
                    = vlSelfRef.tbCover_top__DOT__if_inst;
            }
            if (vlSelfRef.tbCover_top__DOT__id_PCJmp) {
                ++(vlSelf->__Vcoverage[1571]);
            }
            if (vlSelfRef.tbCover_top__DOT__top_00__DOT__if_top__DOT__PCSrc) {
                ++(vlSelf->__Vcoverage[1572]);
            }
            if (vlSelfRef.tbCover_top__DOT__rst) {
                ++(vlSelf->__Vcoverage[1573]);
            }
            if ((1U & (((~ (IData)(vlSelfRef.tbCover_top__DOT__rst)) 
                        & (~ (IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__if_top__DOT__PCSrc))) 
                       & (~ (IData)(vlSelfRef.tbCover_top__DOT__id_PCJmp))))) {
                ++(vlSelf->__Vcoverage[1574]);
            }
            ++(vlSelf->__Vcoverage[1575]);
            if (vlSelfRef.tbCover_top__DOT__rst) {
                ++(vlSelf->__Vcoverage[2151]);
                __Vinline_0__nba_sequent__TOP__1___Vdly__tbCover_top__DOT__top_00__DOT__if_top__DOT__pc = 0U;
            } else if (vlSelfRef.tbCover_top__DOT__top_00__DOT__if_top__DOT__PCSrc) {
                ++(vlSelf->__Vcoverage[2150]);
                __Vinline_0__nba_sequent__TOP__1___Vdly__tbCover_top__DOT__top_00__DOT__if_top__DOT__pc 
                    = vlSelfRef.tbCover_top__DOT__ex_mem_pcAdd;
            } else if (vlSelfRef.tbCover_top__DOT__id_PCJmp) {
                ++(vlSelf->__Vcoverage[2149]);
                __Vinline_0__nba_sequent__TOP__1___Vdly__tbCover_top__DOT__top_00__DOT__if_top__DOT__pc 
                    = vlSelfRef.tbCover_top__DOT__id_jump_addr;
            } else if (vlSelfRef.tbCover_top__DOT__PCWrite) {
                __Vinline_0__nba_sequent__TOP__1___Vdly__tbCover_top__DOT__top_00__DOT__if_top__DOT__pc 
                    = vlSelfRef.tbCover_top__DOT__top_00__DOT__if_top__DOT__pc;
                ++(vlSelf->__Vcoverage[2147]);
            } else {
                ++(vlSelf->__Vcoverage[2148]);
                __Vinline_0__nba_sequent__TOP__1___Vdly__tbCover_top__DOT__top_00__DOT__if_top__DOT__pc 
                    = vlSelfRef.tbCover_top__DOT__top_00__DOT__if_top__DOT__pc_pp;
            }
            ++(vlSelf->__Vcoverage[2152]);
            vlSelfRef.tbCover_top__DOT__top_00__DOT__if_top__DOT__pc 
                = __Vinline_0__nba_sequent__TOP__1___Vdly__tbCover_top__DOT__top_00__DOT__if_top__DOT__pc;
            if ((0U != (((IData)(4U) + vlSelfRef.tbCover_top__DOT__top_00__DOT__if_top__DOT__pc) 
                        ^ vlSelfRef.tbCover_top__DOT____Vtogcov__if_pc_pp))) {
                VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 16, 
                                       ((IData)(4U) 
                                        + vlSelfRef.tbCover_top__DOT__top_00__DOT__if_top__DOT__pc), vlSelfRef.tbCover_top__DOT____Vtogcov__if_pc_pp);
                vlSelfRef.tbCover_top__DOT____Vtogcov__if_pc_pp 
                    = ((IData)(4U) + vlSelfRef.tbCover_top__DOT__top_00__DOT__if_top__DOT__pc);
            }
            if ((0U != (vlSelfRef.tbCover_top__DOT__top_00__DOT__if_top__DOT__pc 
                        ^ vlSelfRef.tbCover_top__DOT__top_00__DOT__if_top__DOT____Vtogcov__pc))) {
                VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 2083, vlSelfRef.tbCover_top__DOT__top_00__DOT__if_top__DOT__pc, vlSelfRef.tbCover_top__DOT__top_00__DOT__if_top__DOT____Vtogcov__pc);
                vlSelfRef.tbCover_top__DOT__top_00__DOT__if_top__DOT____Vtogcov__pc 
                    = vlSelfRef.tbCover_top__DOT__top_00__DOT__if_top__DOT__pc;
            }
            vlSelfRef.tbCover_top__DOT__top_00__DOT__if_top__DOT__pc_pp 
                = ((IData)(4U) + vlSelfRef.tbCover_top__DOT__top_00__DOT__if_top__DOT__pc);
        }
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VtbCover_top___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__3
            if (((IData)(vlSelfRef.tbCover_top__DOT__clk) 
                 ^ (IData)(vlSelfRef.tbCover_top__DOT____Vtogcov__clk))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 3, vlSelfRef.tbCover_top__DOT__clk, vlSelfRef.tbCover_top__DOT____Vtogcov__clk);
                vlSelfRef.tbCover_top__DOT____Vtogcov__clk 
                    = vlSelfRef.tbCover_top__DOT__clk;
            }
            if (((IData)(vlSelfRef.tbCover_top__DOT__rst) 
                 ^ (IData)(vlSelfRef.tbCover_top__DOT____Vtogcov__rst))) {
                VL_COV_TOGGLE_CHG_ST_I(1, vlSelf->__Vcoverage + 5, vlSelfRef.tbCover_top__DOT__rst, vlSelfRef.tbCover_top__DOT____Vtogcov__rst);
                vlSelfRef.tbCover_top__DOT____Vtogcov__rst 
                    = vlSelfRef.tbCover_top__DOT__rst;
            }
        }
    }
    if ((0x000000000000000bULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__0
            if (vlSelfRef.tbCover_top__DOT__rst) {
                ++(vlSelf->__Vcoverage[2155]);
                vlSelfRef.tbCover_top__DOT__top_00__DOT__if_top__DOT____VlemCond_0 = 0U;
            } else {
                ++(vlSelf->__Vcoverage[2156]);
                vlSelfRef.tbCover_top__DOT__top_00__DOT__if_top__DOT____VlemCond_0 
                    = ((0xc7U >= (0x000000ffU & (vlSelfRef.tbCover_top__DOT__top_00__DOT__if_top__DOT__pc 
                                                 >> 2U)))
                        ? vlSelfRef.tbCover_top__DOT__top_00__DOT____Vcellinp__if_top__instruction_memory
                       [(0x000000ffU & (vlSelfRef.tbCover_top__DOT__top_00__DOT__if_top__DOT__pc 
                                        >> 2U))] : 0U);
            }
            vlSelfRef.tbCover_top__DOT__if_inst = vlSelfRef.tbCover_top__DOT__top_00__DOT__if_top__DOT____VlemCond_0;
            if (vlSelfRef.tbCover_top__DOT__rst) {
                ++(vlSelf->__Vcoverage[2153]);
            }
            if ((1U & (~ (IData)(vlSelfRef.tbCover_top__DOT__rst)))) {
                ++(vlSelf->__Vcoverage[2154]);
            }
            if ((0U != (vlSelfRef.tbCover_top__DOT__if_inst 
                        ^ vlSelfRef.tbCover_top__DOT____Vtogcov__if_inst))) {
                VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 80, vlSelfRef.tbCover_top__DOT__if_inst, vlSelfRef.tbCover_top__DOT____Vtogcov__if_inst);
                vlSelfRef.tbCover_top__DOT____Vtogcov__if_inst 
                    = vlSelfRef.tbCover_top__DOT__if_inst;
            }
        }
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VtbCover_top___024root___nba_sequent__TOP__4(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__1
            if ((1U & (IData)(vlSelfRef.tbCover_top__DOT__ex_mem_memCtrl))) {
                ++(vlSelf->__Vcoverage[1926]);
                vlSelfRef.tbCover_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT____VlemCond_0 
                    = vlSelfRef.tbCover_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory
                    [(0x0000001fU & (vlSelfRef.tbCover_top__DOT__ex_mem_aluResult 
                                     >> 2U))];
            } else {
                ++(vlSelf->__Vcoverage[1927]);
                vlSelfRef.tbCover_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT____VlemCond_0 = 0U;
            }
            vlSelfRef.tbCover_top__DOT__mem_memReadData 
                = vlSelfRef.tbCover_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT____VlemCond_0;
            if ((1U & (IData)(vlSelfRef.tbCover_top__DOT__ex_mem_memCtrl))) {
                ++(vlSelf->__Vcoverage[1924]);
            }
            if ((1U & (~ (IData)(vlSelfRef.tbCover_top__DOT__ex_mem_memCtrl)))) {
                ++(vlSelf->__Vcoverage[1925]);
            }
            if ((0U != (vlSelfRef.tbCover_top__DOT__mem_memReadData 
                        ^ vlSelfRef.tbCover_top__DOT____Vtogcov__mem_memReadData))) {
                VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 1286, vlSelfRef.tbCover_top__DOT__mem_memReadData, vlSelfRef.tbCover_top__DOT____Vtogcov__mem_memReadData);
                vlSelfRef.tbCover_top__DOT____Vtogcov__mem_memReadData 
                    = vlSelfRef.tbCover_top__DOT__mem_memReadData;
            }
        }
    }
    if ((0x000000000000000bULL & vlSelfRef.__VnbaTriggered[0U])) {
        VtbCover_top___024root___nba_comb__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((0x000000000000000fULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__3
            if (vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg) {
                ++(vlSelf->__Vcoverage[1959]);
                vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT____VlemCond_3 = 4U;
            } else {
                ++(vlSelf->__Vcoverage[1960]);
                vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT____VlemCond_3 
                    = vlSelfRef.tbCover_top__DOT__reg_file_debug
                    [(0x0000001fU & (vlSelfRef.tbCover_top__DOT__if_id_inst 
                                     >> 0x10U))];
            }
            vlSelfRef.tbCover_top__DOT__id_rdDataTwo 
                = vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT____VlemCond_3;
            if (vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg) {
                ++(vlSelf->__Vcoverage[1957]);
            }
            if ((1U & (~ (IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg)))) {
                ++(vlSelf->__Vcoverage[1958]);
            }
            if (vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg) {
                ++(vlSelf->__Vcoverage[1955]);
                vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT____VlemCond_2 
                    = vlSelfRef.tbCover_top__DOT__if_id_pcIncr;
            } else {
                ++(vlSelf->__Vcoverage[1956]);
                vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT____VlemCond_2 
                    = vlSelfRef.tbCover_top__DOT__reg_file_debug
                    [(0x0000001fU & (vlSelfRef.tbCover_top__DOT__if_id_inst 
                                     >> 0x15U))];
            }
            vlSelfRef.tbCover_top__DOT__id_rdDataOne 
                = vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT____VlemCond_2;
            if (vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg) {
                ++(vlSelf->__Vcoverage[1953]);
            }
            if ((1U & (~ (IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg)))) {
                ++(vlSelf->__Vcoverage[1954]);
            }
            if ((0U != (vlSelfRef.tbCover_top__DOT__id_rdDataTwo 
                        ^ vlSelfRef.tbCover_top__DOT____Vtogcov__id_rdDataTwo))) {
                VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 456, vlSelfRef.tbCover_top__DOT__id_rdDataTwo, vlSelfRef.tbCover_top__DOT____Vtogcov__id_rdDataTwo);
                vlSelfRef.tbCover_top__DOT____Vtogcov__id_rdDataTwo 
                    = vlSelfRef.tbCover_top__DOT__id_rdDataTwo;
            }
            if ((0U != (vlSelfRef.tbCover_top__DOT__id_rdDataOne 
                        ^ vlSelfRef.tbCover_top__DOT____Vtogcov__id_rdDataOne))) {
                VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 392, vlSelfRef.tbCover_top__DOT__id_rdDataOne, vlSelfRef.tbCover_top__DOT____Vtogcov__id_rdDataOne);
                vlSelfRef.tbCover_top__DOT____Vtogcov__id_rdDataOne 
                    = vlSelfRef.tbCover_top__DOT__id_rdDataOne;
            }
            if (vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__is_jr) {
                ++(vlSelf->__Vcoverage[1973]);
                vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT____VlemCond_4 
                    = vlSelfRef.tbCover_top__DOT__id_rdDataOne;
            } else {
                ++(vlSelf->__Vcoverage[1976]);
                if (vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__is_j_type) {
                    ++(vlSelf->__Vcoverage[1974]);
                    vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT____VlemCond_4 
                        = ((0xf0000000U & vlSelfRef.tbCover_top__DOT__if_id_pcIncr) 
                           | (0x0ffffffcU & (vlSelfRef.tbCover_top__DOT__if_id_inst 
                                             << 2U)));
                } else {
                    ++(vlSelf->__Vcoverage[1975]);
                    vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT____VlemCond_4 = 0U;
                }
            }
            vlSelfRef.tbCover_top__DOT__id_jump_addr 
                = vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT____VlemCond_4;
            if (vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__is_jr) {
                ++(vlSelf->__Vcoverage[1971]);
            }
            if ((1U & (~ (IData)(vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__is_jr)))) {
                ++(vlSelf->__Vcoverage[1972]);
            }
            if ((0U != (vlSelfRef.tbCover_top__DOT__id_jump_addr 
                        ^ vlSelfRef.tbCover_top__DOT____Vtogcov__id_jump_addr))) {
                VL_COV_TOGGLE_CHG_ST_I(32, vlSelf->__Vcoverage + 522, vlSelfRef.tbCover_top__DOT__id_jump_addr, vlSelfRef.tbCover_top__DOT____Vtogcov__id_jump_addr);
                vlSelfRef.tbCover_top__DOT____Vtogcov__id_jump_addr 
                    = vlSelfRef.tbCover_top__DOT__id_jump_addr;
            }
        }
    }
}

void VtbCover_top___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbCover_top___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void VtbCover_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool VtbCover_top___024root___eval_phase__act(VtbCover_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbCover_top___024root___eval_phase__act\n"); );
    VtbCover_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = VL_EXTEND_QI(64,8, 
                                                     ((VL_EXTEND_II(4,1, vlSelfRef.__VdynSched.evaluate()) 
                                                       << 4U) 
                                                      | (((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                           << 3U) 
                                                          | (((~ (IData)(vlSelfRef.tbCover_top__DOT__clk)) 
                                                              & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tbCover_top__DOT__clk__0)) 
                                                             << 2U)) 
                                                         | ((((IData)(vlSelfRef.tbCover_top__DOT__rst) 
                                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tbCover_top__DOT__rst__0))) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.tbCover_top__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tbCover_top__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__tbCover_top__DOT__clk__0 
            = vlSelfRef.tbCover_top__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__tbCover_top__DOT__rst__0 
            = vlSelfRef.tbCover_top__DOT__rst;
        vlSelfRef.__VdynSched.doPostUpdates();
    }
    VtbCover_top___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VtbCover_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    VtbCover_top___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = VtbCover_top___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        {
            // Inlined CFunc: _timing_resume
            vlSelfRef.__VdynSched.resume();
            if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
                vlSelfRef.__VdlySched.resume();
            }
        }
        {
            // Inlined CFunc: _eval_act
            if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
                VtbCover_top___024root___act_sequent__TOP__0(vlSelf);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
            }
        }
    }
    return (__VactExecute);
}

bool VtbCover_top___024root___eval_phase__inact(VtbCover_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbCover_top___024root___eval_phase__inact\n"); );
    VtbCover_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/tbCover_top.sv", 102, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void VtbCover_top___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbCover_top___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool VtbCover_top___024root___eval_phase__nba(VtbCover_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbCover_top___024root___eval_phase__nba\n"); );
    VtbCover_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = VtbCover_top___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        VtbCover_top___024root___eval_nba(vlSelf);
        VtbCover_top___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void VtbCover_top___024root___eval(VtbCover_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbCover_top___024root___eval\n"); );
    VtbCover_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VtbCover_top___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb/tbCover_top.sv", 102, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tb/tbCover_top.sv", 102, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    VtbCover_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tb/tbCover_top.sv", 102, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = VtbCover_top___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = VtbCover_top___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = VtbCover_top___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void VtbCover_top___024root___eval_debug_assertions(VtbCover_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbCover_top___024root___eval_debug_assertions\n"); );
    VtbCover_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
