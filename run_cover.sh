#!/bin/bash
rm -rf obj_dir/

verilator --binary -j 0 -Wall --trace --top tbCover_top \
    -Wno-SYNCASYNCNET \
    ./rtl/if_stage.sv ./rtl/id_stage.sv ./rtl/ex_stage.sv ./rtl/alu.sv ./rtl/mem_stage.sv ./rtl/wb_stage.sv ./rtl/top.sv ./tb/tbCover_top.sv ./rtl/data_mem.sv ./rtl/hazard_detection.sv ./rtl/fwd_unit.sv

SEED=${1:-$RANDOM}
VERILATOR_RAND_SEED=$SEED ./obj_dir/VtbCover_top

surfer ./vcd/tbCover_top.vcd