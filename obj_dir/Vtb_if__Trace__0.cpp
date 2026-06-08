// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_if__Syms.h"


void Vtb_if___024root__trace_chg_0_sub_0(Vtb_if___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_if___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_if___024root__trace_chg_0\n"); );
    // Body
    Vtb_if___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_if___024root*>(voidSelf);
    Vtb_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_if___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_if___024root__trace_chg_0_sub_0(Vtb_if___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_if___024root__trace_chg_0_sub_0\n"); );
    Vtb_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[0]),32);
        bufp->chgIData(oldp+1,(vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[1]),32);
        bufp->chgIData(oldp+2,(vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[2]),32);
        bufp->chgIData(oldp+3,(vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[3]),32);
        bufp->chgIData(oldp+4,(vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[4]),32);
        bufp->chgIData(oldp+5,(vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[5]),32);
        bufp->chgIData(oldp+6,(vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[6]),32);
        bufp->chgIData(oldp+7,(vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[7]),32);
        bufp->chgIData(oldp+8,(vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[8]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[9]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[10]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[11]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[12]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[13]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[14]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[15]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[16]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[17]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[18]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[19]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[20]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[21]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[22]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[23]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[24]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[25]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[26]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[27]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[28]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[29]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[30]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory[31]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.tb_if__DOT__if_00__DOT__i),32);
    }
    bufp->chgBit(oldp+33,(vlSelfRef.tb_if__DOT__clk));
    bufp->chgBit(oldp+34,(vlSelfRef.tb_if__DOT__rst));
    bufp->chgBit(oldp+35,(vlSelfRef.tb_if__DOT__PCSrc));
    bufp->chgIData(oldp+36,(vlSelfRef.tb_if__DOT__pc_br),32);
    bufp->chgIData(oldp+37,(((IData)(4U) + vlSelfRef.tb_if__DOT__if_00__DOT__pc)),32);
    bufp->chgIData(oldp+38,(((IData)(vlSelfRef.tb_if__DOT__rst)
                              ? 0U : vlSelfRef.tb_if__DOT__if_00__DOT__instruction_memory
                             [(0x0000001fU & vlSelfRef.tb_if__DOT__if_00__DOT__pc)])),32);
    bufp->chgIData(oldp+39,(vlSelfRef.tb_if__DOT__if_00__DOT__pc),32);
}

void Vtb_if___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_if___024root__trace_cleanup\n"); );
    // Body
    Vtb_if___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_if___024root*>(voidSelf);
    Vtb_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
