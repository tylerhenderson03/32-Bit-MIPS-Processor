// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VtbCover_top.h for the primary calling header

#include "VtbCover_top__pch.h"

void VtbCover_top___024unit__03a__03arand_inst::__VnoInFunc_get_instruction_name(VtbCover_top__Syms* __restrict vlSymsp, CData/*2:0*/ actual_format, std::string &get_instruction_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VtbCover_top___024unit__03a__03arand_inst::__VnoInFunc_get_instruction_name\n"); );
    // Body
    get_instruction_name__Vfuncrtn = ""s;
    if ((0U == (IData)(actual_format))) {
        this->__VnoInFunc_get_r_type_name(vlSymsp, get_instruction_name__Vfuncrtn);
    } else if ((1U == (IData)(actual_format))) {
        this->__VnoInFunc_get_i_type_name(vlSymsp, get_instruction_name__Vfuncrtn);
    } else if ((2U == (IData)(actual_format))) {
        this->__VnoInFunc_get_j_type_name(vlSymsp, get_instruction_name__Vfuncrtn);
    } else {
        get_instruction_name__Vfuncrtn = "UNKNOWN"s;
    }
    ++(vlSymsp->__Vcoverage[2190]);
}

void VtbCover_top___024unit__03a__03arand_inst::__VnoInFunc_get_r_type_name(VtbCover_top__Syms* __restrict vlSymsp, std::string &get_r_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VtbCover_top___024unit__03a__03arand_inst::__VnoInFunc_get_r_type_name\n"); );
    // Body
    get_r_type_name__Vfuncrtn = ((0x00000020U & (IData)(this->__PVT__funct))
                                  ? ((0x00000010U & (IData)(this->__PVT__funct))
                                      ? "R_UNKNOWN"s
                                      : ((8U & (IData)(this->__PVT__funct))
                                          ? ((4U & (IData)(this->__PVT__funct))
                                              ? "R_UNKNOWN"s
                                              : ((2U 
                                                  & (IData)(this->__PVT__funct))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(this->__PVT__funct))
                                                   ? "SLTU"s
                                                   : "SLT"s)
                                                  : "R_UNKNOWN"s))
                                          : ((4U & (IData)(this->__PVT__funct))
                                              ? ((2U 
                                                  & (IData)(this->__PVT__funct))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(this->__PVT__funct))
                                                   ? "NOR"s
                                                   : "R_UNKNOWN"s)
                                                  : 
                                                 ((1U 
                                                   & (IData)(this->__PVT__funct))
                                                   ? "OR"s
                                                   : "AND"s))
                                              : ((2U 
                                                  & (IData)(this->__PVT__funct))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(this->__PVT__funct))
                                                   ? "SUBU"s
                                                   : "SUB"s)
                                                  : 
                                                 ((1U 
                                                   & (IData)(this->__PVT__funct))
                                                   ? "ADDU"s
                                                   : "ADD"s)))))
                                  : ((0x00000010U & (IData)(this->__PVT__funct))
                                      ? "R_UNKNOWN"s
                                      : ((8U & (IData)(this->__PVT__funct))
                                          ? ((4U & (IData)(this->__PVT__funct))
                                              ? "R_UNKNOWN"s
                                              : ((2U 
                                                  & (IData)(this->__PVT__funct))
                                                  ? "R_UNKNOWN"s
                                                  : 
                                                 ((1U 
                                                   & (IData)(this->__PVT__funct))
                                                   ? "R_UNKNOWN"s
                                                   : "JR"s)))
                                          : ((4U & (IData)(this->__PVT__funct))
                                              ? "R_UNKNOWN"s
                                              : ((2U 
                                                  & (IData)(this->__PVT__funct))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(this->__PVT__funct))
                                                   ? "R_UNKNOWN"s
                                                   : "SRL"s)
                                                  : 
                                                 ((1U 
                                                   & (IData)(this->__PVT__funct))
                                                   ? "R_UNKNOWN"s
                                                   : "SLL"s))))));
    ++(vlSymsp->__Vcoverage[2204]);
}

void VtbCover_top___024unit__03a__03arand_inst::__VnoInFunc_get_i_type_name(VtbCover_top__Syms* __restrict vlSymsp, std::string &get_i_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VtbCover_top___024unit__03a__03arand_inst::__VnoInFunc_get_i_type_name\n"); );
    // Body
    get_i_type_name__Vfuncrtn = ((0x00000020U & (IData)(this->__PVT__opcode))
                                  ? ((0x00000010U & (IData)(this->__PVT__opcode))
                                      ? ((8U & (IData)(this->__PVT__opcode))
                                          ? ((4U & (IData)(this->__PVT__opcode))
                                              ? "I_UNKNOWN"s
                                              : ((2U 
                                                  & (IData)(this->__PVT__opcode))
                                                  ? "I_UNKNOWN"s
                                                  : 
                                                 ((1U 
                                                   & (IData)(this->__PVT__opcode))
                                                   ? "I_UNKNOWN"s
                                                   : "SC"s)))
                                          : ((4U & (IData)(this->__PVT__opcode))
                                              ? "I_UNKNOWN"s
                                              : ((2U 
                                                  & (IData)(this->__PVT__opcode))
                                                  ? "I_UNKNOWN"s
                                                  : 
                                                 ((1U 
                                                   & (IData)(this->__PVT__opcode))
                                                   ? "I_UNKNOWN"s
                                                   : "LL"s))))
                                      : ((8U & (IData)(this->__PVT__opcode))
                                          ? ((4U & (IData)(this->__PVT__opcode))
                                              ? "I_UNKNOWN"s
                                              : ((2U 
                                                  & (IData)(this->__PVT__opcode))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(this->__PVT__opcode))
                                                   ? "SW"s
                                                   : "I_UNKNOWN"s)
                                                  : 
                                                 ((1U 
                                                   & (IData)(this->__PVT__opcode))
                                                   ? "SH"s
                                                   : "SB"s)))
                                          : ((4U & (IData)(this->__PVT__opcode))
                                              ? ((2U 
                                                  & (IData)(this->__PVT__opcode))
                                                  ? "I_UNKNOWN"s
                                                  : 
                                                 ((1U 
                                                   & (IData)(this->__PVT__opcode))
                                                   ? "LHU"s
                                                   : "LBU"s))
                                              : ((2U 
                                                  & (IData)(this->__PVT__opcode))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(this->__PVT__opcode))
                                                   ? "LW"s
                                                   : "I_UNKNOWN"s)
                                                  : "I_UNKNOWN"s))))
                                  : ((0x00000010U & (IData)(this->__PVT__opcode))
                                      ? "I_UNKNOWN"s
                                      : ((8U & (IData)(this->__PVT__opcode))
                                          ? ((4U & (IData)(this->__PVT__opcode))
                                              ? ((2U 
                                                  & (IData)(this->__PVT__opcode))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(this->__PVT__opcode))
                                                   ? "LUI"s
                                                   : "I_UNKNOWN"s)
                                                  : 
                                                 ((1U 
                                                   & (IData)(this->__PVT__opcode))
                                                   ? "ORI"s
                                                   : "ANDI"s))
                                              : ((2U 
                                                  & (IData)(this->__PVT__opcode))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(this->__PVT__opcode))
                                                   ? "SLTIU"s
                                                   : "SLTI"s)
                                                  : 
                                                 ((1U 
                                                   & (IData)(this->__PVT__opcode))
                                                   ? "ADDIU"s
                                                   : "ADDI"s)))
                                          : ((4U & (IData)(this->__PVT__opcode))
                                              ? ((2U 
                                                  & (IData)(this->__PVT__opcode))
                                                  ? "I_UNKNOWN"s
                                                  : 
                                                 ((1U 
                                                   & (IData)(this->__PVT__opcode))
                                                   ? "BNE"s
                                                   : "BEQ"s))
                                              : "I_UNKNOWN"s))));
    ++(vlSymsp->__Vcoverage[2223]);
}

void VtbCover_top___024unit__03a__03arand_inst::__VnoInFunc_get_j_type_name(VtbCover_top__Syms* __restrict vlSymsp, std::string &get_j_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VtbCover_top___024unit__03a__03arand_inst::__VnoInFunc_get_j_type_name\n"); );
    // Body
    get_j_type_name__Vfuncrtn = ((2U == (IData)(this->__PVT__opcode))
                                  ? "J"s : ((3U == (IData)(this->__PVT__opcode))
                                             ? "JAL"s
                                             : "J_UNKNOWN"s));
    ++(vlSymsp->__Vcoverage[2227]);
}

void VtbCover_top___024unit__03a__03arand_inst::init(VtbCover_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VtbCover_top___024unit__03a__03arand_inst::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ++(vlSymsp->__Vcoverage[2228]);
    this->__PVT__constraint.write_var(this->__PVT__opcode, 6ULL, 
                                      "opcode", 0ULL);
    this->__PVT__constraint.write_var(this->__PVT__rs, 5ULL, 
                                      "rs", 0ULL);
    this->__PVT__constraint.write_var(this->__PVT__rt, 5ULL, 
                                      "rt", 0ULL);
    this->__PVT__constraint.write_var(this->__PVT__rd, 5ULL, 
                                      "rd", 0ULL);
    this->__PVT__constraint.write_var(this->__PVT__shamt, 5ULL, 
                                      "shamt", 0ULL);
    this->__PVT__constraint.write_var(this->__PVT__addr, 0x000000000000001aULL, 
                                      "addr", 0ULL);
    this->__PVT__constraint.write_var(this->__PVT__funct, 6ULL, 
                                      "funct", 0ULL);
}

void VtbCover_top___024unit__03a__03arand_inst::__VnoInFunc_randomize(VtbCover_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VtbCover_top___024unit__03a__03arand_inst::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    ++(vlSymsp->__Vcoverage[2229]);
    this->__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = this->__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void VtbCover_top___024unit__03a__03arand_inst::__VnoInFunc_opcode_valid_setup_constraint(VtbCover_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VtbCover_top___024unit__03a__03arand_inst::__VnoInFunc_opcode_valid_setup_constraint\n"); );
    // Body
    this->__PVT__constraint.hard("(bvor (bvor (bvor (bvor (bvor (bvor (bvor (bvor (bvor (bvor (bvor (bvor (bvor (bvor (bvor (bvor (bvor (bvor (bvor (bvor (bvor (bvor (bvor (bvor (bvor (bvor (bvor (__Vbv (= opcode #b000000)) (__Vbv (= opcode #b000000))) (__Vbv (= opcode #b000000))) (__Vbv (= opcode #b000000))) (__Vbv (= opcode #b000000))) (__Vbv (= opcode #b000000))) (__Vbv (= opcode #b000000))) (__Vbv (= opcode #b000000))) (__Vbv (= opcode #b000000))) (__Vbv (= opcode #b000000))) (__Vbv (= opcode #b001000))) (__Vbv (= opcode #b001001))) (__Vbv (= opcode #b001100))) (__Vbv (= opcode #b000100))) (__Vbv (= opcode #b000101))) (__Vbv (= opcode #b000010))) (__Vbv (= opcode #b000011))) (__Vbv (= opcode #b100100))) (__Vbv (= opcode #b100101))) (__Vbv (= opcode #b001111))) (__Vbv (= opcode #b100011))) (__Vbv (= opcode #b001101))) (__Vbv (= opcode #b001010))) (__Vbv (= opcode #b001011))) (__Vbv (= opcode #b101000))) (__Vbv (= opcode #b111000))) (__Vbv (= opcode #b101001))) (__Vbv (= opcode #b101011)))"s, "tb/tbCover_top.sv", 0x0000004bU, 
                                 "      opcode inside {6'd0, 6'd0, 6'd0, 6'd0, 6'd0,");
}

void VtbCover_top___024unit__03a__03arand_inst::__VnoInFunc_valid_reg_setup_constraint(VtbCover_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VtbCover_top___024unit__03a__03arand_inst::__VnoInFunc_valid_reg_setup_constraint\n"); );
    // Body
    this->__PVT__constraint.hard("(bvand (__Vbv (bvuge ((_ zero_extend 27) rs) #x00000000)) (__Vbv (bvule ((_ zero_extend 27) rs) #x0000001f)))"s, "tb/tbCover_top.sv", 0x00000053U, 
                                 "      rs inside {[0:31]};");
    this->__PVT__constraint.hard("(bvand (__Vbv (bvuge ((_ zero_extend 27) rt) #x00000001)) (__Vbv (bvule ((_ zero_extend 27) rt) #x0000001f)))"s, "tb/tbCover_top.sv", 0x00000054U, 
                                 "      rt inside {[1:31]};");
    this->__PVT__constraint.hard("(bvand (__Vbv (bvuge ((_ zero_extend 27) rd) #x00000001)) (__Vbv (bvule ((_ zero_extend 27) rd) #x0000001f)))"s, "tb/tbCover_top.sv", 0x00000055U, 
                                 "      rd inside {[1:31]};");
}

void VtbCover_top___024unit__03a__03arand_inst::__VnoInFunc_shamt_range_setup_constraint(VtbCover_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VtbCover_top___024unit__03a__03arand_inst::__VnoInFunc_shamt_range_setup_constraint\n"); );
    // Body
    this->__PVT__constraint.hard("(bvand (__Vbv (bvuge ((_ zero_extend 27) shamt) #x00000000)) (__Vbv (bvule ((_ zero_extend 27) shamt) #x00000002)))"s, "tb/tbCover_top.sv", 0x00000058U, 
                                 "      shamt inside {[0:2]};");
}

void VtbCover_top___024unit__03a__03arand_inst::__VnoInFunc_addr_range_setup_constraint(VtbCover_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VtbCover_top___024unit__03a__03arand_inst::__VnoInFunc_addr_range_setup_constraint\n"); );
    // Body
    this->__PVT__constraint.hard("(bvand (__Vbv (bvuge ((_ zero_extend 6) addr) #x00000000)) (__Vbv (bvule ((_ zero_extend 6) addr) #x000000c7)))"s, "tb/tbCover_top.sv", 0x0000005bU, 
                                 "      addr inside {[0:200-1]};");
}

void VtbCover_top___024unit__03a__03arand_inst::__VnoInFunc_funct_valid_setup_constraint(VtbCover_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VtbCover_top___024unit__03a__03arand_inst::__VnoInFunc_funct_valid_setup_constraint\n"); );
    // Body
    this->__PVT__constraint.hard("(bvor (bvor (bvor (bvor (bvor (bvor (bvor (bvor (bvor (bvor (bvor (__Vbv (= funct #b100000)) (__Vbv (= funct #b100001))) (__Vbv (= funct #b100100))) (__Vbv (= funct #b001000))) (__Vbv (= funct #b100111))) (__Vbv (= funct #b100101))) (__Vbv (= funct #b101010))) (__Vbv (= funct #b101011))) (__Vbv (= funct #b000000))) (__Vbv (= funct #b000010))) (__Vbv (= funct #b100010))) (__Vbv (= funct #b100011)))"s, "tb/tbCover_top.sv", 0x0000005eU, 
                                 "      funct inside {6'h20, 6'h21, 6'h24, 6'h08,");
}

void VtbCover_top___024unit__03a__03arand_inst::__VnoInFunc___Vsetup_constraints(VtbCover_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VtbCover_top___024unit__03a__03arand_inst::__VnoInFunc___Vsetup_constraints\n"); );
    // Body
    this->__VnoInFunc_opcode_valid_setup_constraint(vlSymsp);
    this->__VnoInFunc_valid_reg_setup_constraint(vlSymsp);
    this->__VnoInFunc_shamt_range_setup_constraint(vlSymsp);
    this->__VnoInFunc_addr_range_setup_constraint(vlSymsp);
    this->__VnoInFunc_funct_valid_setup_constraint(vlSymsp);
}

void VtbCover_top___024unit__03a__03arand_inst::__VnoInFunc___VBasicRand(VtbCover_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VtbCover_top___024unit__03a__03arand_inst::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
    this->__PVT__immediate = (0x0000ffffU & VL_RANDOM_RNG_I(__Vm_rng));
}

void VtbCover_top___024unit__03a__03arand_inst::_ctor_var_reset(VtbCover_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VtbCover_top___024unit__03a__03arand_inst::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__opcode = VL_SCOPED_RAND_RESET_I(6, 10413277866406652701ULL, 17409787017080135397ull);
    __PVT__rs = VL_SCOPED_RAND_RESET_I(5, 10413277866406652701ULL, 12094941224044728426ull);
    __PVT__rt = VL_SCOPED_RAND_RESET_I(5, 10413277866406652701ULL, 14405365575028599407ull);
    __PVT__rd = VL_SCOPED_RAND_RESET_I(5, 10413277866406652701ULL, 10303652599525973633ull);
    __PVT__shamt = VL_SCOPED_RAND_RESET_I(5, 10413277866406652701ULL, 1053237437445446959ull);
    __PVT__funct = VL_SCOPED_RAND_RESET_I(6, 10413277866406652701ULL, 7359412319030583308ull);
    __PVT__immediate = VL_SCOPED_RAND_RESET_I(16, 10413277866406652701ULL, 14979782960453030085ull);
    __PVT__addr = VL_SCOPED_RAND_RESET_I(26, 10413277866406652701ULL, 14934084843038794831ull);
}
