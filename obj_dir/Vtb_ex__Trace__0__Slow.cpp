// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_ex__Syms.h"


VL_ATTR_COLD void Vtb_ex___024root__trace_init_sub__TOP__0(Vtb_ex___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ex___024root__trace_init_sub__TOP__0\n"); );
    Vtb_ex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("tb_ex", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"CLK_PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+0,0,"ex_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1,0,"mem_ctrl_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+2,0,"wb_ctrl_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+3,0,"pc_incr_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"sgn_extend_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"rd_data_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"rd_data_two_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"rd_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+8,0,"rt_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1,0,"mem_ctrl_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+2,0,"wb_ctrl_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+9,0,"pc_slt_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"rd_data_two_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+13,0,"zero_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"reg_dst_mux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+14,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ex_00", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+0,0,"ex_ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1,0,"mem_ctrl_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+2,0,"wb_ctrl_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+3,0,"pc_incr_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"sgn_extend_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"rd_data_one",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"rd_data_two_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"rd_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+8,0,"rt_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1,0,"mem_ctrl_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+2,0,"wb_ctrl_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+9,0,"pc_slt_add",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"alu_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"rd_data_two_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+13,0,"zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"reg_dst_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+15,0,"alu_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("alu_00", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"in_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"alu_opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+13,0,"zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"alu_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_ex___024root__trace_init_top(Vtb_ex___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ex___024root__trace_init_top\n"); );
    Vtb_ex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_ex___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_ex___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_ex___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_ex___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_ex___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_ex___024root__trace_register(Vtb_ex___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ex___024root__trace_register\n"); );
    Vtb_ex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_ex___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtb_ex___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtb_ex___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtb_ex___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_ex___024root__trace_const_0_sub_0(Vtb_ex___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_ex___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ex___024root__trace_const_0\n"); );
    // Body
    Vtb_ex___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_ex___024root*>(voidSelf);
    Vtb_ex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_ex___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_ex___024root__trace_const_0_sub_0(Vtb_ex___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ex___024root__trace_const_0_sub_0\n"); );
    Vtb_ex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+17,(0x00000020U),32);
    bufp->fullIData(oldp+18,(0x0000000aU),32);
}

VL_ATTR_COLD void Vtb_ex___024root__trace_full_0_sub_0(Vtb_ex___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_ex___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ex___024root__trace_full_0\n"); );
    // Body
    Vtb_ex___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_ex___024root*>(voidSelf);
    Vtb_ex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_ex___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_ex___024root__trace_full_0_sub_0(Vtb_ex___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ex___024root__trace_full_0_sub_0\n"); );
    Vtb_ex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullCData(oldp+0,(vlSelfRef.tb_ex__DOT__ex_ctrl),4);
    bufp->fullCData(oldp+1,(vlSelfRef.tb_ex__DOT__mem_ctrl_in),3);
    bufp->fullCData(oldp+2,(vlSelfRef.tb_ex__DOT__wb_ctrl_in),2);
    bufp->fullIData(oldp+3,(vlSelfRef.tb_ex__DOT__pc_incr_in),32);
    bufp->fullIData(oldp+4,(vlSelfRef.tb_ex__DOT__sgn_extend_out),32);
    bufp->fullIData(oldp+5,(vlSelfRef.tb_ex__DOT__rd_data_one),32);
    bufp->fullIData(oldp+6,(vlSelfRef.tb_ex__DOT__rd_data_two_in),32);
    bufp->fullCData(oldp+7,(vlSelfRef.tb_ex__DOT__rd_out),5);
    bufp->fullCData(oldp+8,(vlSelfRef.tb_ex__DOT__rt_out),5);
    bufp->fullIData(oldp+9,((vlSelfRef.tb_ex__DOT__pc_incr_in 
                             + VL_SHIFTL_III(32,32,32, vlSelfRef.tb_ex__DOT__sgn_extend_out, 2U))),32);
    bufp->fullCData(oldp+10,(((8U & (IData)(vlSelfRef.tb_ex__DOT__ex_ctrl))
                               ? (IData)(vlSelfRef.tb_ex__DOT__rd_out)
                               : (IData)(vlSelfRef.tb_ex__DOT__rt_out))),5);
    bufp->fullBit(oldp+11,(vlSelfRef.tb_ex__DOT__rst));
    bufp->fullIData(oldp+12,(((8U & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
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
                                                  & vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_00__DOT__in_b)))))),32);
    bufp->fullBit(oldp+13,((0U == ((8U & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
                                    ? ((4U & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
                                        ? ((2U & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
                                                ? (vlSelfRef.tb_ex__DOT__rd_data_one 
                                                   * vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_00__DOT__in_b)
                                                : 0U)
                                            : ((1U 
                                                & (IData)(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl))
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
    bufp->fullBit(oldp+14,(vlSelfRef.tb_ex__DOT__clk));
    bufp->fullCData(oldp+15,(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_ctrl),4);
    bufp->fullIData(oldp+16,(vlSelfRef.tb_ex__DOT__ex_00__DOT__alu_00__DOT__in_b),32);
}
