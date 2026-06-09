// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_id__Syms.h"


VL_ATTR_COLD void Vtb_id___024root__trace_init_sub__TOP__0(Vtb_id___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_id___024root__trace_init_sub__TOP__0\n"); );
    Vtb_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("tb_id", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+48,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"CLK_PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+45,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+0,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"if_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"pc_incr_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"wr_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+4,0,"wr_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+5,0,"RegWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"ex_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+10,0,"mem_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+11,0,"wb_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+2,0,"pc_incr_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"sgn_extend_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"rd_data_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"rd_data_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"rd_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+8,0,"rt_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("id_00", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+48,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"if_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"pc_incr_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"wr_reg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+4,0,"wr_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+5,0,"RegWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"ex_ctrl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+10,0,"mem_ctrl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+11,0,"wb_ctrl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+2,0,"pc_incr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"sgn_extend_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"rd_data_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"rd_data_two",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"rd_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+8,0,"rt_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("register_file", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+12+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+44,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_id___024root__trace_init_top(Vtb_id___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_id___024root__trace_init_top\n"); );
    Vtb_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_id___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_id___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_id___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_id___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_id___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_id___024root__trace_register(Vtb_id___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_id___024root__trace_register\n"); );
    Vtb_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_id___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtb_id___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtb_id___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtb_id___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_id___024root__trace_const_0_sub_0(Vtb_id___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_id___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_id___024root__trace_const_0\n"); );
    // Body
    Vtb_id___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_id___024root*>(voidSelf);
    Vtb_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_id___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_id___024root__trace_const_0_sub_0(Vtb_id___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_id___024root__trace_const_0_sub_0\n"); );
    Vtb_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+48,(0x00000020U),32);
    bufp->fullIData(oldp+49,(0x0000000aU),32);
}

VL_ATTR_COLD void Vtb_id___024root__trace_full_0_sub_0(Vtb_id___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_id___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_id___024root__trace_full_0\n"); );
    // Body
    Vtb_id___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_id___024root*>(voidSelf);
    Vtb_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_id___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_id___024root__trace_full_0_sub_0(Vtb_id___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_id___024root__trace_full_0_sub_0\n"); );
    Vtb_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+0,(vlSelfRef.tb_id__DOT__rst));
    bufp->fullIData(oldp+1,(vlSelfRef.tb_id__DOT__if_out),32);
    bufp->fullIData(oldp+2,(vlSelfRef.tb_id__DOT__pc_incr_in),32);
    bufp->fullCData(oldp+3,(vlSelfRef.tb_id__DOT__wr_reg),5);
    bufp->fullIData(oldp+4,(vlSelfRef.tb_id__DOT__wr_data),32);
    bufp->fullBit(oldp+5,(vlSelfRef.tb_id__DOT__RegWrite));
    bufp->fullIData(oldp+6,((0x0000ffffU & vlSelfRef.tb_id__DOT__if_out)),32);
    bufp->fullCData(oldp+7,((0x0000001fU & (vlSelfRef.tb_id__DOT__if_out 
                                            >> 0x0000000bU))),5);
    bufp->fullCData(oldp+8,((0x0000001fU & (vlSelfRef.tb_id__DOT__if_out 
                                            >> 0x00000010U))),5);
    bufp->fullCData(oldp+9,(vlSelfRef.tb_id__DOT__ex_ctrl),4);
    bufp->fullCData(oldp+10,(vlSelfRef.tb_id__DOT__mem_ctrl),3);
    bufp->fullCData(oldp+11,(vlSelfRef.tb_id__DOT__wb_ctrl),2);
    bufp->fullIData(oldp+12,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file[0]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file[1]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file[2]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file[3]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file[4]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file[5]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file[6]),32);
    bufp->fullIData(oldp+19,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file[7]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file[8]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file[9]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file[10]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file[11]),32);
    bufp->fullIData(oldp+24,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file[12]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file[13]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file[14]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file[15]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file[16]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file[17]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file[18]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file[19]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file[20]),32);
    bufp->fullIData(oldp+33,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file[21]),32);
    bufp->fullIData(oldp+34,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file[22]),32);
    bufp->fullIData(oldp+35,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file[23]),32);
    bufp->fullIData(oldp+36,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file[24]),32);
    bufp->fullIData(oldp+37,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file[25]),32);
    bufp->fullIData(oldp+38,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file[26]),32);
    bufp->fullIData(oldp+39,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file[27]),32);
    bufp->fullIData(oldp+40,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file[28]),32);
    bufp->fullIData(oldp+41,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file[29]),32);
    bufp->fullIData(oldp+42,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file[30]),32);
    bufp->fullIData(oldp+43,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file[31]),32);
    bufp->fullIData(oldp+44,(vlSelfRef.tb_id__DOT__id_00__DOT__i),32);
    bufp->fullBit(oldp+45,(vlSelfRef.tb_id__DOT__clk));
    bufp->fullIData(oldp+46,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file
                             [(0x0000001fU & (vlSelfRef.tb_id__DOT__if_out 
                                              >> 0x00000015U))]),32);
    bufp->fullIData(oldp+47,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file
                             [(0x0000001fU & (vlSelfRef.tb_id__DOT__if_out 
                                              >> 0x00000010U))]),32);
}
