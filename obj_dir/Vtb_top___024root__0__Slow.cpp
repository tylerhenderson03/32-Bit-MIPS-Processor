// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

VL_ATTR_COLD void Vtb_top___024root___eval_static__TOP(Vtb_top___024root* vlSelf);
VL_ATTR_COLD void Vtb_top___024root____Vm_traceActivitySetAll(Vtb_top___024root* vlSelf);

VL_ATTR_COLD void Vtb_top___024root___eval_static(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_static\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_top___024root___eval_static__TOP(vlSelf);
    Vtb_top___024root____Vm_traceActivitySetAll(vlSelf);
    vlSelfRef.__VactTriggered[0U] = (1ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (2ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (4ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (8ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000010ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000020ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000040ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000080ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000100ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000200ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000400ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000800ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000001000ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000002000ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000004000ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000008000ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000010000ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000020000ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000040000ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000080000ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000100000ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000200000ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000400000ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000800000ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000001000000ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000002000000ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000004000000ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000008000000ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000010000000ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000020000000ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000040000000ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000080000000ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000100000000ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000200000000ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000400000000ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000800000000ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000001000000000ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000002000000000ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000004000000000ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000008000000000ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000010000000000ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000020000000000ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__clk__0 
        = vlSelfRef.tb_top__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__ex_aluResult__0 
        = vlSelfRef.tb_top__DOT__ex_aluResult;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__ex_mem_aluResult__0 
        = vlSelfRef.tb_top__DOT__ex_mem_aluResult;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__ex_mem_memCtrl__0 
        = vlSelfRef.tb_top__DOT__ex_mem_memCtrl;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__ex_mem_pcAdd__0 
        = vlSelfRef.tb_top__DOT__ex_mem_pcAdd;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__ex_mem_rdDataTwo__0 
        = vlSelfRef.tb_top__DOT__ex_mem_rdDataTwo;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__ex_mem_regDst__0 
        = vlSelfRef.tb_top__DOT__ex_mem_regDst;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__ex_mem_wbCtrl__0 
        = vlSelfRef.tb_top__DOT__ex_mem_wbCtrl;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__ex_mem_zeroFlag__0 
        = vlSelfRef.tb_top__DOT__ex_mem_zeroFlag;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__ex_pcAdd__0 
        = vlSelfRef.tb_top__DOT__ex_pcAdd;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__ex_regDst__0 
        = vlSelfRef.tb_top__DOT__ex_regDst;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__ex_zeroFlag__0 
        = vlSelfRef.tb_top__DOT__ex_zeroFlag;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__id_exCtrl__0 
        = vlSelfRef.tb_top__DOT__id_exCtrl;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__id_ex_exCtrl__0 
        = vlSelfRef.tb_top__DOT__id_ex_exCtrl;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__id_ex_memCtrl__0 
        = vlSelfRef.tb_top__DOT__id_ex_memCtrl;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__id_ex_pcIncr__0 
        = vlSelfRef.tb_top__DOT__id_ex_pcIncr;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__id_ex_rdDataOne__0 
        = vlSelfRef.tb_top__DOT__id_ex_rdDataOne;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__id_ex_rdDataTwo__0 
        = vlSelfRef.tb_top__DOT__id_ex_rdDataTwo;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__id_ex_regD__0 
        = vlSelfRef.tb_top__DOT__id_ex_regD;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__id_ex_regT__0 
        = vlSelfRef.tb_top__DOT__id_ex_regT;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__id_ex_sgnExt__0 
        = vlSelfRef.tb_top__DOT__id_ex_sgnExt;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__id_ex_wbCtrl__0 
        = vlSelfRef.tb_top__DOT__id_ex_wbCtrl;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__id_memCtrl__0 
        = vlSelfRef.tb_top__DOT__id_memCtrl;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__id_rdDataOne__0 
        = vlSelfRef.tb_top__DOT__id_rdDataOne;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__id_rdDataTwo__0 
        = vlSelfRef.tb_top__DOT__id_rdDataTwo;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__id_regD__0 
        = vlSelfRef.tb_top__DOT__id_regD;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__id_regT__0 
        = vlSelfRef.tb_top__DOT__id_regT;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__id_sgnExt__0 
        = vlSelfRef.tb_top__DOT__id_sgnExt;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__id_wbCtrl__0 
        = vlSelfRef.tb_top__DOT__id_wbCtrl;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__if_id_inst__0 
        = vlSelfRef.tb_top__DOT__if_id_inst;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__if_id_pcIncr__0 
        = vlSelfRef.tb_top__DOT__if_id_pcIncr;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__if_inst__0 
        = vlSelfRef.tb_top__DOT__if_inst;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__if_pc_pp__0 
        = vlSelfRef.tb_top__DOT__if_pc_pp;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__mem_branchFlag__0 
        = vlSelfRef.tb_top__DOT__mem_branchFlag;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__mem_memReadData__0 
        = vlSelfRef.tb_top__DOT__mem_memReadData;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__mem_wb_aluResult__0 
        = vlSelfRef.tb_top__DOT__mem_wb_aluResult;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__mem_wb_memReadData__0 
        = vlSelfRef.tb_top__DOT__mem_wb_memReadData;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__mem_wb_regDst__0 
        = vlSelfRef.tb_top__DOT__mem_wb_regDst;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__mem_wb_wbCtrl__0 
        = vlSelfRef.tb_top__DOT__mem_wb_wbCtrl;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__rst__0 
        = vlSelfRef.tb_top__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__wb_regData__0 
        = vlSelfRef.tb_top__DOT__wb_regData;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_top__DOT__wb_regWrite__0 
        = vlSelfRef.tb_top__DOT__wb_regWrite;
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_top___024root___eval_static__TOP(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_static__TOP\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__i = 0U;
}

VL_ATTR_COLD void Vtb_top___024root___eval_initial__TOP(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_initial__TOP\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__instruction_memory[0U] = 0x00620820U;
    vlSelfRef.tb_top__DOT__instruction_memory[1U] = 0x01e01020U;
    vlSelfRef.tb_top__DOT__instruction_memory[2U] = 0x10230000U;
    vlSelfRef.tb_top__DOT__instruction_memory[3U] = 0x00621820U;
    vlSelfRef.tb_top__DOT__instruction_memory[4U] = 0x00662020U;
    vlSelfRef.tb_top__DOT__instruction_memory[5U] = 0x00a22820U;
    vlSelfRef.tb_top__DOT__instruction_memory[6U] = 0x10230000U;
    vlSelfRef.tb_top__DOT__instruction_memory[7U] = 0U;
    vlSelfRef.tb_top__DOT__instruction_memory[8U] = 0U;
    vlSelfRef.tb_top__DOT__instruction_memory[9U] = 0U;
    vlSelfRef.tb_top__DOT__instruction_memory[10U] = 0U;
    vlSelfRef.tb_top__DOT__instruction_memory[11U] = 0U;
    vlSelfRef.tb_top__DOT__instruction_memory[12U] = 0U;
    vlSelfRef.tb_top__DOT__instruction_memory[13U] = 0U;
    vlSelfRef.tb_top__DOT__instruction_memory[14U] = 0U;
    vlSelfRef.tb_top__DOT__instruction_memory[15U] = 0U;
    vlSelfRef.tb_top__DOT__instruction_memory[16U] = 0U;
    vlSelfRef.tb_top__DOT__instruction_memory[17U] = 0U;
    vlSelfRef.tb_top__DOT__instruction_memory[18U] = 0U;
    vlSelfRef.tb_top__DOT__instruction_memory[19U] = 0U;
    vlSelfRef.tb_top__DOT__instruction_memory[20U] = 0U;
    vlSelfRef.tb_top__DOT__instruction_memory[21U] = 0U;
    vlSelfRef.tb_top__DOT__instruction_memory[22U] = 0U;
    vlSelfRef.tb_top__DOT__instruction_memory[23U] = 0U;
    vlSelfRef.tb_top__DOT__instruction_memory[24U] = 0U;
    vlSelfRef.tb_top__DOT__instruction_memory[25U] = 0U;
    vlSelfRef.tb_top__DOT__instruction_memory[26U] = 0U;
    vlSelfRef.tb_top__DOT__instruction_memory[27U] = 0U;
    vlSelfRef.tb_top__DOT__instruction_memory[28U] = 0U;
    vlSelfRef.tb_top__DOT__instruction_memory[29U] = 0U;
    vlSelfRef.tb_top__DOT__instruction_memory[30U] = 0U;
    vlSelfRef.tb_top__DOT__instruction_memory[31U] = 0U;
    vlSymsp->_vm_contextp__->dumpfile("tb_top.vcd"s);
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tb_top__DOT__i = 0x00000020U;
    vlSymsp->TOP____024unit.__VmonitorNum = 1U;
}

VL_ATTR_COLD void Vtb_top___024root___eval_final(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_final\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_top___024root___eval_phase__stl(Vtb_top___024root* vlSelf);

VL_ATTR_COLD void Vtb_top___024root___eval_settle(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_settle\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("tb_top.sv", 2, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_top___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vtb_top___024root___eval_triggers_vec__stl(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_triggers_vec__stl\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vtb_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_top___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

VL_ATTR_COLD void Vtb_top___024root___stl_sequent__TOP__0(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___stl_sequent__TOP__0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdfgRegularize_hebeb780c_0_0;
    __VdfgRegularize_hebeb780c_0_0 = 0;
    // Body
    vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[0U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[0U];
    vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[1U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[1U];
    vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[2U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[2U];
    vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[3U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[3U];
    vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[4U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[4U];
    vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[5U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[5U];
    vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[6U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[6U];
    vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[7U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[7U];
    vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[8U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[8U];
    vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[9U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[9U];
    vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[10U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[10U];
    vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[11U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[11U];
    vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[12U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[12U];
    vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[13U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[13U];
    vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[14U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[14U];
    vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[15U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[15U];
    vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[16U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[16U];
    vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[17U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[17U];
    vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[18U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[18U];
    vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[19U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[19U];
    vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[20U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[20U];
    vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[21U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[21U];
    vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[22U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[22U];
    vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[23U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[23U];
    vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[24U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[24U];
    vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[25U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[25U];
    vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[26U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[26U];
    vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[27U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[27U];
    vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[28U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[28U];
    vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[29U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[29U];
    vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[30U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[30U];
    vlSelfRef.tb_top__DOT__top_00__DOT__reg_file_debug[31U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[31U];
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[0U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[0U];
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[1U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[1U];
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[2U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[2U];
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[3U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[3U];
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[4U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[4U];
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[5U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[5U];
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[6U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[6U];
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[7U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[7U];
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[8U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[8U];
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[9U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[9U];
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[10U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[10U];
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[11U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[11U];
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[12U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[12U];
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[13U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[13U];
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[14U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[14U];
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[15U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[15U];
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[16U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[16U];
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[17U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[17U];
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[18U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[18U];
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[19U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[19U];
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[20U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[20U];
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[21U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[21U];
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[22U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[22U];
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[23U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[23U];
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[24U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[24U];
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[25U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[25U];
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[26U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[26U];
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[27U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[27U];
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[28U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[28U];
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[29U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[29U];
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[30U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[30U];
    vlSelfRef.tb_top__DOT__top_00__DOT__id_top__DOT__register_file[31U] 
        = vlSelfRef.tb_top__DOT__reg_file_debug[31U];
    if ((0U == (vlSelfRef.tb_top__DOT__if_id_inst >> 0x1aU))) {
        vlSelfRef.tb_top__DOT__id_exCtrl = 0x0cU;
        vlSelfRef.tb_top__DOT__id_memCtrl = 0U;
        vlSelfRef.tb_top__DOT__id_wbCtrl = 2U;
    } else if ((0x23U == (vlSelfRef.tb_top__DOT__if_id_inst 
                          >> 0x1aU))) {
        vlSelfRef.tb_top__DOT__id_exCtrl = 1U;
        vlSelfRef.tb_top__DOT__id_memCtrl = 2U;
        vlSelfRef.tb_top__DOT__id_wbCtrl = 3U;
    } else {
        if ((0x2bU == (vlSelfRef.tb_top__DOT__if_id_inst 
                       >> 0x1aU))) {
            vlSelfRef.tb_top__DOT__id_exCtrl = 1U;
            vlSelfRef.tb_top__DOT__id_memCtrl = 1U;
        } else if ((4U == (vlSelfRef.tb_top__DOT__if_id_inst 
                           >> 0x1aU))) {
            vlSelfRef.tb_top__DOT__id_exCtrl = 2U;
            vlSelfRef.tb_top__DOT__id_memCtrl = 4U;
        } else {
            vlSelfRef.tb_top__DOT__id_exCtrl = 0U;
            vlSelfRef.tb_top__DOT__id_memCtrl = 0U;
        }
        vlSelfRef.tb_top__DOT__id_wbCtrl = 0U;
    }
    vlSelfRef.tb_top__DOT__if_pc_pp = ((IData)(4U) 
                                       + vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__pc);
    vlSelfRef.tb_top__DOT__id_regT = (0x0000001fU & 
                                      (vlSelfRef.tb_top__DOT__if_id_inst 
                                       >> 0x00000010U));
    vlSelfRef.tb_top__DOT__id_regD = (0x0000001fU & 
                                      (vlSelfRef.tb_top__DOT__if_id_inst 
                                       >> 0x0000000bU));
    vlSelfRef.tb_top__DOT__id_sgnExt = (((- (IData)(
                                                    (1U 
                                                     & (vlSelfRef.tb_top__DOT__if_id_inst 
                                                        >> 0x0000000fU)))) 
                                         << 0x00000010U) 
                                        | (0x0000ffffU 
                                           & vlSelfRef.tb_top__DOT__if_id_inst));
    vlSelfRef.tb_top__DOT__wb_regWrite = (1U & ((IData)(vlSelfRef.tb_top__DOT__mem_wb_wbCtrl) 
                                                >> 1U));
    vlSelfRef.tb_top__DOT__id_rdDataOne = vlSelfRef.tb_top__DOT__reg_file_debug
        [(0x0000001fU & (vlSelfRef.tb_top__DOT__if_id_inst 
                         >> 0x00000015U))];
    vlSelfRef.tb_top__DOT__id_rdDataTwo = vlSelfRef.tb_top__DOT__reg_file_debug
        [(0x0000001fU & (vlSelfRef.tb_top__DOT__if_id_inst 
                         >> 0x00000010U))];
    vlSelfRef.tb_top__DOT__ex_pcAdd = (vlSelfRef.tb_top__DOT__id_ex_pcIncr 
                                       + VL_SHIFTL_III(32,32,32, vlSelfRef.tb_top__DOT__id_ex_sgnExt, 2U));
    vlSelfRef.tb_top__DOT__mem_branchFlag = (((IData)(vlSelfRef.tb_top__DOT__ex_mem_memCtrl) 
                                              >> 2U) 
                                             & (IData)(vlSelfRef.tb_top__DOT__ex_mem_zeroFlag));
    vlSelfRef.tb_top__DOT__if_inst = ((IData)(vlSelfRef.tb_top__DOT__rst)
                                       ? 0U : vlSelfRef.tb_top__DOT__instruction_memory
                                      [(0x0000001fU 
                                        & (vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__pc 
                                           >> 2U))]);
    vlSelfRef.tb_top__DOT__ex_regDst = ((8U & (IData)(vlSelfRef.tb_top__DOT__id_ex_exCtrl))
                                         ? (IData)(vlSelfRef.tb_top__DOT__id_ex_regD)
                                         : (IData)(vlSelfRef.tb_top__DOT__id_ex_regT));
    vlSelfRef.tb_top__DOT__mem_memReadData = ((1U & (IData)(vlSelfRef.tb_top__DOT__ex_mem_memCtrl))
                                               ? vlSelfRef.tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory
                                              [(0x0000001fU 
                                                & (vlSelfRef.tb_top__DOT__ex_mem_aluResult 
                                                   >> 2U))]
                                               : 0U);
    vlSelfRef.tb_top__DOT__wb_regData = ((1U & (IData)(vlSelfRef.tb_top__DOT__mem_wb_wbCtrl))
                                          ? vlSelfRef.tb_top__DOT__mem_wb_memReadData
                                          : vlSelfRef.tb_top__DOT__mem_wb_aluResult);
    vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[0U] 
        = vlSelfRef.tb_top__DOT__instruction_memory[31U];
    vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[1U] 
        = vlSelfRef.tb_top__DOT__instruction_memory[30U];
    vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[2U] 
        = vlSelfRef.tb_top__DOT__instruction_memory[29U];
    vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[3U] 
        = vlSelfRef.tb_top__DOT__instruction_memory[28U];
    vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[4U] 
        = vlSelfRef.tb_top__DOT__instruction_memory[27U];
    vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[5U] 
        = vlSelfRef.tb_top__DOT__instruction_memory[26U];
    vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[6U] 
        = vlSelfRef.tb_top__DOT__instruction_memory[25U];
    vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[7U] 
        = vlSelfRef.tb_top__DOT__instruction_memory[24U];
    vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[8U] 
        = vlSelfRef.tb_top__DOT__instruction_memory[23U];
    vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[9U] 
        = vlSelfRef.tb_top__DOT__instruction_memory[22U];
    vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[10U] 
        = vlSelfRef.tb_top__DOT__instruction_memory[21U];
    vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[11U] 
        = vlSelfRef.tb_top__DOT__instruction_memory[20U];
    vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[12U] 
        = vlSelfRef.tb_top__DOT__instruction_memory[19U];
    vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[13U] 
        = vlSelfRef.tb_top__DOT__instruction_memory[18U];
    vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[14U] 
        = vlSelfRef.tb_top__DOT__instruction_memory[17U];
    vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[15U] 
        = vlSelfRef.tb_top__DOT__instruction_memory[16U];
    vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[16U] 
        = vlSelfRef.tb_top__DOT__instruction_memory[15U];
    vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[17U] 
        = vlSelfRef.tb_top__DOT__instruction_memory[14U];
    vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[18U] 
        = vlSelfRef.tb_top__DOT__instruction_memory[13U];
    vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[19U] 
        = vlSelfRef.tb_top__DOT__instruction_memory[12U];
    vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[20U] 
        = vlSelfRef.tb_top__DOT__instruction_memory[11U];
    vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[21U] 
        = vlSelfRef.tb_top__DOT__instruction_memory[10U];
    vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[22U] 
        = vlSelfRef.tb_top__DOT__instruction_memory[9U];
    vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[23U] 
        = vlSelfRef.tb_top__DOT__instruction_memory[8U];
    vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[24U] 
        = vlSelfRef.tb_top__DOT__instruction_memory[7U];
    vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[25U] 
        = vlSelfRef.tb_top__DOT__instruction_memory[6U];
    vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[26U] 
        = vlSelfRef.tb_top__DOT__instruction_memory[5U];
    vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[27U] 
        = vlSelfRef.tb_top__DOT__instruction_memory[4U];
    vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[28U] 
        = vlSelfRef.tb_top__DOT__instruction_memory[3U];
    vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[29U] 
        = vlSelfRef.tb_top__DOT__instruction_memory[2U];
    vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[30U] 
        = vlSelfRef.tb_top__DOT__instruction_memory[1U];
    vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[31U] 
        = vlSelfRef.tb_top__DOT__instruction_memory[0U];
    vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl 
        = ((0U == (3U & ((IData)(vlSelfRef.tb_top__DOT__id_ex_exCtrl) 
                         >> 1U))) ? 2U : ((1U == (3U 
                                                  & ((IData)(vlSelfRef.tb_top__DOT__id_ex_exCtrl) 
                                                     >> 1U)))
                                           ? 6U : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelfRef.tb_top__DOT__id_ex_exCtrl) 
                                                        >> 1U)))
                                                    ? 
                                                   ((0x20U 
                                                     == 
                                                     (0x0000003fU 
                                                      & vlSelfRef.tb_top__DOT__id_ex_sgnExt))
                                                     ? 2U
                                                     : 
                                                    ((0x22U 
                                                      == 
                                                      (0x0000003fU 
                                                       & vlSelfRef.tb_top__DOT__id_ex_sgnExt))
                                                      ? 6U
                                                      : 
                                                     ((0x24U 
                                                       == 
                                                       (0x0000003fU 
                                                        & vlSelfRef.tb_top__DOT__id_ex_sgnExt))
                                                       ? 0U
                                                       : 
                                                      ((0x25U 
                                                        == 
                                                        (0x0000003fU 
                                                         & vlSelfRef.tb_top__DOT__id_ex_sgnExt))
                                                        ? 1U
                                                        : 
                                                       ((0x2aU 
                                                         == 
                                                         (0x0000003fU 
                                                          & vlSelfRef.tb_top__DOT__id_ex_sgnExt))
                                                         ? 7U
                                                         : 0U)))))
                                                    : 0U)));
    vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__in_b 
        = ((1U & (IData)(vlSelfRef.tb_top__DOT__id_ex_exCtrl))
            ? vlSelfRef.tb_top__DOT__id_ex_sgnExt : vlSelfRef.tb_top__DOT__id_ex_rdDataTwo);
    vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[0U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[0U];
    vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[1U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[1U];
    vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[2U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[2U];
    vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[3U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[3U];
    vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[4U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[4U];
    vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[5U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[5U];
    vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[6U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[6U];
    vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[7U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[7U];
    vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[8U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[8U];
    vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[9U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[9U];
    vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[10U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[10U];
    vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[11U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[11U];
    vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[12U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[12U];
    vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[13U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[13U];
    vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[14U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[14U];
    vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[15U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[15U];
    vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[16U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[16U];
    vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[17U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[17U];
    vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[18U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[18U];
    vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[19U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[19U];
    vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[20U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[20U];
    vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[21U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[21U];
    vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[22U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[22U];
    vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[23U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[23U];
    vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[24U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[24U];
    vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[25U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[25U];
    vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[26U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[26U];
    vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[27U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[27U];
    vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[28U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[28U];
    vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[29U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[29U];
    vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[30U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[30U];
    vlSelfRef.tb_top__DOT__top_00__DOT__if_instruction_memory[31U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[31U];
    vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[0U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[0U];
    vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[1U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[1U];
    vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[2U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[2U];
    vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[3U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[3U];
    vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[4U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[4U];
    vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[5U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[5U];
    vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[6U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[6U];
    vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[7U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[7U];
    vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[8U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[8U];
    vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[9U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[9U];
    vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[10U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[10U];
    vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[11U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[11U];
    vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[12U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[12U];
    vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[13U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[13U];
    vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[14U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[14U];
    vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[15U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[15U];
    vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[16U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[16U];
    vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[17U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[17U];
    vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[18U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[18U];
    vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[19U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[19U];
    vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[20U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[20U];
    vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[21U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[21U];
    vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[22U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[22U];
    vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[23U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[23U];
    vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[24U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[24U];
    vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[25U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[25U];
    vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[26U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[26U];
    vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[27U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[27U];
    vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[28U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[28U];
    vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[29U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[29U];
    vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[30U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[30U];
    vlSelfRef.tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[31U] 
        = vlSelfRef.tb_top__DOT____Vcellinp__top_00__if_instruction_memory[31U];
    __VdfgRegularize_hebeb780c_0_0 = (vlSelfRef.tb_top__DOT__id_ex_rdDataOne 
                                      | vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__in_b);
    vlSelfRef.tb_top__DOT__ex_aluResult = ((8U & (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))
                                            ? ((4U 
                                                & (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))
                                                     ? 
                                                    (vlSelfRef.tb_top__DOT__id_ex_rdDataOne 
                                                     * vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__in_b)
                                                     : 0U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))
                                                     ? 0U
                                                     : 
                                                    (~ __VdfgRegularize_hebeb780c_0_0)))
                                                : 0U)
                                            : ((4U 
                                                & (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))
                                                     ? 0U
                                                     : 
                                                    (vlSelfRef.tb_top__DOT__id_ex_rdDataOne 
                                                     - vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__in_b))
                                                    : 0U)
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))
                                                     ? 0U
                                                     : 
                                                    (vlSelfRef.tb_top__DOT__id_ex_rdDataOne 
                                                     + vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__in_b))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl))
                                                     ? __VdfgRegularize_hebeb780c_0_0
                                                     : 
                                                    (vlSelfRef.tb_top__DOT__id_ex_rdDataOne 
                                                     & vlSelfRef.tb_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__in_b)))));
    vlSelfRef.tb_top__DOT__ex_zeroFlag = (0U == vlSelfRef.tb_top__DOT__ex_aluResult);
}

VL_ATTR_COLD void Vtb_top___024root___eval_stl(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_stl\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtb_top___024root___stl_sequent__TOP__0(vlSelf);
        Vtb_top___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vtb_top___024root___eval_phase__stl(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_phase__stl\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_top___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_top___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtb_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtb_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_top___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @( tb_top.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @( tb_top.ex_aluResult)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @( tb_top.ex_mem_aluResult)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @( tb_top.ex_mem_memCtrl)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @( tb_top.ex_mem_pcAdd)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @( tb_top.ex_mem_rdDataTwo)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @( tb_top.ex_mem_regDst)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 7 is active: @( tb_top.ex_mem_wbCtrl)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 8U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 8 is active: @( tb_top.ex_mem_zeroFlag)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 9U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 9 is active: @( tb_top.ex_pcAdd)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000aU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 10 is active: @( tb_top.ex_regDst)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000bU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 11 is active: @( tb_top.ex_zeroFlag)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000cU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 12 is active: @( tb_top.id_exCtrl)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000dU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 13 is active: @( tb_top.id_ex_exCtrl)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000eU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 14 is active: @( tb_top.id_ex_memCtrl)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000fU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 15 is active: @( tb_top.id_ex_pcIncr)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000010U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 16 is active: @( tb_top.id_ex_rdDataOne)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000011U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 17 is active: @( tb_top.id_ex_rdDataTwo)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000012U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 18 is active: @( tb_top.id_ex_regD)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000013U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 19 is active: @( tb_top.id_ex_regT)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000014U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 20 is active: @( tb_top.id_ex_sgnExt)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000015U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 21 is active: @( tb_top.id_ex_wbCtrl)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000016U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 22 is active: @( tb_top.id_memCtrl)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000017U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 23 is active: @( tb_top.id_rdDataOne)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000018U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 24 is active: @( tb_top.id_rdDataTwo)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000019U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 25 is active: @( tb_top.id_regD)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000001aU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 26 is active: @( tb_top.id_regT)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000001bU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 27 is active: @( tb_top.id_sgnExt)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000001cU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 28 is active: @( tb_top.id_wbCtrl)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000001dU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 29 is active: @( tb_top.if_id_inst)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000001eU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 30 is active: @( tb_top.if_id_pcIncr)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000001fU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 31 is active: @( tb_top.if_inst)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000020U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 32 is active: @( tb_top.if_pc_pp)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000021U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 33 is active: @( tb_top.mem_branchFlag)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000022U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 34 is active: @( tb_top.mem_memReadData)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000023U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 35 is active: @( tb_top.mem_wb_aluResult)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000024U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 36 is active: @( tb_top.mem_wb_memReadData)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000025U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 37 is active: @( tb_top.mem_wb_regDst)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000026U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 38 is active: @( tb_top.mem_wb_wbCtrl)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000027U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 39 is active: @( tb_top.rst)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000028U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 40 is active: @( tb_top.wb_regData)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000029U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 41 is active: @( tb_top.wb_regWrite)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000002aU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 42 is active: @(posedge tb_top.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000002bU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 43 is active: @(posedge tb_top.rst)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000002cU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 44 is active: @(negedge tb_top.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000002dU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 45 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_top___024root____Vm_traceActivitySetAll(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root____Vm_traceActivitySetAll\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
}

VL_ATTR_COLD void Vtb_top___024root___ctor_var_reset(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___ctor_var_reset\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_top__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16256328344204653681ull);
    vlSelf->tb_top__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 628691245840681375ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__instruction_memory[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16813697003253921489ull);
    }
    vlSelf->tb_top__DOT__if_pc_pp = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13767723814181834064ull);
    vlSelf->tb_top__DOT__if_inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8251578961646714667ull);
    vlSelf->tb_top__DOT__if_id_pcIncr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1082492753503743187ull);
    vlSelf->tb_top__DOT__if_id_inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14538603260134980185ull);
    vlSelf->tb_top__DOT__id_regT = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4950411735151936536ull);
    vlSelf->tb_top__DOT__id_regD = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6638178218183398808ull);
    vlSelf->tb_top__DOT__id_exCtrl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4003432159509887397ull);
    vlSelf->tb_top__DOT__id_memCtrl = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12087341905563253379ull);
    vlSelf->tb_top__DOT__id_wbCtrl = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4091577935666505049ull);
    vlSelf->tb_top__DOT__id_sgnExt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 511141975432636673ull);
    vlSelf->tb_top__DOT__id_rdDataOne = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5276271989354631981ull);
    vlSelf->tb_top__DOT__id_rdDataTwo = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9064117401668747776ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__reg_file_debug[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13432881860753231406ull);
    }
    vlSelf->tb_top__DOT__id_ex_regT = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15497257225907551840ull);
    vlSelf->tb_top__DOT__id_ex_regD = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15636495725333499738ull);
    vlSelf->tb_top__DOT__id_ex_exCtrl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13223891392324672794ull);
    vlSelf->tb_top__DOT__id_ex_memCtrl = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4513877857670469566ull);
    vlSelf->tb_top__DOT__id_ex_wbCtrl = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6935902156430462432ull);
    vlSelf->tb_top__DOT__id_ex_pcIncr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12505317891506319663ull);
    vlSelf->tb_top__DOT__id_ex_sgnExt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2718323497163223535ull);
    vlSelf->tb_top__DOT__id_ex_rdDataOne = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12618408786314537685ull);
    vlSelf->tb_top__DOT__id_ex_rdDataTwo = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3746989433758672398ull);
    vlSelf->tb_top__DOT__ex_regDst = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13796311905264417936ull);
    vlSelf->tb_top__DOT__ex_zeroFlag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1363177437451131817ull);
    vlSelf->tb_top__DOT__ex_aluResult = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10585549519812788508ull);
    vlSelf->tb_top__DOT__ex_pcAdd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7631134926805491309ull);
    vlSelf->tb_top__DOT__ex_mem_regDst = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11203738224896896705ull);
    vlSelf->tb_top__DOT__ex_mem_memCtrl = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13049752481420015665ull);
    vlSelf->tb_top__DOT__ex_mem_wbCtrl = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3570747638837076530ull);
    vlSelf->tb_top__DOT__ex_mem_zeroFlag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5577775668022982185ull);
    vlSelf->tb_top__DOT__ex_mem_aluResult = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18210929386593762740ull);
    vlSelf->tb_top__DOT__ex_mem_rdDataTwo = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18044970087356106670ull);
    vlSelf->tb_top__DOT__ex_mem_pcAdd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12193102993349820534ull);
    vlSelf->tb_top__DOT__mem_branchFlag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8766158688543910669ull);
    vlSelf->tb_top__DOT__mem_memReadData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15426451139036441827ull);
    vlSelf->tb_top__DOT__mem_wb_wbCtrl = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13764802217661845659ull);
    vlSelf->tb_top__DOT__mem_wb_regDst = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8452774933970876613ull);
    vlSelf->tb_top__DOT__mem_wb_memReadData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5994195765487902855ull);
    vlSelf->tb_top__DOT__mem_wb_aluResult = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8806988298306205466ull);
    vlSelf->tb_top__DOT__wb_regWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13731862378418920648ull);
    vlSelf->tb_top__DOT__wb_regData = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14637674451699033681ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT____Vcellinp__top_00__if_instruction_memory[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__top_00__DOT__if_instruction_memory[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9213912723130776859ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__top_00__DOT__reg_file_debug[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2509225552977301430ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__top_00__DOT__if_top__DOT__instruction_memory[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12436521004072977239ull);
    }
    vlSelf->tb_top__DOT__top_00__DOT__if_top__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17089727492678903542ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__top_00__DOT__id_top__DOT__register_file[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12637159825465003469ull);
    }
    vlSelf->tb_top__DOT__top_00__DOT__id_top__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4023850717082588353ull);
    vlSelf->tb_top__DOT__top_00__DOT__ex_top__DOT__alu_ctrl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10366605737813535692ull);
    vlSelf->tb_top__DOT__top_00__DOT__ex_top__DOT__alu_00__DOT__in_b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13442493840193394227ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14915665079186232580ull);
    }
    vlSelf->__Vdly__tb_top__DOT__ex_mem_pcAdd = 0;
    vlSelf->__VdlySet__tb_top__DOT__reg_file_debug__v0 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__reg_file_debug__v32 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__reg_file_debug__v32 = 0;
    vlSelf->__VdlySet__tb_top__DOT__reg_file_debug__v32 = 0;
    vlSelf->__VdlyVal__tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory__v0 = 0;
    vlSelf->__VdlyDim0__tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory__v0 = 0;
    vlSelf->__VdlySet__tb_top__DOT__top_00__DOT__mem_top__DOT__dmem_00__DOT__data_memory__v0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__ex_aluResult__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__ex_mem_aluResult__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__ex_mem_memCtrl__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__ex_mem_pcAdd__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__ex_mem_rdDataTwo__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__ex_mem_regDst__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__ex_mem_wbCtrl__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__ex_mem_zeroFlag__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__ex_pcAdd__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__ex_regDst__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__ex_zeroFlag__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__id_exCtrl__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__id_ex_exCtrl__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__id_ex_memCtrl__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__id_ex_pcIncr__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__id_ex_rdDataOne__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__id_ex_rdDataTwo__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__id_ex_regD__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__id_ex_regT__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__id_ex_sgnExt__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__id_ex_wbCtrl__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__id_memCtrl__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__id_rdDataOne__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__id_rdDataTwo__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__id_regD__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__id_regT__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__id_sgnExt__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__id_wbCtrl__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__if_id_inst__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__if_id_pcIncr__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__if_inst__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__if_pc_pp__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__mem_branchFlag__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__mem_memReadData__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__mem_wb_aluResult__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__mem_wb_memReadData__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__mem_wb_regDst__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__mem_wb_wbCtrl__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__rst__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__wb_regData__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_top__DOT__wb_regWrite__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
