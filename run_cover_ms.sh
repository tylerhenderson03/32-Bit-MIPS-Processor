
#!/bin/sh
vlog -sv ./rtl/covergroups.sv ./rtl/if_stage.sv ./rtl/id_stage.sv ./rtl/ex_stage.sv \
     ./rtl/alu.sv ./rtl/mem_stage.sv ./rtl/wb_stage.sv ./rtl/top.sv \
     ./tb/tbCover_top.sv ./rtl/data_mem.sv ./rtl/hazard_detection.sv ./rtl/fwd_unit.sv \
     +fcover -cover sbcef +cover=f -O0 
vsim tbCover_top -c -coverage -do cover.do

