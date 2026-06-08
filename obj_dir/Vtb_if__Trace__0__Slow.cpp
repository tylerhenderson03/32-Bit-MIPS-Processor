// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_if__Syms.h"


VL_ATTR_COLD void Vtb_if___024root__trace_init_sub__TOP__0(Vtb_if___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_if___024root__trace_init_sub__TOP__0\n"); );
    Vtb_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("tb_if", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+40,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"CLK_PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+33,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"PCSrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"pc_br",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"pc_pp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("if_00", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+40,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+33,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"PCSrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"pc_br",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"pc_pp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"inst_mem_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("instruction_memory", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+0+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+32,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_if___024root__trace_init_top(Vtb_if___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_if___024root__trace_init_top\n"); );
    Vtb_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_if___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_if___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_if___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_if___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_if___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_if___024root__trace_register(Vtb_if___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_if___024root__trace_register\n"); );
    Vtb_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_if___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtb_if___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtb_if___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtb_if___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_if___024root__trace_const_0_sub_0(Vtb_if___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_if___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_if___024root__trace_const_0\n"); );
    // Body
    Vtb_if___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_if___024root*>(voidSelf);
    Vtb_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_if___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_if___024root__trace_const_0_sub_0(Vtb_if___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_if___024root__trace_const_0_sub_0\n"); );
    Vtb_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+40,(0x00000020U),32);
    bufp->fullIData(oldp+41,(0x0000000aU),32);
}

VL_ATTR_COLD void Vtb_if___024root__trace_full_0_sub_0(Vtb_if___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_if___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_if___024root__trace_full_0\n"); );
    // Body
    Vtb_if___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_if___024root*>(voidSelf);
    Vtb_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_if___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_if___024root__trace_full_0_sub_0(Vtb_if___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_if___024root__trace_full_0_sub_0\n"); );
    Vtb_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+0,(vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[0]),32);
    bufp->fullIData(oldp+1,(vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[1]),32);
    bufp->fullIData(oldp+2,(vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[2]),32);
    bufp->fullIData(oldp+3,(vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[3]),32);
    bufp->fullIData(oldp+4,(vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[4]),32);
    bufp->fullIData(oldp+5,(vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[5]),32);
    bufp->fullIData(oldp+6,(vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[6]),32);
    bufp->fullIData(oldp+7,(vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[7]),32);
    bufp->fullIData(oldp+8,(vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[8]),32);
    bufp->fullIData(oldp+9,(vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[9]),32);
    bufp->fullIData(oldp+10,(vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[10]),32);
    bufp->fullIData(oldp+11,(vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[11]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[12]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[13]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[14]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[15]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[16]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[17]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[18]),32);
    bufp->fullIData(oldp+19,(vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[19]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[20]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[21]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[22]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[23]),32);
    bufp->fullIData(oldp+24,(vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[24]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[25]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[26]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[27]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[28]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[29]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[30]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[31]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.tb_if__DOT__if_00__DOT__i),32);
    bufp->fullBit(oldp+33,(vlSelfRef.tb_if__DOT__clk));
    bufp->fullBit(oldp+34,(vlSelfRef.tb_if__DOT__rst));
    bufp->fullBit(oldp+35,(vlSelfRef.tb_if__DOT__PCSrc));
    bufp->fullIData(oldp+36,(vlSelfRef.tb_if__DOT__pc_br),32);
    bufp->fullIData(oldp+37,(((IData)(4U) + vlSelfRef.tb_if__DOT__if_00__DOT__pc)),32);
    bufp->fullIData(oldp+38,(((IData)(vlSelfRef.tb_if__DOT__rst)
                               ? 0U : vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory
                              [(0x0000001fU & vlSelfRef.tb_if__DOT__if_00__DOT__pc)])),32);
    bufp->fullIData(oldp+39,(vlSelfRef.tb_if__DOT__if_00__DOT__pc),32);
}
