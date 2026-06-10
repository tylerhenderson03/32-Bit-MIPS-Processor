// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_mem__Syms.h"


void Vtb_mem___024root__trace_chg_0_sub_0(Vtb_mem___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_mem___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem___024root__trace_chg_0\n"); );
    // Body
    Vtb_mem___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_mem___024root*>(voidSelf);
    Vtb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_mem___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_mem___024root__trace_chg_0_sub_0(Vtb_mem___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem___024root__trace_chg_0_sub_0\n"); );
    Vtb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgCData(oldp+0,(vlSelfRef.tb_mem__DOT__mem_ctrl),3);
        bufp->chgCData(oldp+1,(vlSelfRef.tb_mem__DOT__wb_ctrl_in),2);
        bufp->chgIData(oldp+2,(vlSelfRef.tb_mem__DOT__pc_slt_add),32);
        bufp->chgIData(oldp+3,(vlSelfRef.tb_mem__DOT__alu_result),32);
        bufp->chgIData(oldp+4,(vlSelfRef.tb_mem__DOT__rd_data_two_out),32);
        bufp->chgBit(oldp+5,(vlSelfRef.tb_mem__DOT__zero_flag));
        bufp->chgCData(oldp+6,(vlSelfRef.tb_mem__DOT__reg_dst_mux),5);
        bufp->chgBit(oldp+7,((((IData)(vlSelfRef.tb_mem__DOT__mem_ctrl) 
                               >> 2U) & (IData)(vlSelfRef.tb_mem__DOT__zero_flag))));
        bufp->chgBit(oldp+8,(vlSelfRef.tb_mem__DOT__rst));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[3U])))) {
        bufp->chgIData(oldp+9,(vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[0]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[1]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[2]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[3]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[4]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[5]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[6]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[7]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[8]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[9]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[10]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[11]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[12]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[13]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[14]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[15]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[16]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[17]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[18]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[19]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[20]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[21]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[22]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[23]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[24]),32);
        bufp->chgIData(oldp+34,(vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[25]),32);
        bufp->chgIData(oldp+35,(vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[26]),32);
        bufp->chgIData(oldp+36,(vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[27]),32);
        bufp->chgIData(oldp+37,(vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[28]),32);
        bufp->chgIData(oldp+38,(vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[29]),32);
        bufp->chgIData(oldp+39,(vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[30]),32);
        bufp->chgIData(oldp+40,(vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory[31]),32);
    }
    bufp->chgIData(oldp+41,(((2U & (IData)(vlSelfRef.tb_mem__DOT__mem_ctrl))
                              ? vlSelfRef.tb_mem__DOT__mem_00__DOT__data_memory
                             [(0x0000001fU & vlSelfRef.tb_mem__DOT__alu_result)]
                              : 0U)),32);
    bufp->chgBit(oldp+42,(vlSelfRef.tb_mem__DOT__clk));
    bufp->chgIData(oldp+43,(vlSelfRef.tb_mem__DOT__mem_00__DOT__i),32);
}

void Vtb_mem___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem___024root__trace_cleanup\n"); );
    // Body
    Vtb_mem___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_mem___024root*>(voidSelf);
    Vtb_mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
