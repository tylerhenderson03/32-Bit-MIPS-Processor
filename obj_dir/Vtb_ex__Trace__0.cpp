// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_ex__Syms.h"


void Vtb_ex___024root__trace_chg_0_sub_0(Vtb_ex___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_ex___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ex___024root__trace_chg_0\n"); );
    // Body
    Vtb_ex___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_ex___024root*>(voidSelf);
    Vtb_ex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_ex___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_ex___024root__trace_chg_0_sub_0(Vtb_ex___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ex___024root__trace_chg_0_sub_0\n"); );
    Vtb_ex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgCData(oldp+0,(vlSelfRef.tb_ex__DOT__ex_ctrl),4);
        bufp->chgCData(oldp+1,(vlSelfRef.tb_ex__DOT__mem_ctrl_in),3);
        bufp->chgCData(oldp+2,(vlSelfRef.tb_ex__DOT__wb_ctrl_in),2);
        bufp->chgIData(oldp+3,(vlSelfRef.tb_ex__DOT__pc_incr_in),32);
        bufp->chgIData(oldp+4,(vlSelfRef.tb_ex__DOT__sgn_extend_out),32);
        bufp->chgIData(oldp+5,(vlSelfRef.tb_ex__DOT__rd_data_one),32);
        bufp->chgIData(oldp+6,(vlSelfRef.tb_ex__DOT__rd_data_two_in),32);
        bufp->chgCData(oldp+7,(vlSelfRef.tb_ex__DOT__rd_out),5);
        bufp->chgCData(oldp+8,(vlSelfRef.tb_ex__DOT__rt_out),5);
        bufp->chgIData(oldp+9,((vlSelfRef.tb_ex__DOT__pc_incr_in 
                                + VL_SHIFTL_III(32,32,32, vlSelfRef.tb_ex__DOT__sgn_extend_out, 2U))),32);
        bufp->chgCData(oldp+10,(((8U & (IData)(vlSelfRef.tb_ex__DOT__ex_ctrl))
                                  ? (IData)(vlSelfRef.tb_ex__DOT__rd_out)
                                  : (IData)(vlSelfRef.tb_ex__DOT__rt_out))),5);
        bufp->chgBit(oldp+11,(vlSelfRef.tb_ex__DOT__rst));
    }
    bufp->chgIData(oldp+12,(((8U & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
                              ? ((4U & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
                                  ? ((2U & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
                                      ? ((1U & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
                                          ? (vlSelfRef.tb_ex__DOT__rd_data_one 
                                             * vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_00__DOT__in_b)
                                          : 0U) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
                                                    ? 0U
                                                    : 
                                                   (~ vlSelfRef.__VdfgRegularize_hebeb780c_0_0)))
                                  : 0U) : ((4U & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
                                                    ? 0U
                                                    : 
                                                   (vlSelfRef.tb_ex__DOT__rd_data_one 
                                                    - vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_00__DOT__in_b))
                                                : 0U)
                                            : ((2U 
                                                & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
                                                    ? 0U
                                                    : 
                                                   (vlSelfRef.tb_ex__DOT__rd_data_one 
                                                    + vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_00__DOT__in_b))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
                                                    ? vlSelfRef.__VdfgRegularize_hebeb780c_0_0
                                                    : 
                                                   (vlSelfRef.tb_ex__DOT__rd_data_one 
                                                    & vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_00__DOT__in_b)))))),32);
    bufp->chgBit(oldp+13,((0U == ((8U & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
                                   ? ((4U & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
                                       ? ((2U & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
                                           ? ((1U & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
                                               ? (vlSelfRef.tb_ex__DOT__rd_data_one 
                                                  * vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_00__DOT__in_b)
                                               : 0U)
                                           : ((1U & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
                                               ? 0U
                                               : (~ vlSelfRef.__VdfgRegularize_hebeb780c_0_0)))
                                       : 0U) : ((4U 
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
                                                   & vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_00__DOT__in_b))))))));
    bufp->chgBit(oldp+14,(vlSelfRef.tb_ex__DOT__clk));
    bufp->chgCData(oldp+15,(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl),4);
    bufp->chgIData(oldp+16,(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_00__DOT__in_b),32);
}

void Vtb_ex___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ex___024root__trace_cleanup\n"); );
    // Body
    Vtb_ex___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_ex___024root*>(voidSelf);
    Vtb_ex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
