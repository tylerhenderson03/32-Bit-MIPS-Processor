// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_mem__Syms.h"


VL_ATTR_COLD void Vtb_mem___024root__trace_init_sub__TOP__0(Vtb_mem___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem___024root__trace_init_sub__TOP__0\n"); );
    Vtb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("tb_mem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+44,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"CLK_PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+0,0,"mem_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1,0,"wb_ctrl_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+2,0,"pc_slt_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"rd_data_two_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+5,0,"zero_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"reg_dst_mux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+7,0,"branch_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"wb_ctrl_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+41,0,"mem_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"branch_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"alu_result_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"wr_reg_dest_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+42,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mem_00", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+44,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+42,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"zero_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+0,0,"mem_ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1,0,"wb_ctrl_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+3,0,"alu_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"rd_data_two_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"pc_slt_add",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"reg_dst_mux",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+7,0,"branch_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"wb_ctrl_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+41,0,"mem_read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"branch_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"alu_result_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"wr_reg_dest_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("data_memory", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+9+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+43,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_mem___024root__trace_init_top(Vtb_mem___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem___024root__trace_init_top\n"); );
    Vtb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_mem___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_mem___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_mem___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_mem___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_mem___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_mem___024root__trace_register(Vtb_mem___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem___024root__trace_register\n"); );
    Vtb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_mem___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtb_mem___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtb_mem___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtb_mem___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_mem___024root__trace_const_0_sub_0(Vtb_mem___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_mem___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem___024root__trace_const_0\n"); );
    // Body
    Vtb_mem___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_mem___024root*>(voidSelf);
    Vtb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_mem___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_mem___024root__trace_const_0_sub_0(Vtb_mem___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem___024root__trace_const_0_sub_0\n"); );
    Vtb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+44,(0x00000020U),32);
    bufp->fullIData(oldp+45,(0x0000000aU),32);
}

VL_ATTR_COLD void Vtb_mem___024root__trace_full_0_sub_0(Vtb_mem___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_mem___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem___024root__trace_full_0\n"); );
    // Body
    Vtb_mem___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_mem___024root*>(voidSelf);
    Vtb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_mem___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_mem___024root__trace_full_0_sub_0(Vtb_mem___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem___024root__trace_full_0_sub_0\n"); );
    Vtb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullCData(oldp+0,(vlSelfRef.tb_mem__DOT__mem_ctrl),3);
    bufp->fullCData(oldp+1,(vlSelfRef.tb_mem__DOT__wb_ctrl_in),2);
    bufp->fullIData(oldp+2,(vlSelfRef.tb_mem__DOT__pc_slt_add),32);
    bufp->fullIData(oldp+3,(vlSelfRef.tb_mem__DOT__alu_result),32);
    bufp->fullIData(oldp+4,(vlSelfRef.tb_mem__DOT__rd_data_two_out),32);
    bufp->fullBit(oldp+5,(vlSelfRef.tb_mem__DOT__zero_flag));
    bufp->fullCData(oldp+6,(vlSelfRef.tb_mem__DOT__reg_dst_mux),5);
    bufp->fullBit(oldp+7,((((IData)(vlSelfRef.tb_mem__DOT__mem_ctrl) 
                            >> 2U) & (IData)(vlSelfRef.tb_mem__DOT__zero_flag))));
    bufp->fullBit(oldp+8,(vlSelfRef.tb_mem__DOT__rst));
    bufp->fullIData(oldp+9,(vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[0]),32);
    bufp->fullIData(oldp+10,(vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[1]),32);
    bufp->fullIData(oldp+11,(vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[2]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[3]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[4]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[5]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[6]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[7]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[8]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[9]),32);
    bufp->fullIData(oldp+19,(vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[10]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[11]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[12]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[13]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[14]),32);
    bufp->fullIData(oldp+24,(vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[15]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[16]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[17]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[18]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[19]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[20]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[21]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[22]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[23]),32);
    bufp->fullIData(oldp+33,(vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[24]),32);
    bufp->fullIData(oldp+34,(vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[25]),32);
    bufp->fullIData(oldp+35,(vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[26]),32);
    bufp->fullIData(oldp+36,(vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[27]),32);
    bufp->fullIData(oldp+37,(vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[28]),32);
    bufp->fullIData(oldp+38,(vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[29]),32);
    bufp->fullIData(oldp+39,(vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[30]),32);
    bufp->fullIData(oldp+40,(vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[31]),32);
    bufp->fullIData(oldp+41,(((2U & (IData)(vlSelfRef.tb_mem__DOT__mem_ctrl))
                               ? vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory
                              [(0x0000001fU & vlSelfRef.tb_mem__DOT__alu_result)]
                               : 0U)),32);
    bufp->fullBit(oldp+42,(vlSelfRef.tb_mem__DOT__clk));
    bufp->fullIData(oldp+43,(vlSelfRef.tb_mem__DOT__mem_00__DOT__i),32);
}
