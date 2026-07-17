#!/bin/bash


rm -rf obj_dir/
rm -rf coverage_data/
mkdir -p coverage_data/

verilator --binary -j 0 -Wall --trace --top tbCover_top \
    --coverage --coverage-user \
    -Wno-SYNCASYNCNET \
    ./rtl/covergroups.sv ./rtl/if_stage.sv ./rtl/id_stage.sv ./rtl/ex_stage.sv \
    ./rtl/alu.sv ./rtl/mem_stage.sv ./rtl/wb_stage.sv ./rtl/top.sv \
    ./tb/tbCover_top.sv ./rtl/data_mem.sv ./rtl/hazard_detection.sv ./rtl/fwd_unit.sv

SEED=${1:-$RANDOM}
VERILATOR_RAND_SEED=$SEED ./obj_dir/VtbCover_top

verilator_coverage coverage.dat
verilator_coverage --report hier ./coverage.dat
verilator_coverage --report hier ./coverage.dat > ./coverage_data/coverage.txt


surfer ./vcd/tbCover_top.vcd
