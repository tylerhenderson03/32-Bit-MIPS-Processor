// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VtbCover_top.h for the primary calling header

#include "VtbCover_top__pch.h"

void VtbCover_top_std__03a__03aprocess__Vclpkg::__VnoInFunc_self(VlProcessRef vlProcess, VtbCover_top__Syms* __restrict vlSymsp, VlClassRef<VtbCover_top_std__03a__03aprocess> &self__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VtbCover_top_std__03a__03aprocess__Vclpkg::__VnoInFunc_self\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<VtbCover_top_std__03a__03aprocess> p;
    p = VL_NEW(VtbCover_top_std__03a__03aprocess, vlSymsp);

// $c statement at /opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv:159:7
    VL_NULL_CHECK(p, "/opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv", 159)->m_process = vlProcess;
    self__Vfuncrtn = p;
    ++(vlSymsp->__Vcoverage[2172]);
}

void VtbCover_top_std__03a__03aprocess__Vclpkg::__VnoInFunc_killQueue(VtbCover_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<VtbCover_top_std__03a__03aprocess>> &processQueue) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VtbCover_top_std__03a__03aprocess__Vclpkg::__VnoInFunc_killQueue\n"); );
    // Body
    IData/*31:0*/ unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk1_1__DOT____Vrepeat0 = 0;
    unnamedblk1_1__DOT____Vrepeat0 = processQueue.size();
    while (VL_LTS_III(32, 0U, unnamedblk1_1__DOT____Vrepeat0)) {
        VL_NULL_CHECK(processQueue.pop_front(), "/opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv", 199)->__VnoInFunc_kill(vlSymsp);
        unnamedblk1_1__DOT____Vrepeat0 = (unnamedblk1_1__DOT____Vrepeat0 
                                          - (IData)(1U));
        ++(vlSymsp->__Vcoverage[2181]);
    }
    ++(vlSymsp->__Vcoverage[2182]);
}

void VtbCover_top_std__03a__03aprocess::__VnoInFunc_set_status(VtbCover_top__Syms* __restrict vlSymsp, IData/*31:0*/ s) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VtbCover_top_std__03a__03aprocess::__VnoInFunc_set_status\n"); );
    // Body

// $c statement at /opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv:166:7
    this->m_process->state(s);
    ++(vlSymsp->__Vcoverage[2173]);
}

void VtbCover_top_std__03a__03aprocess::__VnoInFunc_status(VtbCover_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VtbCover_top_std__03a__03aprocess::__VnoInFunc_status\n"); );
    // Body
    status__Vfuncrtn = 0U;
    status__Vfuncrtn = 
// $cpure expression at /opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv:172:21
this->m_process->state()
    ;
    ++(vlSymsp->__Vcoverage[2174]);
}

void VtbCover_top_std__03a__03aprocess::__VnoInFunc_kill(VtbCover_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VtbCover_top_std__03a__03aprocess::__VnoInFunc_kill\n"); );
    // Body
    this->__VnoInFunc_set_status(vlSymsp, 4U);
    ++(vlSymsp->__Vcoverage[2175]);
}

void VtbCover_top_std__03a__03aprocess::__VnoInFunc_suspend(VtbCover_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VtbCover_top_std__03a__03aprocess::__VnoInFunc_suspend\n"); );
    // Body
    VL_WRITEF_NX("[%0t] %%Error: verilated_std.sv:183: Assertion failed in %m: std::process::suspend() not supported\n",3, 'M',vlSymsp->name(),"std.process.suspend", 'T',-9
                 , '#',64,VL_TIME_UNITED_Q(1));
    VL_STOP_MT("/opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv", 183, "");
}

void VtbCover_top_std__03a__03aprocess::__VnoInFunc_resume(VtbCover_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VtbCover_top_std__03a__03aprocess::__VnoInFunc_resume\n"); );
    // Body
    this->__VnoInFunc_set_status(vlSymsp, 1U);
    ++(vlSymsp->__Vcoverage[2176]);
}

VlCoroutine VtbCover_top_std__03a__03aprocess::__VnoInFunc_await(VtbCover_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VtbCover_top_std__03a__03aprocess::__VnoInFunc_await\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VlefLogAnd_7;
    IData/*31:0*/ __VlefCall_6__status;
    IData/*31:0*/ __VlefCall_5__status;
    IData/*31:0*/ __VlefCall_4__status;
    IData/*31:0*/ __VlefCall_3__status;
    CData/*0:0*/ __VlefLogOr_2;
    IData/*31:0*/ __VlefCall_1__status;
    IData/*31:0*/ __VlefCall_0__status;
    this->__VnoInFunc_status(vlSymsp, __VlefCall_0__status);
    __VlefLogOr_2 = (0U == __VlefCall_0__status);
    if ((1U & (~ (IData)(__VlefLogOr_2)))) {
        this->__VnoInFunc_status(vlSymsp, __VlefCall_1__status);
        __VlefLogOr_2 = (4U == __VlefCall_1__status);
    }
    if ((1U & (~ (IData)(__VlefLogOr_2)))) {
        CData/*0:0*/ __VdynTrigger_h67ed4f01__0;
        __VdynTrigger_h67ed4f01__0 = 0;
        __VdynTrigger_h67ed4f01__0 = 0U;
        while ((1U & (~ (IData)(__VdynTrigger_h67ed4f01__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@([true] std::process.__VlefLogOr_2)", 
                                                         "/opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv", 
                                                         192);
            __VdynTrigger_h67ed4f01__0 = __VlefLogOr_2;
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h67ed4f01__0);
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@([true] std::process.__VlefLogOr_2)", 
                                                     "/opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv", 
                                                     192);
    }
    this->__VnoInFunc_status(vlSymsp, __VlefCall_3__status);
    if ((4U == __VlefCall_3__status)) {
        ++(vlSymsp->__Vcoverage[2177]);
    }
    this->__VnoInFunc_status(vlSymsp, __VlefCall_4__status);
    if ((0U == __VlefCall_4__status)) {
        ++(vlSymsp->__Vcoverage[2178]);
    }
    this->__VnoInFunc_status(vlSymsp, __VlefCall_5__status);
    __VlefLogAnd_7 = (0U != __VlefCall_5__status);
    if (__VlefLogAnd_7) {
        this->__VnoInFunc_status(vlSymsp, __VlefCall_6__status);
        __VlefLogAnd_7 = (4U != __VlefCall_6__status);
    }
    if (__VlefLogAnd_7) {
        ++(vlSymsp->__Vcoverage[2179]);
    }
    ++(vlSymsp->__Vcoverage[2180]);
    co_return;
}

void VtbCover_top_std__03a__03aprocess::__VnoInFunc_get_randstate(VtbCover_top__Syms* __restrict vlSymsp, std::string &get_randstate__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VtbCover_top_std__03a__03aprocess::__VnoInFunc_get_randstate\n"); );
    // Body
    std::string s;
    s = VL_CVT_PACK_STR_NI(
// $c expression at /opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv:234:26
0
    );

// $c statement at /opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv:236:7
    s = this->m_process->randstate();
    get_randstate__Vfuncrtn = s;
    ++(vlSymsp->__Vcoverage[2183]);
}

void VtbCover_top_std__03a__03aprocess::__VnoInFunc_set_randstate(VtbCover_top__Syms* __restrict vlSymsp, std::string s) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VtbCover_top_std__03a__03aprocess::__VnoInFunc_set_randstate\n"); );
    // Body

// $c statement at /opt/homebrew/Cellar/verilator/5.050/share/verilator/include/verilated_std.sv:241:7
    this->m_process->randstate(s);
    ++(vlSymsp->__Vcoverage[2184]);
}

void VtbCover_top_std__03a__03aprocess::init(VtbCover_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VtbCover_top_std__03a__03aprocess::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ++(vlSymsp->__Vcoverage[2185]);
}

void VtbCover_top_std__03a__03aprocess::_ctor_var_reset(VtbCover_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VtbCover_top_std__03a__03aprocess::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}
