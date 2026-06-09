// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_id__Syms.h"


void Vtb_id___024root__trace_chg_0_sub_0(Vtb_id___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_id___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_id___024root__trace_chg_0\n"); );
    // Body
    Vtb_id___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_id___024root*>(voidSelf);
    Vtb_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_id___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_id___024root__trace_chg_0_sub_0(Vtb_id___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_id___024root__trace_chg_0_sub_0\n"); );
    Vtb_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_id__DOT__rst));
        bufp->chgIData(oldp+1,(vlSelfRef.tb_id__DOT__if_out),32);
        bufp->chgIData(oldp+2,(vlSelfRef.tb_id__DOT__pc_incr_in),32);
        bufp->chgIData(oldp+3,(vlSelfRef.tb_id__DOT__wr_reg),32);
        bufp->chgIData(oldp+4,(vlSelfRef.tb_id__DOT__wr_data),32);
        bufp->chgBit(oldp+5,(vlSelfRef.tb_id__DOT__RegWrite));
        bufp->chgIData(oldp+6,((0x0000ffffU & vlSelfRef.tb_id__DOT__if_out)),32);
        bufp->chgCData(oldp+7,((0x0000001fU & (vlSelfRef.tb_id__DOT__if_out 
                                               >> 0x0000000bU))),5);
        bufp->chgCData(oldp+8,((0x0000001fU & (vlSelfRef.tb_id__DOT__if_out 
                                               >> 0x00000010U))),5);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+9,(vlSelfRef.tb_id__DOT__rd_data_one),32);
        bufp->chgIData(oldp+10,(vlSelfRef.tb_id__DOT__rd_data_two),32);
        bufp->chgIData(oldp+11,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file[0]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file[1]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file[2]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file[3]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file[4]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file[5]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file[6]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file[7]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file[8]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file[9]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file[10]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file[11]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file[12]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file[13]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file[14]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file[15]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file[16]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file[17]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file[18]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file[19]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file[20]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file[21]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file[22]),32);
        bufp->chgIData(oldp+34,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file[23]),32);
        bufp->chgIData(oldp+35,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file[24]),32);
        bufp->chgIData(oldp+36,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file[25]),32);
        bufp->chgIData(oldp+37,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file[26]),32);
        bufp->chgIData(oldp+38,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file[27]),32);
        bufp->chgIData(oldp+39,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file[28]),32);
        bufp->chgIData(oldp+40,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file[29]),32);
        bufp->chgIData(oldp+41,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file[30]),32);
        bufp->chgIData(oldp+42,(vlSelfRef.tb_id__DOT__id_00__DOT__register_file[31]),32);
    }
    bufp->chgBit(oldp+43,(vlSelfRef.tb_id__DOT__clk));
}

void Vtb_id___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_id___024root__trace_cleanup\n"); );
    // Body
    Vtb_id___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_id___024root*>(voidSelf);
    Vtb_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
