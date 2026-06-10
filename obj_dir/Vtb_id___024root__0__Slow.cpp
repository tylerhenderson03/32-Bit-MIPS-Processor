// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_id.h for the primary calling header

#include "Vtb_id__pch.h"

VL_ATTR_COLD void Vtb_id___024root___eval_static__TOP(Vtb_id___024root* vlSelf);

VL_ATTR_COLD void Vtb_id___024root___eval_static(Vtb_id___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_id___024root___eval_static\n"); );
    Vtb_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_id___024root___eval_static__TOP(vlSelf);
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
    vlSelfRef.__Vtrigprevexpr___TOP__tb_id__DOT__RegWrite__0 
        = vlSelfRef.tb_id__DOT__RegWrite;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_id__DOT__clk__0 
        = vlSelfRef.tb_id__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_id__DOT__ex_ctrl__0 
        = vlSelfRef.tb_id__DOT__ex_ctrl;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_id__DOT__if_out__0 
        = vlSelfRef.tb_id__DOT__if_out;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_id__DOT__mem_ctrl__0 
        = vlSelfRef.tb_id__DOT__mem_ctrl;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_id__DOT__pc_incr_in__0 
        = vlSelfRef.tb_id__DOT__pc_incr_in;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_id__DOT__rd_data_one__0 
        = vlSelfRef.tb_id__DOT__rd_data_one;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_id__DOT__rd_data_two__0 
        = vlSelfRef.tb_id__DOT__rd_data_two;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_id__DOT__rd_out__0 
        = vlSelfRef.tb_id__DOT__rd_out;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_id__DOT__rst__0 
        = vlSelfRef.tb_id__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_id__DOT__rt_out__0 
        = vlSelfRef.tb_id__DOT__rt_out;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_id__DOT__sgn_extend_out__0 
        = vlSelfRef.tb_id__DOT__sgn_extend_out;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_id__DOT__wb_ctrl__0 
        = vlSelfRef.tb_id__DOT__wb_ctrl;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_id__DOT__wr_data__0 
        = vlSelfRef.tb_id__DOT__wr_data;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_id__DOT__wr_reg__0 
        = vlSelfRef.tb_id__DOT__wr_reg;
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_id___024root___eval_static__TOP(Vtb_id___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_id___024root___eval_static__TOP\n"); );
    Vtb_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_id__DOT__id_00__DOT__unnamedblk1__DOT__j = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8088947715983664448ull);
}

VL_ATTR_COLD void Vtb_id___024root___eval_initial__TOP(Vtb_id___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_id___024root___eval_initial__TOP\n"); );
    Vtb_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("tb_id.vcd"s);
    vlSymsp->_traceDumpOpen();
    vlSymsp->TOP____024unit.__VmonitorNum = 1U;
}

VL_ATTR_COLD void Vtb_id___024root___eval_final(Vtb_id___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_id___024root___eval_final\n"); );
    Vtb_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_id___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_id___024root___eval_phase__stl(Vtb_id___024root* vlSelf);

VL_ATTR_COLD void Vtb_id___024root___eval_settle(Vtb_id___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_id___024root___eval_settle\n"); );
    Vtb_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_id___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("tb_id.sv", 6, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_id___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vtb_id___024root___eval_triggers_vec__stl(Vtb_id___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_id___024root___eval_triggers_vec__stl\n"); );
    Vtb_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vtb_id___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_id___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_id___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_id___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_id___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_id___024root___trigger_anySet__stl\n"); );
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

void Vtb_id___024root___act_sequent__TOP__0(Vtb_id___024root* vlSelf);
VL_ATTR_COLD void Vtb_id___024root____Vm_traceActivitySetAll(Vtb_id___024root* vlSelf);

VL_ATTR_COLD void Vtb_id___024root___eval_stl(Vtb_id___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_id___024root___eval_stl\n"); );
    Vtb_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtb_id___024root___act_sequent__TOP__0(vlSelf);
        Vtb_id___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vtb_id___024root___eval_phase__stl(Vtb_id___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_id___024root___eval_phase__stl\n"); );
    Vtb_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_id___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_id___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_id___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtb_id___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtb_id___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_id___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_id___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_id___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @( tb_id.RegWrite)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @( tb_id.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @( tb_id.ex_ctrl)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @( tb_id.if_out)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @( tb_id.mem_ctrl)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @( tb_id.pc_incr_in)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @( tb_id.rd_data_one)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 7 is active: @( tb_id.rd_data_two)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 8U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 8 is active: @( tb_id.rd_out)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 9U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 9 is active: @( tb_id.rst)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000aU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 10 is active: @( tb_id.rt_out)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000bU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 11 is active: @( tb_id.sgn_extend_out)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000cU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 12 is active: @( tb_id.wb_ctrl)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000dU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 13 is active: @( tb_id.wr_data)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000eU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 14 is active: @( tb_id.wr_reg)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000fU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 15 is active: @(posedge tb_id.if_out)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000010U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 16 is active: @(posedge tb_id.RegWrite)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000011U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 17 is active: @(posedge tb_id.rst)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000012U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 18 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_id___024root____Vm_traceActivitySetAll(Vtb_id___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_id___024root____Vm_traceActivitySetAll\n"); );
    Vtb_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
}

VL_ATTR_COLD void Vtb_id___024root___ctor_var_reset(Vtb_id___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_id___024root___ctor_var_reset\n"); );
    Vtb_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_id__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9837140849449463879ull);
    vlSelf->tb_id__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11996152826732018645ull);
    vlSelf->tb_id__DOT__if_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1491449731478912352ull);
    vlSelf->tb_id__DOT__pc_incr_in = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9299607312640271290ull);
    vlSelf->tb_id__DOT__wr_reg = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6098734675714587756ull);
    vlSelf->tb_id__DOT__wr_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4369955741971308250ull);
    vlSelf->tb_id__DOT__RegWrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10534772920858525470ull);
    vlSelf->tb_id__DOT__ex_ctrl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2259041963218595848ull);
    vlSelf->tb_id__DOT__mem_ctrl = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1551947290050547328ull);
    vlSelf->tb_id__DOT__wb_ctrl = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2388606190348148171ull);
    vlSelf->tb_id__DOT__sgn_extend_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16386931594005778655ull);
    vlSelf->tb_id__DOT__rd_data_one = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1447304640376724693ull);
    vlSelf->tb_id__DOT__rd_data_two = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4804571393032808296ull);
    vlSelf->tb_id__DOT__rd_out = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11383797827603158356ull);
    vlSelf->tb_id__DOT__rt_out = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15555892239436065945ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_id__DOT__id_00__DOT__register_file[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11399064825530277309ull);
    }
    vlSelf->tb_id__DOT__id_00__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2127212216630630025ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_id__DOT__RegWrite__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_id__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_id__DOT__ex_ctrl__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_id__DOT__if_out__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_id__DOT__mem_ctrl__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_id__DOT__pc_incr_in__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_id__DOT__rd_data_one__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_id__DOT__rd_data_two__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_id__DOT__rd_out__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_id__DOT__rst__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_id__DOT__rt_out__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_id__DOT__sgn_extend_out__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_id__DOT__wb_ctrl__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_id__DOT__wr_data__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_id__DOT__wr_reg__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
