verilator --binary -j 0 -Wall --trace --top tb_top \
    -Wno-SYNCASYNCNET \
    ./rtl/if_stage.sv ./rtl/id_stage.sv ./rtl/ex_stage.sv ./rtl/mem_stage.sv ./rtl/wb_stage.sv ./rtl/top.sv ./tb/tb_top.sv ./rtl/data_mem.sv 

./obj_dir/Vtb_top

surfer tb_top.vcd
