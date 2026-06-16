// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_wb__Syms.h"


void Vtb_wb___024root__trace_chg_0_sub_0(Vtb_wb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_wb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wb___024root__trace_chg_0\n"); );
    // Body
    Vtb_wb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_wb___024root*>(voidSelf);
    Vtb_wb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_wb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_wb___024root__trace_chg_0_sub_0(Vtb_wb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wb___024root__trace_chg_0_sub_0\n"); );
    Vtb_wb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgIData(oldp+0,(vlSelfRef.tb_wb__DOT__mem_read_data),32);
        bufp->chgIData(oldp+1,(vlSelfRef.tb_wb__DOT__alu_result_out),32);
        bufp->chgCData(oldp+2,(vlSelfRef.tb_wb__DOT__wb_ctrl),2);
        bufp->chgCData(oldp+3,(vlSelfRef.tb_wb__DOT__wr_reg_dest_in),5);
        bufp->chgIData(oldp+4,(((1U & (IData)(vlSelfRef.tb_wb__DOT__wb_ctrl))
                                 ? vlSelfRef.tb_wb__DOT__alu_result_out
                                 : vlSelfRef.tb_wb__DOT__mem_read_data)),32);
        bufp->chgBit(oldp+5,((1U & ((IData)(vlSelfRef.tb_wb__DOT__wb_ctrl) 
                                    >> 1U))));
        bufp->chgBit(oldp+6,(vlSelfRef.tb_wb__DOT__rst));
    }
    bufp->chgBit(oldp+7,(vlSelfRef.tb_wb__DOT__clk));
}

void Vtb_wb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_wb___024root__trace_cleanup\n"); );
    // Body
    Vtb_wb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_wb___024root*>(voidSelf);
    Vtb_wb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
