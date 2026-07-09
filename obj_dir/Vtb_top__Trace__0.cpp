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

void Vtb_top___024root__trace_chg_0_sub_0(Vtb_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_chg_0_sub_0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[0]),32);
        bufp->chgIData(oldp+1,(vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[1]),32);
        bufp->chgIData(oldp+2,(vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[2]),32);
        bufp->chgIData(oldp+3,(vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[3]),32);
        bufp->chgIData(oldp+4,(vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[4]),32);
        bufp->chgIData(oldp+5,(vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[5]),32);
        bufp->chgIData(oldp+6,(vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[6]),32);
        bufp->chgIData(oldp+7,(vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[7]),32);
        bufp->chgIData(oldp+8,(vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[8]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[9]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[10]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[11]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[12]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[13]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[14]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[15]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[16]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[17]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[18]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[19]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[20]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[21]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[22]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[23]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[24]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[25]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[26]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[27]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[28]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[29]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[30]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[31]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[0]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[1]),32);
        bufp->chgIData(oldp+34,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[2]),32);
        bufp->chgIData(oldp+35,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[3]),32);
        bufp->chgIData(oldp+36,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[4]),32);
        bufp->chgIData(oldp+37,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[5]),32);
        bufp->chgIData(oldp+38,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[6]),32);
        bufp->chgIData(oldp+39,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[7]),32);
        bufp->chgIData(oldp+40,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[8]),32);
        bufp->chgIData(oldp+41,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[9]),32);
        bufp->chgIData(oldp+42,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[10]),32);
        bufp->chgIData(oldp+43,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[11]),32);
        bufp->chgIData(oldp+44,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[12]),32);
        bufp->chgIData(oldp+45,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[13]),32);
        bufp->chgIData(oldp+46,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[14]),32);
        bufp->chgIData(oldp+47,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[15]),32);
        bufp->chgIData(oldp+48,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[16]),32);
        bufp->chgIData(oldp+49,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[17]),32);
        bufp->chgIData(oldp+50,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[18]),32);
        bufp->chgIData(oldp+51,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[19]),32);
        bufp->chgIData(oldp+52,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[20]),32);
        bufp->chgIData(oldp+53,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[21]),32);
        bufp->chgIData(oldp+54,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[22]),32);
        bufp->chgIData(oldp+55,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[23]),32);
        bufp->chgIData(oldp+56,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[24]),32);
        bufp->chgIData(oldp+57,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[25]),32);
        bufp->chgIData(oldp+58,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[26]),32);
        bufp->chgIData(oldp+59,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[27]),32);
        bufp->chgIData(oldp+60,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[28]),32);
        bufp->chgIData(oldp+61,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[29]),32);
        bufp->chgIData(oldp+62,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[30]),32);
        bufp->chgIData(oldp+63,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[31]),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+64,(vlSelfRef.tb_top__DOT__instruction_memory[0]),32);
        bufp->chgIData(oldp+65,(vlSelfRef.tb_top__DOT__instruction_memory[1]),32);
        bufp->chgIData(oldp+66,(vlSelfRef.tb_top__DOT__instruction_memory[2]),32);
        bufp->chgIData(oldp+67,(vlSelfRef.tb_top__DOT__instruction_memory[3]),32);
        bufp->chgIData(oldp+68,(vlSelfRef.tb_top__DOT__instruction_memory[4]),32);
        bufp->chgIData(oldp+69,(vlSelfRef.tb_top__DOT__instruction_memory[5]),32);
        bufp->chgIData(oldp+70,(vlSelfRef.tb_top__DOT__instruction_memory[6]),32);
        bufp->chgIData(oldp+71,(vlSelfRef.tb_top__DOT__instruction_memory[7]),32);
        bufp->chgIData(oldp+72,(vlSelfRef.tb_top__DOT__instruction_memory[8]),32);
        bufp->chgIData(oldp+73,(vlSelfRef.tb_top__DOT__instruction_memory[9]),32);
        bufp->chgIData(oldp+74,(vlSelfRef.tb_top__DOT__instruction_memory[10]),32);
        bufp->chgIData(oldp+75,(vlSelfRef.tb_top__DOT__instruction_memory[11]),32);
        bufp->chgIData(oldp+76,(vlSelfRef.tb_top__DOT__instruction_memory[12]),32);
        bufp->chgIData(oldp+77,(vlSelfRef.tb_top__DOT__instruction_memory[13]),32);
        bufp->chgIData(oldp+78,(vlSelfRef.tb_top__DOT__instruction_memory[14]),32);
        bufp->chgIData(oldp+79,(vlSelfRef.tb_top__DOT__instruction_memory[15]),32);
        bufp->chgIData(oldp+80,(vlSelfRef.tb_top__DOT__instruction_memory[16]),32);
        bufp->chgIData(oldp+81,(vlSelfRef.tb_top__DOT__instruction_memory[17]),32);
        bufp->chgIData(oldp+82,(vlSelfRef.tb_top__DOT__instruction_memory[18]),32);
        bufp->chgIData(oldp+83,(vlSelfRef.tb_top__DOT__instruction_memory[19]),32);
        bufp->chgIData(oldp+84,(vlSelfRef.tb_top__DOT__instruction_memory[20]),32);
        bufp->chgIData(oldp+85,(vlSelfRef.tb_top__DOT__instruction_memory[21]),32);
        bufp->chgIData(oldp+86,(vlSelfRef.tb_top__DOT__instruction_memory[22]),32);
        bufp->chgIData(oldp+87,(vlSelfRef.tb_top__DOT__instruction_memory[23]),32);
        bufp->chgIData(oldp+88,(vlSelfRef.tb_top__DOT__instruction_memory[24]),32);
        bufp->chgIData(oldp+89,(vlSelfRef.tb_top__DOT__instruction_memory[25]),32);
        bufp->chgIData(oldp+90,(vlSelfRef.tb_top__DOT__instruction_memory[26]),32);
        bufp->chgIData(oldp+91,(vlSelfRef.tb_top__DOT__instruction_memory[27]),32);
        bufp->chgIData(oldp+92,(vlSelfRef.tb_top__DOT__instruction_memory[28]),32);
        bufp->chgIData(oldp+93,(vlSelfRef.tb_top__DOT__instruction_memory[29]),32);
        bufp->chgIData(oldp+94,(vlSelfRef.tb_top__DOT__instruction_memory[30]),32);
        bufp->chgIData(oldp+95,(vlSelfRef.tb_top__DOT__instruction_memory[31]),32);
        bufp->chgIData(oldp+96,(vlSelfRef.tb_top__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+97,(((IData)(4U) + vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__pc)),32);
        bufp->chgIData(oldp+98,(vlSelfRef.tb_top__DOT__if_id_pcIncr),32);
        bufp->chgIData(oldp+99,(vlSelfRef.tb_top__DOT__if_id_inst),32);
        bufp->chgCData(oldp+100,((0x0000001fU & (vlSelfRef.tb_top__DOT__if_id_inst 
                                                 >> 0x00000010U))),5);
        bufp->chgCData(oldp+101,((0x0000001fU & (vlSelfRef.tb_top__DOT__if_id_inst 
                                                 >> 0x0000000bU))),5);
        bufp->chgCData(oldp+102,(vlSelfRef.tb_top__DOT__id_exCtrl),4);
        bufp->chgCData(oldp+103,(vlSelfRef.tb_top__DOT__id_memCtrl),3);
        bufp->chgCData(oldp+104,(vlSelfRef.tb_top__DOT__id_wbCtrl),2);
        bufp->chgIData(oldp+105,((((- (IData)((1U & 
                                               (vlSelfRef.tb_top__DOT__if_id_inst 
                                                >> 0x0000000fU)))) 
                                   << 0x00000010U) 
                                  | (0x0000ffffU & vlSelfRef.tb_top__DOT__if_id_inst))),32);
        bufp->chgCData(oldp+106,(vlSelfRef.tb_top__DOT__id_ex_regT),5);
        bufp->chgCData(oldp+107,(vlSelfRef.tb_top__DOT__id_ex_regD),5);
        bufp->chgCData(oldp+108,(vlSelfRef.tb_top__DOT__id_ex_exCtrl),4);
        bufp->chgCData(oldp+109,(vlSelfRef.tb_top__DOT__id_ex_memCtrl),3);
        bufp->chgCData(oldp+110,(vlSelfRef.tb_top__DOT__id_ex_wbCtrl),2);
        bufp->chgIData(oldp+111,(vlSelfRef.tb_top__DOT__id_ex_pcIncr),32);
        bufp->chgIData(oldp+112,(vlSelfRef.tb_top__DOT__id_ex_sgnExt),32);
        bufp->chgIData(oldp+113,(vlSelfRef.tb_top__DOT__id_ex_rdDataOne),32);
        bufp->chgIData(oldp+114,(vlSelfRef.tb_top__DOT__id_ex_rdDataTwo),32);
        bufp->chgCData(oldp+115,(((8U & (IData)(vlSelfRef.tb_top__DOT__id_ex_exCtrl))
                                   ? (IData)(vlSelfRef.tb_top__DOT__id_ex_regD)
                                   : (IData)(vlSelfRef.tb_top__DOT__id_ex_regT))),5);
        bufp->chgBit(oldp+116,((0U == vlSelfRef.tb_top__DOT__ex_aluResult)));
        bufp->chgIData(oldp+117,(vlSelfRef.tb_top__DOT__ex_aluResult),32);
        bufp->chgIData(oldp+118,((vlSelfRef.tb_top__DOT__id_ex_pcIncr 
                                  + VL_SHIFTL_III(32,32,32, vlSelfRef.tb_top__DOT__id_ex_sgnExt, 2U))),32);
        bufp->chgCData(oldp+119,(vlSelfRef.tb_top__DOT__ex_mem_regDst),5);
        bufp->chgCData(oldp+120,(vlSelfRef.tb_top__DOT__ex_mem_memCtrl),3);
        bufp->chgCData(oldp+121,(vlSelfRef.tb_top__DOT__ex_mem_wbCtrl),2);
        bufp->chgBit(oldp+122,(vlSelfRef.tb_top__DOT__ex_mem_zeroFlag));
        bufp->chgIData(oldp+123,(vlSelfRef.tb_top__DOT__ex_mem_aluResult),32);
        bufp->chgIData(oldp+124,(vlSelfRef.tb_top__DOT__ex_mem_rdDataTwo),32);
        bufp->chgIData(oldp+125,(vlSelfRef.tb_top__DOT__ex_mem_pcAdd),32);
        bufp->chgBit(oldp+126,((((IData)(vlSelfRef.tb_top__DOT__ex_mem_memCtrl) 
                                 >> 2U) & (IData)(vlSelfRef.tb_top__DOT__ex_mem_zeroFlag))));
        bufp->chgCData(oldp+127,(vlSelfRef.tb_top__DOT__mem_wb_wbCtrl),2);
        bufp->chgCData(oldp+128,(vlSelfRef.tb_top__DOT__mem_wb_regDst),5);
        bufp->chgIData(oldp+129,(vlSelfRef.tb_top__DOT__mem_wb_memReadData),32);
        bufp->chgIData(oldp+130,(vlSelfRef.tb_top__DOT__mem_wb_aluResult),32);
        bufp->chgBit(oldp+131,((1U & ((IData)(vlSelfRef.tb_top__DOT__mem_wb_wbCtrl) 
                                      >> 1U))));
        bufp->chgIData(oldp+132,(((1U & (IData)(vlSelfRef.tb_top__DOT__mem_wb_wbCtrl))
                                   ? vlSelfRef.tb_top__DOT__mem_wb_memReadData
                                   : vlSelfRef.tb_top__DOT__mem_wb_aluResult)),32);
        bufp->chgCData(oldp+133,(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl),4);
        bufp->chgIData(oldp+134,(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__in_b),32);
        bufp->chgIData(oldp+135,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__pc),32);
        bufp->chgBit(oldp+136,((1U & ((IData)(vlSelfRef.tb_top__DOT__ex_mem_memCtrl) 
                                      >> 1U))));
        bufp->chgBit(oldp+137,((1U & (IData)(vlSelfRef.tb_top__DOT__ex_mem_memCtrl))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+138,(vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[0]),32);
        bufp->chgIData(oldp+139,(vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[1]),32);
        bufp->chgIData(oldp+140,(vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[2]),32);
        bufp->chgIData(oldp+141,(vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[3]),32);
        bufp->chgIData(oldp+142,(vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[4]),32);
        bufp->chgIData(oldp+143,(vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[5]),32);
        bufp->chgIData(oldp+144,(vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[6]),32);
        bufp->chgIData(oldp+145,(vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[7]),32);
        bufp->chgIData(oldp+146,(vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[8]),32);
        bufp->chgIData(oldp+147,(vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[9]),32);
        bufp->chgIData(oldp+148,(vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[10]),32);
        bufp->chgIData(oldp+149,(vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[11]),32);
        bufp->chgIData(oldp+150,(vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[12]),32);
        bufp->chgIData(oldp+151,(vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[13]),32);
        bufp->chgIData(oldp+152,(vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[14]),32);
        bufp->chgIData(oldp+153,(vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[15]),32);
        bufp->chgIData(oldp+154,(vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[16]),32);
        bufp->chgIData(oldp+155,(vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[17]),32);
        bufp->chgIData(oldp+156,(vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[18]),32);
        bufp->chgIData(oldp+157,(vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[19]),32);
        bufp->chgIData(oldp+158,(vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[20]),32);
        bufp->chgIData(oldp+159,(vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[21]),32);
        bufp->chgIData(oldp+160,(vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[22]),32);
        bufp->chgIData(oldp+161,(vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[23]),32);
        bufp->chgIData(oldp+162,(vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[24]),32);
        bufp->chgIData(oldp+163,(vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[25]),32);
        bufp->chgIData(oldp+164,(vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[26]),32);
        bufp->chgIData(oldp+165,(vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[27]),32);
        bufp->chgIData(oldp+166,(vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[28]),32);
        bufp->chgIData(oldp+167,(vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[29]),32);
        bufp->chgIData(oldp+168,(vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[30]),32);
        bufp->chgIData(oldp+169,(vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[31]),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgIData(oldp+170,(vlSelfRef.tb_top__DOT__reg_file_debug[0]),32);
        bufp->chgIData(oldp+171,(vlSelfRef.tb_top__DOT__reg_file_debug[1]),32);
        bufp->chgIData(oldp+172,(vlSelfRef.tb_top__DOT__reg_file_debug[2]),32);
        bufp->chgIData(oldp+173,(vlSelfRef.tb_top__DOT__reg_file_debug[3]),32);
        bufp->chgIData(oldp+174,(vlSelfRef.tb_top__DOT__reg_file_debug[4]),32);
        bufp->chgIData(oldp+175,(vlSelfRef.tb_top__DOT__reg_file_debug[5]),32);
        bufp->chgIData(oldp+176,(vlSelfRef.tb_top__DOT__reg_file_debug[6]),32);
        bufp->chgIData(oldp+177,(vlSelfRef.tb_top__DOT__reg_file_debug[7]),32);
        bufp->chgIData(oldp+178,(vlSelfRef.tb_top__DOT__reg_file_debug[8]),32);
        bufp->chgIData(oldp+179,(vlSelfRef.tb_top__DOT__reg_file_debug[9]),32);
        bufp->chgIData(oldp+180,(vlSelfRef.tb_top__DOT__reg_file_debug[10]),32);
        bufp->chgIData(oldp+181,(vlSelfRef.tb_top__DOT__reg_file_debug[11]),32);
        bufp->chgIData(oldp+182,(vlSelfRef.tb_top__DOT__reg_file_debug[12]),32);
        bufp->chgIData(oldp+183,(vlSelfRef.tb_top__DOT__reg_file_debug[13]),32);
        bufp->chgIData(oldp+184,(vlSelfRef.tb_top__DOT__reg_file_debug[14]),32);
        bufp->chgIData(oldp+185,(vlSelfRef.tb_top__DOT__reg_file_debug[15]),32);
        bufp->chgIData(oldp+186,(vlSelfRef.tb_top__DOT__reg_file_debug[16]),32);
        bufp->chgIData(oldp+187,(vlSelfRef.tb_top__DOT__reg_file_debug[17]),32);
        bufp->chgIData(oldp+188,(vlSelfRef.tb_top__DOT__reg_file_debug[18]),32);
        bufp->chgIData(oldp+189,(vlSelfRef.tb_top__DOT__reg_file_debug[19]),32);
        bufp->chgIData(oldp+190,(vlSelfRef.tb_top__DOT__reg_file_debug[20]),32);
        bufp->chgIData(oldp+191,(vlSelfRef.tb_top__DOT__reg_file_debug[21]),32);
        bufp->chgIData(oldp+192,(vlSelfRef.tb_top__DOT__reg_file_debug[22]),32);
        bufp->chgIData(oldp+193,(vlSelfRef.tb_top__DOT__reg_file_debug[23]),32);
        bufp->chgIData(oldp+194,(vlSelfRef.tb_top__DOT__reg_file_debug[24]),32);
        bufp->chgIData(oldp+195,(vlSelfRef.tb_top__DOT__reg_file_debug[25]),32);
        bufp->chgIData(oldp+196,(vlSelfRef.tb_top__DOT__reg_file_debug[26]),32);
        bufp->chgIData(oldp+197,(vlSelfRef.tb_top__DOT__reg_file_debug[27]),32);
        bufp->chgIData(oldp+198,(vlSelfRef.tb_top__DOT__reg_file_debug[28]),32);
        bufp->chgIData(oldp+199,(vlSelfRef.tb_top__DOT__reg_file_debug[29]),32);
        bufp->chgIData(oldp+200,(vlSelfRef.tb_top__DOT__reg_file_debug[30]),32);
        bufp->chgIData(oldp+201,(vlSelfRef.tb_top__DOT__reg_file_debug[31]),32);
        bufp->chgIData(oldp+202,(vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[0]),32);
        bufp->chgIData(oldp+203,(vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[1]),32);
        bufp->chgIData(oldp+204,(vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[2]),32);
        bufp->chgIData(oldp+205,(vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[3]),32);
        bufp->chgIData(oldp+206,(vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[4]),32);
        bufp->chgIData(oldp+207,(vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[5]),32);
        bufp->chgIData(oldp+208,(vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[6]),32);
        bufp->chgIData(oldp+209,(vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[7]),32);
        bufp->chgIData(oldp+210,(vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[8]),32);
        bufp->chgIData(oldp+211,(vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[9]),32);
        bufp->chgIData(oldp+212,(vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[10]),32);
        bufp->chgIData(oldp+213,(vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[11]),32);
        bufp->chgIData(oldp+214,(vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[12]),32);
        bufp->chgIData(oldp+215,(vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[13]),32);
        bufp->chgIData(oldp+216,(vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[14]),32);
        bufp->chgIData(oldp+217,(vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[15]),32);
        bufp->chgIData(oldp+218,(vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[16]),32);
        bufp->chgIData(oldp+219,(vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[17]),32);
        bufp->chgIData(oldp+220,(vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[18]),32);
        bufp->chgIData(oldp+221,(vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[19]),32);
        bufp->chgIData(oldp+222,(vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[20]),32);
        bufp->chgIData(oldp+223,(vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[21]),32);
        bufp->chgIData(oldp+224,(vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[22]),32);
        bufp->chgIData(oldp+225,(vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[23]),32);
        bufp->chgIData(oldp+226,(vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[24]),32);
        bufp->chgIData(oldp+227,(vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[25]),32);
        bufp->chgIData(oldp+228,(vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[26]),32);
        bufp->chgIData(oldp+229,(vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[27]),32);
        bufp->chgIData(oldp+230,(vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[28]),32);
        bufp->chgIData(oldp+231,(vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[29]),32);
        bufp->chgIData(oldp+232,(vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[30]),32);
        bufp->chgIData(oldp+233,(vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[31]),32);
        bufp->chgIData(oldp+234,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[0]),32);
        bufp->chgIData(oldp+235,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[1]),32);
        bufp->chgIData(oldp+236,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[2]),32);
        bufp->chgIData(oldp+237,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[3]),32);
        bufp->chgIData(oldp+238,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[4]),32);
        bufp->chgIData(oldp+239,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[5]),32);
        bufp->chgIData(oldp+240,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[6]),32);
        bufp->chgIData(oldp+241,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[7]),32);
        bufp->chgIData(oldp+242,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[8]),32);
        bufp->chgIData(oldp+243,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[9]),32);
        bufp->chgIData(oldp+244,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[10]),32);
        bufp->chgIData(oldp+245,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[11]),32);
        bufp->chgIData(oldp+246,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[12]),32);
        bufp->chgIData(oldp+247,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[13]),32);
        bufp->chgIData(oldp+248,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[14]),32);
        bufp->chgIData(oldp+249,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[15]),32);
        bufp->chgIData(oldp+250,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[16]),32);
        bufp->chgIData(oldp+251,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[17]),32);
        bufp->chgIData(oldp+252,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[18]),32);
        bufp->chgIData(oldp+253,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[19]),32);
        bufp->chgIData(oldp+254,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[20]),32);
        bufp->chgIData(oldp+255,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[21]),32);
        bufp->chgIData(oldp+256,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[22]),32);
        bufp->chgIData(oldp+257,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[23]),32);
        bufp->chgIData(oldp+258,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[24]),32);
        bufp->chgIData(oldp+259,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[25]),32);
        bufp->chgIData(oldp+260,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[26]),32);
        bufp->chgIData(oldp+261,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[27]),32);
        bufp->chgIData(oldp+262,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[28]),32);
        bufp->chgIData(oldp+263,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[29]),32);
        bufp->chgIData(oldp+264,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[30]),32);
        bufp->chgIData(oldp+265,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[31]),32);
    }
    bufp->chgBit(oldp+266,(vlSelfRef.tb_top__DOT__clk));
    bufp->chgBit(oldp+267,(vlSelfRef.tb_top__DOT__rst));
    bufp->chgIData(oldp+268,(((IData)(vlSelfRef.tb_top__DOT__rst)
                               ? 0U : vlSelfRef.tb_top__DOT__instruction_memory
                              [(0x0000001fU & (vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__pc 
                                               >> 2U))])),32);
    bufp->chgIData(oldp+269,(vlSelfRef.tb_top__DOT__reg_file_debug
                             [(0x0000001fU & (vlSelfRef.tb_top__DOT__if_id_inst 
                                              >> 0x00000015U))]),32);
    bufp->chgIData(oldp+270,(vlSelfRef.tb_top__DOT__reg_file_debug
                             [(0x0000001fU & (vlSelfRef.tb_top__DOT__if_id_inst 
                                              >> 0x00000010U))]),32);
    bufp->chgIData(oldp+271,(((1U & (IData)(vlSelfRef.tb_top__DOT__ex_mem_memCtrl))
                               ? vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory
                              [(0x0000001fU & (vlSelfRef.tb_top__DOT__ex_mem_aluResult 
                                               >> 2U))]
                               : 0U)),32);
    bufp->chgIData(oldp+272,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__i),32);
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
}
