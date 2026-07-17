// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "VtbCover_top__Syms.h"


void VtbCover_top___024root__trace_chg_0_sub_0(VtbCover_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VtbCover_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbCover_top___024root__trace_chg_0\n"); );
    // Body
    VtbCover_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VtbCover_top___024root*>(voidSelf);
    VtbCover_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    VtbCover_top___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VtbCover_top___024root__trace_chg_dtype____0(VtbCover_top___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 32>& __VdtypeVar);
void VtbCover_top___024root__trace_chg_dtype____1(VtbCover_top___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 32>& __VdtypeVar);

void VtbCover_top___024root__trace_chg_0_sub_0(VtbCover_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbCover_top___024root__trace_chg_0_sub_0\n"); );
    VtbCover_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.tbCover_top__DOT__NUM_INSTRUCTIONS),32);
        bufp->chgIData(oldp+1,(vlSelfRef.tbCover_top__DOT__i),32);
        bufp->chgCData(oldp+2,(vlSelfRef.tbCover_top__DOT__unnamedblk1_1__DOT__unnamedblk1__DOT__actual_format),3);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[2U] 
                      | vlSelfRef.__Vm_traceActivity[4U])))) {
        bufp->chgCData(oldp+3,(vlSelfRef.tbCover_top__DOT__id_regD),5);
        bufp->chgCData(oldp+4,(vlSelfRef.tbCover_top__DOT__id_exCtrl),5);
        bufp->chgCData(oldp+5,(vlSelfRef.tbCover_top__DOT__id_memCtrl),4);
        bufp->chgCData(oldp+6,(vlSelfRef.tbCover_top__DOT__id_wbCtrl),4);
        bufp->chgIData(oldp+7,(vlSelfRef.tbCover_top__DOT__id_sgnExt),32);
        bufp->chgBit(oldp+8,(vlSelfRef.tbCover_top__DOT__id_PCJmp));
        bufp->chgBit(oldp+9,(vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__linkReg));
        bufp->chgBit(oldp+10,(vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__signExtSel));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+11,(vlSelfRef.tbCover_top__DOT__if_id_pcIncr),32);
        bufp->chgIData(oldp+12,(vlSelfRef.tbCover_top__DOT__if_id_inst),32);
        bufp->chgCData(oldp+13,((0x0000001fU & (vlSelfRef.tbCover_top__DOT__if_id_inst 
                                                >> 0x00000010U))),5);
        bufp->chgCData(oldp+14,((0x0000001fU & (vlSelfRef.tbCover_top__DOT__if_id_inst 
                                                >> 0x00000015U))),5);
        bufp->chgCData(oldp+15,((0x0000001fU & (vlSelfRef.tbCover_top__DOT__if_id_inst 
                                                >> 6U))),5);
        bufp->chgBit(oldp+16,(vlSelfRef.tbCover_top__DOT__if_id_write));
        bufp->chgBit(oldp+17,(vlSelfRef.tbCover_top__DOT__PCWrite));
        bufp->chgCData(oldp+18,(vlSelfRef.tbCover_top__DOT__id_ex_regT),5);
        bufp->chgCData(oldp+19,(vlSelfRef.tbCover_top__DOT__id_ex_regD),5);
        bufp->chgCData(oldp+20,(vlSelfRef.tbCover_top__DOT__id_ex_regS),5);
        bufp->chgCData(oldp+21,(vlSelfRef.tbCover_top__DOT__id_ex_shamt_out),5);
        bufp->chgCData(oldp+22,(vlSelfRef.tbCover_top__DOT__id_ex_exCtrl),5);
        bufp->chgCData(oldp+23,(vlSelfRef.tbCover_top__DOT__id_ex_memCtrl),4);
        bufp->chgCData(oldp+24,(vlSelfRef.tbCover_top__DOT__id_ex_wbCtrl),4);
        bufp->chgIData(oldp+25,(vlSelfRef.tbCover_top__DOT__id_ex_pcIncr),32);
        bufp->chgIData(oldp+26,(vlSelfRef.tbCover_top__DOT__id_ex_sgnExt),32);
        bufp->chgIData(oldp+27,(vlSelfRef.tbCover_top__DOT__id_ex_rdDataOne),32);
        bufp->chgIData(oldp+28,(vlSelfRef.tbCover_top__DOT__id_ex_rdDataTwo),32);
        bufp->chgCData(oldp+29,(vlSelfRef.tbCover_top__DOT__ex_regDst),5);
        bufp->chgBit(oldp+30,((0U == vlSelfRef.tbCover_top__DOT__ex_aluResult)));
        bufp->chgBit(oldp+31,(vlSelfRef.tbCover_top__DOT__ex_overflowFlag));
        bufp->chgIData(oldp+32,(vlSelfRef.tbCover_top__DOT__ex_aluResult),32);
        bufp->chgIData(oldp+33,(vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__pc_slt_add),32);
        bufp->chgCData(oldp+34,(vlSelfRef.tbCover_top__DOT__ex_mem_regDst),5);
        bufp->chgCData(oldp+35,(vlSelfRef.tbCover_top__DOT__ex_mem_memCtrl),4);
        bufp->chgCData(oldp+36,(vlSelfRef.tbCover_top__DOT__ex_mem_wbCtrl),4);
        bufp->chgBit(oldp+37,(vlSelfRef.tbCover_top__DOT__ex_mem_zeroFlag));
        bufp->chgIData(oldp+38,(vlSelfRef.tbCover_top__DOT__ex_mem_aluResult),32);
        bufp->chgIData(oldp+39,(vlSelfRef.tbCover_top__DOT__ex_mem_rdDataTwo),32);
        bufp->chgIData(oldp+40,(vlSelfRef.tbCover_top__DOT__ex_mem_pcAdd),32);
        bufp->chgBit(oldp+41,(vlSelfRef.tbCover_top__DOT__top_00__DOT__if_top__DOT__PCSrc));
        bufp->chgCData(oldp+42,(vlSelfRef.tbCover_top__DOT__mem_wb_wbCtrl),4);
        bufp->chgCData(oldp+43,(vlSelfRef.tbCover_top__DOT__mem_wb_regDst),5);
        bufp->chgIData(oldp+44,(vlSelfRef.tbCover_top__DOT__mem_wb_memReadData),32);
        bufp->chgIData(oldp+45,(vlSelfRef.tbCover_top__DOT__mem_wb_aluResult),32);
        bufp->chgBit(oldp+46,((1U & ((IData)(vlSelfRef.tbCover_top__DOT__mem_wb_wbCtrl) 
                                     >> 1U))));
        bufp->chgIData(oldp+47,(vlSelfRef.tbCover_top__DOT__wb_regData),32);
        bufp->chgBit(oldp+48,((1U & ((IData)(vlSelfRef.tbCover_top__DOT__ex_mem_wbCtrl) 
                                     >> 1U))));
        bufp->chgCData(oldp+49,(vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__forwardA),2);
        bufp->chgCData(oldp+50,(vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__forwardB),2);
        bufp->chgCData(oldp+51,(vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl),4);
        bufp->chgIData(oldp+52,(vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_in_a),32);
        bufp->chgIData(oldp+53,(vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b),32);
        bufp->chgQData(oldp+54,(vlSelfRef.tbCover_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended),33);
        bufp->chgBit(oldp+56,((1U & (IData)(vlSelfRef.tbCover_top__DOT__id_ex_memCtrl))));
        bufp->chgBit(oldp+57,(vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__flushCtrlSignals));
        bufp->chgBit(oldp+58,(vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__is_jr));
        bufp->chgBit(oldp+59,(vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__is_j_type));
        bufp->chgBit(oldp+60,((1U & ((IData)(vlSelfRef.tbCover_top__DOT__ex_mem_memCtrl) 
                                     >> 1U))));
        bufp->chgBit(oldp+61,((1U & (IData)(vlSelfRef.tbCover_top__DOT__ex_mem_memCtrl))));
        bufp->chgIData(oldp+62,(vlSelfRef.tbCover_top__DOT__top_00__DOT__wb_top__DOT__tempMemData),32);
    }
    bufp->chgBit(oldp+63,(vlSelfRef.tbCover_top__DOT__clk));
    bufp->chgBit(oldp+64,(vlSelfRef.tbCover_top__DOT__rst));
    bufp->chgIData(oldp+65,(((IData)(4U) + vlSelfRef.tbCover_top__DOT__top_00__DOT__if_top__DOT__pc)),32);
    bufp->chgIData(oldp+66,(vlSelfRef.tbCover_top__DOT__if_inst),32);
    bufp->chgIData(oldp+67,(vlSelfRef.tbCover_top__DOT__id_rdDataOne),32);
    bufp->chgIData(oldp+68,(vlSelfRef.tbCover_top__DOT__id_rdDataTwo),32);
    VtbCover_top___024root__trace_chg_dtype____0(vlSelf, bufp, 69, vlSelfRef.tbCover_top__DOT__reg_file_debug);
    bufp->chgIData(oldp+101,(vlSelfRef.tbCover_top__DOT__id_jump_addr),32);
    bufp->chgIData(oldp+102,(vlSelfRef.tbCover_top__DOT__mem_memReadData),32);
    bufp->chgIData(oldp+103,(vlSelfRef.tbCover_top__DOT__top_00__DOT__id_top__DOT__i),32);
    bufp->chgIData(oldp+104,(vlSelfRef.tbCover_top__DOT__top_00__DOT__if_top__DOT__pc),32);
    VtbCover_top___024root__trace_chg_dtype____1(vlSelf, bufp, 105, vlSelfRef.tbCover_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory);
}

void VtbCover_top___024root__trace_chg_dtype____0(VtbCover_top___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 32>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbCover_top___024root__trace_chg_dtype____0\n"); );
    VtbCover_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->chgIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->chgIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->chgIData(oldp+3,(__VdtypeVar[3]),32);
    bufp->chgIData(oldp+4,(__VdtypeVar[4]),32);
    bufp->chgIData(oldp+5,(__VdtypeVar[5]),32);
    bufp->chgIData(oldp+6,(__VdtypeVar[6]),32);
    bufp->chgIData(oldp+7,(__VdtypeVar[7]),32);
    bufp->chgIData(oldp+8,(__VdtypeVar[8]),32);
    bufp->chgIData(oldp+9,(__VdtypeVar[9]),32);
    bufp->chgIData(oldp+10,(__VdtypeVar[10]),32);
    bufp->chgIData(oldp+11,(__VdtypeVar[11]),32);
    bufp->chgIData(oldp+12,(__VdtypeVar[12]),32);
    bufp->chgIData(oldp+13,(__VdtypeVar[13]),32);
    bufp->chgIData(oldp+14,(__VdtypeVar[14]),32);
    bufp->chgIData(oldp+15,(__VdtypeVar[15]),32);
    bufp->chgIData(oldp+16,(__VdtypeVar[16]),32);
    bufp->chgIData(oldp+17,(__VdtypeVar[17]),32);
    bufp->chgIData(oldp+18,(__VdtypeVar[18]),32);
    bufp->chgIData(oldp+19,(__VdtypeVar[19]),32);
    bufp->chgIData(oldp+20,(__VdtypeVar[20]),32);
    bufp->chgIData(oldp+21,(__VdtypeVar[21]),32);
    bufp->chgIData(oldp+22,(__VdtypeVar[22]),32);
    bufp->chgIData(oldp+23,(__VdtypeVar[23]),32);
    bufp->chgIData(oldp+24,(__VdtypeVar[24]),32);
    bufp->chgIData(oldp+25,(__VdtypeVar[25]),32);
    bufp->chgIData(oldp+26,(__VdtypeVar[26]),32);
    bufp->chgIData(oldp+27,(__VdtypeVar[27]),32);
    bufp->chgIData(oldp+28,(__VdtypeVar[28]),32);
    bufp->chgIData(oldp+29,(__VdtypeVar[29]),32);
    bufp->chgIData(oldp+30,(__VdtypeVar[30]),32);
    bufp->chgIData(oldp+31,(__VdtypeVar[31]),32);
}

void VtbCover_top___024root__trace_chg_dtype____1(VtbCover_top___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 32>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbCover_top___024root__trace_chg_dtype____1\n"); );
    VtbCover_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->chgIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->chgIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->chgIData(oldp+3,(__VdtypeVar[3]),32);
    bufp->chgIData(oldp+4,(__VdtypeVar[4]),32);
    bufp->chgIData(oldp+5,(__VdtypeVar[5]),32);
    bufp->chgIData(oldp+6,(__VdtypeVar[6]),32);
    bufp->chgIData(oldp+7,(__VdtypeVar[7]),32);
    bufp->chgIData(oldp+8,(__VdtypeVar[8]),32);
    bufp->chgIData(oldp+9,(__VdtypeVar[9]),32);
    bufp->chgIData(oldp+10,(__VdtypeVar[10]),32);
    bufp->chgIData(oldp+11,(__VdtypeVar[11]),32);
    bufp->chgIData(oldp+12,(__VdtypeVar[12]),32);
    bufp->chgIData(oldp+13,(__VdtypeVar[13]),32);
    bufp->chgIData(oldp+14,(__VdtypeVar[14]),32);
    bufp->chgIData(oldp+15,(__VdtypeVar[15]),32);
    bufp->chgIData(oldp+16,(__VdtypeVar[16]),32);
    bufp->chgIData(oldp+17,(__VdtypeVar[17]),32);
    bufp->chgIData(oldp+18,(__VdtypeVar[18]),32);
    bufp->chgIData(oldp+19,(__VdtypeVar[19]),32);
    bufp->chgIData(oldp+20,(__VdtypeVar[20]),32);
    bufp->chgIData(oldp+21,(__VdtypeVar[21]),32);
    bufp->chgIData(oldp+22,(__VdtypeVar[22]),32);
    bufp->chgIData(oldp+23,(__VdtypeVar[23]),32);
    bufp->chgIData(oldp+24,(__VdtypeVar[24]),32);
    bufp->chgIData(oldp+25,(__VdtypeVar[25]),32);
    bufp->chgIData(oldp+26,(__VdtypeVar[26]),32);
    bufp->chgIData(oldp+27,(__VdtypeVar[27]),32);
    bufp->chgIData(oldp+28,(__VdtypeVar[28]),32);
    bufp->chgIData(oldp+29,(__VdtypeVar[29]),32);
    bufp->chgIData(oldp+30,(__VdtypeVar[30]),32);
    bufp->chgIData(oldp+31,(__VdtypeVar[31]),32);
}

void VtbCover_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtbCover_top___024root__trace_cleanup\n"); );
    // Body
    VtbCover_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VtbCover_top___024root*>(voidSelf);
    VtbCover_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
