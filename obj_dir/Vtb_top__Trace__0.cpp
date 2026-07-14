// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_top__Syms.h"


void Vtb_top___024root__trace_chg_0_sub_0(Vtb_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_chg_0\n"); );
    // Body
    Vtb_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_top___024root*>(voidSelf);
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_top___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_top___024root__trace_chg_dtype____0(Vtb_top___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 15>& __VdtypeVar);
void Vtb_top___024root__trace_chg_dtype____1(Vtb_top___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 15>& __VdtypeVar);
void Vtb_top___024root__trace_chg_dtype____2(Vtb_top___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 32>& __VdtypeVar);
void Vtb_top___024root__trace_chg_dtype____3(Vtb_top___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 32>& __VdtypeVar);

void Vtb_top___024root__trace_chg_0_sub_0(Vtb_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_chg_0_sub_0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        Vtb_top___024root__trace_chg_dtype____0(vlSelf, bufp, 0, vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        Vtb_top___024root__trace_chg_dtype____1(vlSelf, bufp, 15, vlSelfRef.tb_top__DOT__instruction_memory);
        bufp->chgIData(oldp+30,(vlSelfRef.tb_top__DOT__i),32);
        bufp->chgIData(oldp+31,(vlSelfRef.tb_top__DOT__NUM_INSTRUCTIONS),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[2U] 
                      | vlSelfRef.__Vm_traceActivity[5U])))) {
        bufp->chgCData(oldp+32,(vlSelfRef.tb_top__DOT__id_exCtrl),5);
        bufp->chgCData(oldp+33,(vlSelfRef.tb_top__DOT__id_memCtrl),4);
        bufp->chgCData(oldp+34,(vlSelfRef.tb_top__DOT__id_wbCtrl),4);
        bufp->chgBit(oldp+35,(vlSelfRef.tb_top__DOT__id_stallIF));
        bufp->chgBit(oldp+36,(vlSelfRef.tb_top__DOT__id_PCJmp));
        bufp->chgBit(oldp+37,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__linkReg));
        bufp->chgBit(oldp+38,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__signExtSel));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+39,(((IData)(4U) + vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__pc)),32);
        bufp->chgIData(oldp+40,(vlSelfRef.tb_top__DOT__if_id_pcIncr),32);
        bufp->chgCData(oldp+41,(vlSelfRef.tb_top__DOT__id_ex_regS),5);
        bufp->chgCData(oldp+42,(vlSelfRef.tb_top__DOT__id_ex_shamt_out),5);
        bufp->chgIData(oldp+43,(vlSelfRef.tb_top__DOT__id_ex_pcIncr),32);
        bufp->chgIData(oldp+44,(vlSelfRef.tb_top__DOT__id_ex_sgnExt),32);
        bufp->chgIData(oldp+45,(vlSelfRef.tb_top__DOT__id_ex_rdDataOne),32);
        bufp->chgIData(oldp+46,((vlSelfRef.tb_top__DOT__id_ex_pcIncr 
                                 + (vlSelfRef.tb_top__DOT__id_ex_sgnExt 
                                    << 2U))),32);
        bufp->chgBit(oldp+47,(vlSelfRef.tb_top__DOT__ex_mem_zeroFlag));
        bufp->chgIData(oldp+48,(vlSelfRef.tb_top__DOT__ex_mem_pcAdd),32);
        bufp->chgIData(oldp+49,(vlSelfRef.tb_top__DOT__mem_wb_memReadData),32);
        bufp->chgIData(oldp+50,(vlSelfRef.tb_top__DOT__mem_wb_aluResult),32);
        bufp->chgIData(oldp+51,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__pc),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgIData(oldp+52,(vlSelfRef.tb_top__DOT__if_id_inst),32);
        bufp->chgCData(oldp+53,((0x0000001fU & (vlSelfRef.tb_top__DOT__if_id_inst 
                                                >> 0x00000010U))),5);
        bufp->chgCData(oldp+54,((0x0000001fU & (vlSelfRef.tb_top__DOT__if_id_inst 
                                                >> 0x00000015U))),5);
        bufp->chgCData(oldp+55,((0x0000001fU & (vlSelfRef.tb_top__DOT__if_id_inst 
                                                >> 6U))),5);
        bufp->chgBit(oldp+56,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__PCWrite));
        bufp->chgCData(oldp+57,(vlSelfRef.tb_top__DOT__id_ex_regT),5);
        bufp->chgCData(oldp+58,(vlSelfRef.tb_top__DOT__id_ex_regD),5);
        bufp->chgCData(oldp+59,(vlSelfRef.tb_top__DOT__id_ex_exCtrl),5);
        bufp->chgCData(oldp+60,(vlSelfRef.tb_top__DOT__id_ex_memCtrl),4);
        bufp->chgCData(oldp+61,(vlSelfRef.tb_top__DOT__id_ex_wbCtrl),4);
        bufp->chgIData(oldp+62,(vlSelfRef.tb_top__DOT__id_ex_rdDataTwo),32);
        bufp->chgCData(oldp+63,(((8U & (IData)(vlSelfRef.tb_top__DOT__id_ex_exCtrl))
                                  ? (IData)(vlSelfRef.tb_top__DOT__id_ex_regD)
                                  : (IData)(vlSelfRef.tb_top__DOT__id_ex_regT))),5);
        bufp->chgBit(oldp+64,((0U == vlSelfRef.tb_top__DOT__ex_aluResult)));
        bufp->chgBit(oldp+65,(vlSelfRef.tb_top__DOT__ex_overflowFlag));
        bufp->chgIData(oldp+66,(vlSelfRef.tb_top__DOT__ex_aluResult),32);
        bufp->chgCData(oldp+67,(vlSelfRef.tb_top__DOT__ex_mem_regDst),5);
        bufp->chgCData(oldp+68,(vlSelfRef.tb_top__DOT__ex_mem_memCtrl),4);
        bufp->chgCData(oldp+69,(vlSelfRef.tb_top__DOT__ex_mem_wbCtrl),4);
        bufp->chgIData(oldp+70,(vlSelfRef.tb_top__DOT__ex_mem_aluResult),32);
        bufp->chgIData(oldp+71,(vlSelfRef.tb_top__DOT__ex_mem_rdDataTwo),32);
        bufp->chgCData(oldp+72,(vlSelfRef.tb_top__DOT__mem_wb_wbCtrl),4);
        bufp->chgCData(oldp+73,(vlSelfRef.tb_top__DOT__mem_wb_regDst),5);
        bufp->chgBit(oldp+74,((1U & ((IData)(vlSelfRef.tb_top__DOT__mem_wb_wbCtrl) 
                                     >> 1U))));
        bufp->chgIData(oldp+75,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__wr_data),32);
        bufp->chgBit(oldp+76,((1U & ((IData)(vlSelfRef.tb_top__DOT__ex_mem_wbCtrl) 
                                     >> 1U))));
        bufp->chgCData(oldp+77,(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__forwardA),2);
        bufp->chgCData(oldp+78,(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__forwardB),2);
        bufp->chgCData(oldp+79,(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl),4);
        bufp->chgIData(oldp+80,(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_a),32);
        bufp->chgIData(oldp+81,(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_in_b),32);
        bufp->chgQData(oldp+82,(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__result_extended),33);
        bufp->chgBit(oldp+84,((1U & (IData)(vlSelfRef.tb_top__DOT__id_ex_memCtrl))));
        bufp->chgBit(oldp+85,((1U & ((IData)(vlSelfRef.tb_top__DOT__ex_mem_memCtrl) 
                                     >> 1U))));
        bufp->chgBit(oldp+86,((1U & (IData)(vlSelfRef.tb_top__DOT__ex_mem_memCtrl))));
        bufp->chgIData(oldp+87,(vlSelfRef.tb_top__DOT__top_00__DOT__wb_top__DOT__tempMemData),32);
    }
    bufp->chgBit(oldp+88,(vlSelfRef.tb_top__DOT__clk));
    bufp->chgBit(oldp+89,(vlSelfRef.tb_top__DOT__rst));
    bufp->chgIData(oldp+90,((vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory
                             [(0x0000000fU & (vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__pc 
                                              >> 2U))] 
                             & (- (IData)(((~ (IData)(vlSelfRef.tb_top__DOT__rst)) 
                                           & (0x0eU 
                                              >= (0x0000000fU 
                                                  & (vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__pc 
                                                     >> 2U)))))))),32);
    bufp->chgCData(oldp+91,((0x0000001fU & ((vlSelfRef.tb_top__DOT__if_id_inst 
                                             >> 0x0000000bU) 
                                            | (- (IData)((IData)(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__linkReg)))))),5);
    bufp->chgIData(oldp+92,(((((- (IData)((1U & (vlSelfRef.tb_top__DOT__if_id_inst 
                                                 >> 0x0000000fU)))) 
                               & (- (IData)((IData)(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__signExtSel)))) 
                              << 0x00000010U) | (0x0000ffffU 
                                                 & vlSelfRef.tb_top__DOT__if_id_inst))),32);
    bufp->chgIData(oldp+93,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__rd_data_one),32);
    bufp->chgIData(oldp+94,(((IData)(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__linkReg)
                              ? 4U : vlSelfRef.tb_top__DOT__reg_file_debug
                             [(0x0000001fU & (vlSelfRef.tb_top__DOT__if_id_inst 
                                              >> 0x00000010U))])),32);
    Vtb_top___024root__trace_chg_dtype____2(vlSelf, bufp, 95, vlSelfRef.tb_top__DOT__reg_file_debug);
    bufp->chgIData(oldp+127,(((8U == (0x0000003fU & vlSelfRef.tb_top__DOT__if_id_inst))
                               ? vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__rd_data_one
                               : (0x03ffffffU & vlSelfRef.tb_top__DOT__if_id_inst))),32);
    bufp->chgBit(oldp+128,((1U & (((IData)(vlSelfRef.tb_top__DOT__ex_mem_memCtrl) 
                                   >> 2U) & ((IData)(vlSelfRef.tb_top__DOT__ex_mem_zeroFlag) 
                                             | ((IData)(vlSelfRef.tb_top__DOT__ex_mem_memCtrl) 
                                                >> 3U))))));
    bufp->chgIData(oldp+129,((vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory
                              [(0x0000001fU & (vlSelfRef.tb_top__DOT__ex_mem_aluResult 
                                               >> 2U))] 
                              & (- (IData)((1U & (IData)(vlSelfRef.tb_top__DOT__ex_mem_memCtrl)))))),32);
    bufp->chgIData(oldp+130,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__i),32);
    Vtb_top___024root__trace_chg_dtype____3(vlSelf, bufp, 131, vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory);
}

void Vtb_top___024root__trace_chg_dtype____0(Vtb_top___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 15>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_chg_dtype____0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
}

void Vtb_top___024root__trace_chg_dtype____1(Vtb_top___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 15>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_chg_dtype____1\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[14]),32);
    bufp->chgIData(oldp+1,(__VdtypeVar[13]),32);
    bufp->chgIData(oldp+2,(__VdtypeVar[12]),32);
    bufp->chgIData(oldp+3,(__VdtypeVar[11]),32);
    bufp->chgIData(oldp+4,(__VdtypeVar[10]),32);
    bufp->chgIData(oldp+5,(__VdtypeVar[9]),32);
    bufp->chgIData(oldp+6,(__VdtypeVar[8]),32);
    bufp->chgIData(oldp+7,(__VdtypeVar[7]),32);
    bufp->chgIData(oldp+8,(__VdtypeVar[6]),32);
    bufp->chgIData(oldp+9,(__VdtypeVar[5]),32);
    bufp->chgIData(oldp+10,(__VdtypeVar[4]),32);
    bufp->chgIData(oldp+11,(__VdtypeVar[3]),32);
    bufp->chgIData(oldp+12,(__VdtypeVar[2]),32);
    bufp->chgIData(oldp+13,(__VdtypeVar[1]),32);
    bufp->chgIData(oldp+14,(__VdtypeVar[0]),32);
}

void Vtb_top___024root__trace_chg_dtype____2(Vtb_top___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 32>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_chg_dtype____2\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vtb_top___024root__trace_chg_dtype____3(Vtb_top___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 32>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_chg_dtype____3\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vtb_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_cleanup\n"); );
    // Body
    Vtb_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_top___024root*>(voidSelf);
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
