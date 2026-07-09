// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_top__Syms.h"


VL_ATTR_COLD void Vtb_top___024root__trace_init_sub__TOP__0(Vtb_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_init_sub__TOP__0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("tb_top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+273,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+274,0,"CLK_PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+273,0,"NUM_INSTRUCTIONS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+266,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("instruction_memory", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+64+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+96,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+97,0,"if_pc_pp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+268,0,"if_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+98,0,"if_id_pcIncr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"if_id_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"id_regT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+101,0,"id_regD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+102,0,"id_exCtrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+103,0,"id_memCtrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+104,0,"id_wbCtrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+98,0,"id_pcIncr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"id_sgnExt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+269,0,"id_rdDataOne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+270,0,"id_rdDataTwo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("reg_file_debug", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+170+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+106,0,"id_ex_regT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+107,0,"id_ex_regD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+108,0,"id_ex_exCtrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+109,0,"id_ex_memCtrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+110,0,"id_ex_wbCtrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+111,0,"id_ex_pcIncr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,0,"id_ex_sgnExt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"id_ex_rdDataOne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"id_ex_rdDataTwo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+115,0,"ex_regDst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+109,0,"ex_memCtrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+110,0,"ex_wbCtrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+116,0,"ex_zeroFlag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+117,0,"ex_aluResult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"ex_rdDataTwo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"ex_pcAdd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"ex_mem_regDst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+120,0,"ex_mem_memCtrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+121,0,"ex_mem_wbCtrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+122,0,"ex_mem_zeroFlag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+123,0,"ex_mem_aluResult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"ex_mem_rdDataTwo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"ex_mem_pcAdd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+126,0,"mem_branchFlag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+125,0,"mem_branchAddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"mem_wbCtrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+119,0,"mem_regDst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+271,0,"mem_memReadData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+123,0,"mem_aluResult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+127,0,"mem_wb_wbCtrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+128,0,"mem_wb_regDst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+129,0,"mem_wb_memReadData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+130,0,"mem_wb_aluResult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+131,0,"wb_regWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+128,0,"wb_regDst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+132,0,"wb_regData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("top_00", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+273,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+266,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("if_instruction_memory", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+0+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+97,0,"if_pc_pp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+268,0,"if_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+98,0,"if_id_pcIncr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"if_id_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"id_regT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+101,0,"id_regD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+102,0,"id_exCtrl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+103,0,"id_memCtrl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+104,0,"id_wbCtrl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+98,0,"id_pcIncr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"id_sgnExt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+269,0,"id_rdDataOne",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+270,0,"id_rdDataTwo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("reg_file_debug", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+202+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+106,0,"id_ex_regT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+107,0,"id_ex_regD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+108,0,"id_ex_exCtrl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+109,0,"id_ex_memCtrl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+110,0,"id_ex_wbCtrl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+111,0,"id_ex_pcIncr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,0,"id_ex_sgnExt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"id_ex_rdDataOne",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"id_ex_rdDataTwo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+115,0,"ex_regDst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+109,0,"ex_memCtrl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+110,0,"ex_wbCtrl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+116,0,"ex_zeroFlag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+117,0,"ex_aluResult",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"ex_rdDataTwo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"ex_pcAdd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"ex_mem_regDst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+120,0,"ex_mem_memCtrl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+121,0,"ex_mem_wbCtrl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+122,0,"ex_mem_zeroFlag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+123,0,"ex_mem_aluResult",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"ex_mem_rdDataTwo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"ex_mem_pcAdd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+126,0,"mem_branchFlag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+125,0,"mem_branchAddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"mem_wbCtrl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+119,0,"mem_regDst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+271,0,"mem_memReadData",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+123,0,"mem_aluResult",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+127,0,"mem_wb_wbCtrl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+128,0,"mem_wb_regDst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+129,0,"mem_wb_memReadData",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+130,0,"mem_wb_aluResult",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+131,0,"wb_regWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+128,0,"wb_regDst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+132,0,"wb_regData",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("ex_top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+273,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"ex_ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+109,0,"mem_ctrl_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+110,0,"wb_ctrl_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+111,0,"pc_incr_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,0,"sgn_extend_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"rd_data_one",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"rd_data_two_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+107,0,"rd_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+106,0,"rt_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+109,0,"mem_ctrl_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+110,0,"wb_ctrl_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+118,0,"pc_slt_add",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"alu_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"rd_data_two_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+116,0,"zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+115,0,"reg_dst_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+133,0,"alu_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("alu_00", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+273,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"in_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+134,0,"in_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+133,0,"alu_opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+116,0,"zero_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+117,0,"alu_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("id_top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+273,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+266,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+99,0,"if_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+98,0,"pc_incr_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"wr_reg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+132,0,"wr_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+131,0,"RegWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+102,0,"ex_ctrl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+103,0,"mem_ctrl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+104,0,"wb_ctrl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+98,0,"pc_incr_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"sgn_extend_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+269,0,"rd_data_one",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+270,0,"rd_data_two",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"rd_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+100,0,"rt_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("register_file", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+234+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+272,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("if_top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+273,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+266,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("instruction_memory", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+32+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+126,0,"PCSrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+125,0,"pc_br",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+97,0,"pc_pp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+268,0,"inst_mem_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+135,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mem_top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+273,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+266,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"zero_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+120,0,"mem_ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+121,0,"wb_ctrl_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+123,0,"alu_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"rd_data_two_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"pc_slt_add",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"reg_dst_mux",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+126,0,"branch_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+271,0,"mem_read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"branch_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+123,0,"alu_result_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"wb_ctrl_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+119,0,"wr_reg_dest_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("dmem_00", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+273,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+266,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"wr_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+123,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"wr_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+271,0,"rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("data_memory", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+138+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("wb_top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+273,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+129,0,"mem_read_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+130,0,"alu_result_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+127,0,"wb_ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+128,0,"wr_reg_dest_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+128,0,"wr_reg_dest_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+132,0,"wr_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+131,0,"RegWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_top___024root__trace_init_top(Vtb_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_init_top\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_top___024root__trace_register(Vtb_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_register\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_top___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtb_top___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtb_top___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtb_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_top___024root__trace_const_0_sub_0(Vtb_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_const_0\n"); );
    // Body
    Vtb_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_top___024root*>(voidSelf);
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_top___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_top___024root__trace_const_0_sub_0(Vtb_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_const_0_sub_0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+273,(0x00000020U),32);
    bufp->fullIData(oldp+274,(0x0000000aU),32);
}

VL_ATTR_COLD void Vtb_top___024root__trace_full_0_sub_0(Vtb_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_full_0\n"); );
    // Body
    Vtb_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_top___024root*>(voidSelf);
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_top___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_top___024root__trace_full_0_sub_0(Vtb_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_full_0_sub_0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+0,(vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[0]),32);
    bufp->fullIData(oldp+1,(vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[1]),32);
    bufp->fullIData(oldp+2,(vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[2]),32);
    bufp->fullIData(oldp+3,(vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[3]),32);
    bufp->fullIData(oldp+4,(vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[4]),32);
    bufp->fullIData(oldp+5,(vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[5]),32);
    bufp->fullIData(oldp+6,(vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[6]),32);
    bufp->fullIData(oldp+7,(vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[7]),32);
    bufp->fullIData(oldp+8,(vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[8]),32);
    bufp->fullIData(oldp+9,(vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[9]),32);
    bufp->fullIData(oldp+10,(vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[10]),32);
    bufp->fullIData(oldp+11,(vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[11]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[12]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[13]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[14]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[15]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[16]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[17]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[18]),32);
    bufp->fullIData(oldp+19,(vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[19]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[20]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[21]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[22]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[23]),32);
    bufp->fullIData(oldp+24,(vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[24]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[25]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[26]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[27]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[28]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[29]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[30]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[31]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[0]),32);
    bufp->fullIData(oldp+33,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[1]),32);
    bufp->fullIData(oldp+34,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[2]),32);
    bufp->fullIData(oldp+35,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[3]),32);
    bufp->fullIData(oldp+36,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[4]),32);
    bufp->fullIData(oldp+37,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[5]),32);
    bufp->fullIData(oldp+38,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[6]),32);
    bufp->fullIData(oldp+39,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[7]),32);
    bufp->fullIData(oldp+40,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[8]),32);
    bufp->fullIData(oldp+41,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[9]),32);
    bufp->fullIData(oldp+42,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[10]),32);
    bufp->fullIData(oldp+43,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[11]),32);
    bufp->fullIData(oldp+44,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[12]),32);
    bufp->fullIData(oldp+45,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[13]),32);
    bufp->fullIData(oldp+46,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[14]),32);
    bufp->fullIData(oldp+47,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[15]),32);
    bufp->fullIData(oldp+48,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[16]),32);
    bufp->fullIData(oldp+49,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[17]),32);
    bufp->fullIData(oldp+50,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[18]),32);
    bufp->fullIData(oldp+51,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[19]),32);
    bufp->fullIData(oldp+52,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[20]),32);
    bufp->fullIData(oldp+53,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[21]),32);
    bufp->fullIData(oldp+54,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[22]),32);
    bufp->fullIData(oldp+55,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[23]),32);
    bufp->fullIData(oldp+56,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[24]),32);
    bufp->fullIData(oldp+57,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[25]),32);
    bufp->fullIData(oldp+58,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[26]),32);
    bufp->fullIData(oldp+59,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[27]),32);
    bufp->fullIData(oldp+60,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[28]),32);
    bufp->fullIData(oldp+61,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[29]),32);
    bufp->fullIData(oldp+62,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[30]),32);
    bufp->fullIData(oldp+63,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[31]),32);
    bufp->fullIData(oldp+64,(vlSelfRef.tb_top__DOT__instruction_memory[0]),32);
    bufp->fullIData(oldp+65,(vlSelfRef.tb_top__DOT__instruction_memory[1]),32);
    bufp->fullIData(oldp+66,(vlSelfRef.tb_top__DOT__instruction_memory[2]),32);
    bufp->fullIData(oldp+67,(vlSelfRef.tb_top__DOT__instruction_memory[3]),32);
    bufp->fullIData(oldp+68,(vlSelfRef.tb_top__DOT__instruction_memory[4]),32);
    bufp->fullIData(oldp+69,(vlSelfRef.tb_top__DOT__instruction_memory[5]),32);
    bufp->fullIData(oldp+70,(vlSelfRef.tb_top__DOT__instruction_memory[6]),32);
    bufp->fullIData(oldp+71,(vlSelfRef.tb_top__DOT__instruction_memory[7]),32);
    bufp->fullIData(oldp+72,(vlSelfRef.tb_top__DOT__instruction_memory[8]),32);
    bufp->fullIData(oldp+73,(vlSelfRef.tb_top__DOT__instruction_memory[9]),32);
    bufp->fullIData(oldp+74,(vlSelfRef.tb_top__DOT__instruction_memory[10]),32);
    bufp->fullIData(oldp+75,(vlSelfRef.tb_top__DOT__instruction_memory[11]),32);
    bufp->fullIData(oldp+76,(vlSelfRef.tb_top__DOT__instruction_memory[12]),32);
    bufp->fullIData(oldp+77,(vlSelfRef.tb_top__DOT__instruction_memory[13]),32);
    bufp->fullIData(oldp+78,(vlSelfRef.tb_top__DOT__instruction_memory[14]),32);
    bufp->fullIData(oldp+79,(vlSelfRef.tb_top__DOT__instruction_memory[15]),32);
    bufp->fullIData(oldp+80,(vlSelfRef.tb_top__DOT__instruction_memory[16]),32);
    bufp->fullIData(oldp+81,(vlSelfRef.tb_top__DOT__instruction_memory[17]),32);
    bufp->fullIData(oldp+82,(vlSelfRef.tb_top__DOT__instruction_memory[18]),32);
    bufp->fullIData(oldp+83,(vlSelfRef.tb_top__DOT__instruction_memory[19]),32);
    bufp->fullIData(oldp+84,(vlSelfRef.tb_top__DOT__instruction_memory[20]),32);
    bufp->fullIData(oldp+85,(vlSelfRef.tb_top__DOT__instruction_memory[21]),32);
    bufp->fullIData(oldp+86,(vlSelfRef.tb_top__DOT__instruction_memory[22]),32);
    bufp->fullIData(oldp+87,(vlSelfRef.tb_top__DOT__instruction_memory[23]),32);
    bufp->fullIData(oldp+88,(vlSelfRef.tb_top__DOT__instruction_memory[24]),32);
    bufp->fullIData(oldp+89,(vlSelfRef.tb_top__DOT__instruction_memory[25]),32);
    bufp->fullIData(oldp+90,(vlSelfRef.tb_top__DOT__instruction_memory[26]),32);
    bufp->fullIData(oldp+91,(vlSelfRef.tb_top__DOT__instruction_memory[27]),32);
    bufp->fullIData(oldp+92,(vlSelfRef.tb_top__DOT__instruction_memory[28]),32);
    bufp->fullIData(oldp+93,(vlSelfRef.tb_top__DOT__instruction_memory[29]),32);
    bufp->fullIData(oldp+94,(vlSelfRef.tb_top__DOT__instruction_memory[30]),32);
    bufp->fullIData(oldp+95,(vlSelfRef.tb_top__DOT__instruction_memory[31]),32);
    bufp->fullIData(oldp+96,(vlSelfRef.tb_top__DOT__i),32);
    bufp->fullIData(oldp+97,(((IData)(4U) + vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__pc)),32);
    bufp->fullIData(oldp+98,(vlSelfRef.tb_top__DOT__if_id_pcIncr),32);
    bufp->fullIData(oldp+99,(vlSelfRef.tb_top__DOT__if_id_inst),32);
    bufp->fullCData(oldp+100,((0x0000001fU & (vlSelfRef.tb_top__DOT__if_id_inst 
                                              >> 0x00000010U))),5);
    bufp->fullCData(oldp+101,((0x0000001fU & (vlSelfRef.tb_top__DOT__if_id_inst 
                                              >> 0x0000000bU))),5);
    bufp->fullCData(oldp+102,(vlSelfRef.tb_top__DOT__id_exCtrl),4);
    bufp->fullCData(oldp+103,(vlSelfRef.tb_top__DOT__id_memCtrl),3);
    bufp->fullCData(oldp+104,(vlSelfRef.tb_top__DOT__id_wbCtrl),2);
    bufp->fullIData(oldp+105,((((- (IData)((1U & (vlSelfRef.tb_top__DOT__if_id_inst 
                                                  >> 0x0000000fU)))) 
                                << 0x00000010U) | (0x0000ffffU 
                                                   & vlSelfRef.tb_top__DOT__if_id_inst))),32);
    bufp->fullCData(oldp+106,(vlSelfRef.tb_top__DOT__id_ex_regT),5);
    bufp->fullCData(oldp+107,(vlSelfRef.tb_top__DOT__id_ex_regD),5);
    bufp->fullCData(oldp+108,(vlSelfRef.tb_top__DOT__id_ex_exCtrl),4);
    bufp->fullCData(oldp+109,(vlSelfRef.tb_top__DOT__id_ex_memCtrl),3);
    bufp->fullCData(oldp+110,(vlSelfRef.tb_top__DOT__id_ex_wbCtrl),2);
    bufp->fullIData(oldp+111,(vlSelfRef.tb_top__DOT__id_ex_pcIncr),32);
    bufp->fullIData(oldp+112,(vlSelfRef.tb_top__DOT__id_ex_sgnExt),32);
    bufp->fullIData(oldp+113,(vlSelfRef.tb_top__DOT__id_ex_rdDataOne),32);
    bufp->fullIData(oldp+114,(vlSelfRef.tb_top__DOT__id_ex_rdDataTwo),32);
    bufp->fullCData(oldp+115,(((8U & (IData)(vlSelfRef.tb_top__DOT__id_ex_exCtrl))
                                ? (IData)(vlSelfRef.tb_top__DOT__id_ex_regD)
                                : (IData)(vlSelfRef.tb_top__DOT__id_ex_regT))),5);
    bufp->fullBit(oldp+116,((0U == vlSelfRef.tb_top__DOT__ex_aluResult)));
    bufp->fullIData(oldp+117,(vlSelfRef.tb_top__DOT__ex_aluResult),32);
    bufp->fullIData(oldp+118,((vlSelfRef.tb_top__DOT__id_ex_pcIncr 
                               + VL_SHIFTL_III(32,32,32, vlSelfRef.tb_top__DOT__id_ex_sgnExt, 2U))),32);
    bufp->fullCData(oldp+119,(vlSelfRef.tb_top__DOT__ex_mem_regDst),5);
    bufp->fullCData(oldp+120,(vlSelfRef.tb_top__DOT__ex_mem_memCtrl),3);
    bufp->fullCData(oldp+121,(vlSelfRef.tb_top__DOT__ex_mem_wbCtrl),2);
    bufp->fullBit(oldp+122,(vlSelfRef.tb_top__DOT__ex_mem_zeroFlag));
    bufp->fullIData(oldp+123,(vlSelfRef.tb_top__DOT__ex_mem_aluResult),32);
    bufp->fullIData(oldp+124,(vlSelfRef.tb_top__DOT__ex_mem_rdDataTwo),32);
    bufp->fullIData(oldp+125,(vlSelfRef.tb_top__DOT__ex_mem_pcAdd),32);
    bufp->fullBit(oldp+126,((((IData)(vlSelfRef.tb_top__DOT__ex_mem_memCtrl) 
                              >> 2U) & (IData)(vlSelfRef.tb_top__DOT__ex_mem_zeroFlag))));
    bufp->fullCData(oldp+127,(vlSelfRef.tb_top__DOT__mem_wb_wbCtrl),2);
    bufp->fullCData(oldp+128,(vlSelfRef.tb_top__DOT__mem_wb_regDst),5);
    bufp->fullIData(oldp+129,(vlSelfRef.tb_top__DOT__mem_wb_memReadData),32);
    bufp->fullIData(oldp+130,(vlSelfRef.tb_top__DOT__mem_wb_aluResult),32);
    bufp->fullBit(oldp+131,((1U & ((IData)(vlSelfRef.tb_top__DOT__mem_wb_wbCtrl) 
                                   >> 1U))));
    bufp->fullIData(oldp+132,(((1U & (IData)(vlSelfRef.tb_top__DOT__mem_wb_wbCtrl))
                                ? vlSelfRef.tb_top__DOT__mem_wb_memReadData
                                : vlSelfRef.tb_top__DOT__mem_wb_aluResult)),32);
    bufp->fullCData(oldp+133,(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl),4);
    bufp->fullIData(oldp+134,(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__in_b),32);
    bufp->fullIData(oldp+135,(vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__pc),32);
    bufp->fullBit(oldp+136,((1U & ((IData)(vlSelfRef.tb_top__DOT__ex_mem_memCtrl) 
                                   >> 1U))));
    bufp->fullBit(oldp+137,((1U & (IData)(vlSelfRef.tb_top__DOT__ex_mem_memCtrl))));
    bufp->fullIData(oldp+138,(vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[0]),32);
    bufp->fullIData(oldp+139,(vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[1]),32);
    bufp->fullIData(oldp+140,(vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[2]),32);
    bufp->fullIData(oldp+141,(vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[3]),32);
    bufp->fullIData(oldp+142,(vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[4]),32);
    bufp->fullIData(oldp+143,(vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[5]),32);
    bufp->fullIData(oldp+144,(vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[6]),32);
    bufp->fullIData(oldp+145,(vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[7]),32);
    bufp->fullIData(oldp+146,(vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[8]),32);
    bufp->fullIData(oldp+147,(vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[9]),32);
    bufp->fullIData(oldp+148,(vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[10]),32);
    bufp->fullIData(oldp+149,(vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[11]),32);
    bufp->fullIData(oldp+150,(vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[12]),32);
    bufp->fullIData(oldp+151,(vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[13]),32);
    bufp->fullIData(oldp+152,(vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[14]),32);
    bufp->fullIData(oldp+153,(vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[15]),32);
    bufp->fullIData(oldp+154,(vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[16]),32);
    bufp->fullIData(oldp+155,(vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[17]),32);
    bufp->fullIData(oldp+156,(vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[18]),32);
    bufp->fullIData(oldp+157,(vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[19]),32);
    bufp->fullIData(oldp+158,(vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[20]),32);
    bufp->fullIData(oldp+159,(vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[21]),32);
    bufp->fullIData(oldp+160,(vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[22]),32);
    bufp->fullIData(oldp+161,(vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[23]),32);
    bufp->fullIData(oldp+162,(vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[24]),32);
    bufp->fullIData(oldp+163,(vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[25]),32);
    bufp->fullIData(oldp+164,(vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[26]),32);
    bufp->fullIData(oldp+165,(vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[27]),32);
    bufp->fullIData(oldp+166,(vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[28]),32);
    bufp->fullIData(oldp+167,(vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[29]),32);
    bufp->fullIData(oldp+168,(vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[30]),32);
    bufp->fullIData(oldp+169,(vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[31]),32);
    bufp->fullIData(oldp+170,(vlSelfRef.tb_top__DOT__reg_file_debug[0]),32);
    bufp->fullIData(oldp+171,(vlSelfRef.tb_top__DOT__reg_file_debug[1]),32);
    bufp->fullIData(oldp+172,(vlSelfRef.tb_top__DOT__reg_file_debug[2]),32);
    bufp->fullIData(oldp+173,(vlSelfRef.tb_top__DOT__reg_file_debug[3]),32);
    bufp->fullIData(oldp+174,(vlSelfRef.tb_top__DOT__reg_file_debug[4]),32);
    bufp->fullIData(oldp+175,(vlSelfRef.tb_top__DOT__reg_file_debug[5]),32);
    bufp->fullIData(oldp+176,(vlSelfRef.tb_top__DOT__reg_file_debug[6]),32);
    bufp->fullIData(oldp+177,(vlSelfRef.tb_top__DOT__reg_file_debug[7]),32);
    bufp->fullIData(oldp+178,(vlSelfRef.tb_top__DOT__reg_file_debug[8]),32);
    bufp->fullIData(oldp+179,(vlSelfRef.tb_top__DOT__reg_file_debug[9]),32);
    bufp->fullIData(oldp+180,(vlSelfRef.tb_top__DOT__reg_file_debug[10]),32);
    bufp->fullIData(oldp+181,(vlSelfRef.tb_top__DOT__reg_file_debug[11]),32);
    bufp->fullIData(oldp+182,(vlSelfRef.tb_top__DOT__reg_file_debug[12]),32);
    bufp->fullIData(oldp+183,(vlSelfRef.tb_top__DOT__reg_file_debug[13]),32);
    bufp->fullIData(oldp+184,(vlSelfRef.tb_top__DOT__reg_file_debug[14]),32);
    bufp->fullIData(oldp+185,(vlSelfRef.tb_top__DOT__reg_file_debug[15]),32);
    bufp->fullIData(oldp+186,(vlSelfRef.tb_top__DOT__reg_file_debug[16]),32);
    bufp->fullIData(oldp+187,(vlSelfRef.tb_top__DOT__reg_file_debug[17]),32);
    bufp->fullIData(oldp+188,(vlSelfRef.tb_top__DOT__reg_file_debug[18]),32);
    bufp->fullIData(oldp+189,(vlSelfRef.tb_top__DOT__reg_file_debug[19]),32);
    bufp->fullIData(oldp+190,(vlSelfRef.tb_top__DOT__reg_file_debug[20]),32);
    bufp->fullIData(oldp+191,(vlSelfRef.tb_top__DOT__reg_file_debug[21]),32);
    bufp->fullIData(oldp+192,(vlSelfRef.tb_top__DOT__reg_file_debug[22]),32);
    bufp->fullIData(oldp+193,(vlSelfRef.tb_top__DOT__reg_file_debug[23]),32);
    bufp->fullIData(oldp+194,(vlSelfRef.tb_top__DOT__reg_file_debug[24]),32);
    bufp->fullIData(oldp+195,(vlSelfRef.tb_top__DOT__reg_file_debug[25]),32);
    bufp->fullIData(oldp+196,(vlSelfRef.tb_top__DOT__reg_file_debug[26]),32);
    bufp->fullIData(oldp+197,(vlSelfRef.tb_top__DOT__reg_file_debug[27]),32);
    bufp->fullIData(oldp+198,(vlSelfRef.tb_top__DOT__reg_file_debug[28]),32);
    bufp->fullIData(oldp+199,(vlSelfRef.tb_top__DOT__reg_file_debug[29]),32);
    bufp->fullIData(oldp+200,(vlSelfRef.tb_top__DOT__reg_file_debug[30]),32);
    bufp->fullIData(oldp+201,(vlSelfRef.tb_top__DOT__reg_file_debug[31]),32);
    bufp->fullIData(oldp+202,(vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[0]),32);
    bufp->fullIData(oldp+203,(vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[1]),32);
    bufp->fullIData(oldp+204,(vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[2]),32);
    bufp->fullIData(oldp+205,(vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[3]),32);
    bufp->fullIData(oldp+206,(vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[4]),32);
    bufp->fullIData(oldp+207,(vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[5]),32);
    bufp->fullIData(oldp+208,(vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[6]),32);
    bufp->fullIData(oldp+209,(vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[7]),32);
    bufp->fullIData(oldp+210,(vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[8]),32);
    bufp->fullIData(oldp+211,(vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[9]),32);
    bufp->fullIData(oldp+212,(vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[10]),32);
    bufp->fullIData(oldp+213,(vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[11]),32);
    bufp->fullIData(oldp+214,(vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[12]),32);
    bufp->fullIData(oldp+215,(vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[13]),32);
    bufp->fullIData(oldp+216,(vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[14]),32);
    bufp->fullIData(oldp+217,(vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[15]),32);
    bufp->fullIData(oldp+218,(vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[16]),32);
    bufp->fullIData(oldp+219,(vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[17]),32);
    bufp->fullIData(oldp+220,(vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[18]),32);
    bufp->fullIData(oldp+221,(vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[19]),32);
    bufp->fullIData(oldp+222,(vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[20]),32);
    bufp->fullIData(oldp+223,(vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[21]),32);
    bufp->fullIData(oldp+224,(vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[22]),32);
    bufp->fullIData(oldp+225,(vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[23]),32);
    bufp->fullIData(oldp+226,(vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[24]),32);
    bufp->fullIData(oldp+227,(vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[25]),32);
    bufp->fullIData(oldp+228,(vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[26]),32);
    bufp->fullIData(oldp+229,(vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[27]),32);
    bufp->fullIData(oldp+230,(vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[28]),32);
    bufp->fullIData(oldp+231,(vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[29]),32);
    bufp->fullIData(oldp+232,(vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[30]),32);
    bufp->fullIData(oldp+233,(vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[31]),32);
    bufp->fullIData(oldp+234,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[0]),32);
    bufp->fullIData(oldp+235,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[1]),32);
    bufp->fullIData(oldp+236,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[2]),32);
    bufp->fullIData(oldp+237,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[3]),32);
    bufp->fullIData(oldp+238,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[4]),32);
    bufp->fullIData(oldp+239,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[5]),32);
    bufp->fullIData(oldp+240,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[6]),32);
    bufp->fullIData(oldp+241,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[7]),32);
    bufp->fullIData(oldp+242,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[8]),32);
    bufp->fullIData(oldp+243,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[9]),32);
    bufp->fullIData(oldp+244,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[10]),32);
    bufp->fullIData(oldp+245,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[11]),32);
    bufp->fullIData(oldp+246,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[12]),32);
    bufp->fullIData(oldp+247,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[13]),32);
    bufp->fullIData(oldp+248,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[14]),32);
    bufp->fullIData(oldp+249,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[15]),32);
    bufp->fullIData(oldp+250,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[16]),32);
    bufp->fullIData(oldp+251,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[17]),32);
    bufp->fullIData(oldp+252,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[18]),32);
    bufp->fullIData(oldp+253,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[19]),32);
    bufp->fullIData(oldp+254,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[20]),32);
    bufp->fullIData(oldp+255,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[21]),32);
    bufp->fullIData(oldp+256,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[22]),32);
    bufp->fullIData(oldp+257,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[23]),32);
    bufp->fullIData(oldp+258,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[24]),32);
    bufp->fullIData(oldp+259,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[25]),32);
    bufp->fullIData(oldp+260,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[26]),32);
    bufp->fullIData(oldp+261,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[27]),32);
    bufp->fullIData(oldp+262,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[28]),32);
    bufp->fullIData(oldp+263,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[29]),32);
    bufp->fullIData(oldp+264,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[30]),32);
    bufp->fullIData(oldp+265,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[31]),32);
    bufp->fullBit(oldp+266,(vlSelfRef.tb_top__DOT__clk));
    bufp->fullBit(oldp+267,(vlSelfRef.tb_top__DOT__rst));
    bufp->fullIData(oldp+268,(((IData)(vlSelfRef.tb_top__DOT__rst)
                                ? 0U : vlSelfRef.tb_top__DOT__instruction_memory
                               [(0x0000001fU & (vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__pc 
                                                >> 2U))])),32);
    bufp->fullIData(oldp+269,(vlSelfRef.tb_top__DOT__reg_file_debug
                              [(0x0000001fU & (vlSelfRef.tb_top__DOT__if_id_inst 
                                               >> 0x00000015U))]),32);
    bufp->fullIData(oldp+270,(vlSelfRef.tb_top__DOT__reg_file_debug
                              [(0x0000001fU & (vlSelfRef.tb_top__DOT__if_id_inst 
                                               >> 0x00000010U))]),32);
    bufp->fullIData(oldp+271,(((1U & (IData)(vlSelfRef.tb_top__DOT__ex_mem_memCtrl))
                                ? vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory
                               [(0x0000001fU & (vlSelfRef.tb_top__DOT__ex_mem_aluResult 
                                                >> 2U))]
                                : 0U)),32);
    bufp->fullIData(oldp+272,(vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__i),32);
}
