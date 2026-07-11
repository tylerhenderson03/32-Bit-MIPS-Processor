verilator --binary -j 0 -Wall --trace --top tb_mem \
    -Wno-SYNCASYNCNET \
    ./rtl/mem_stage.sv ./tb/tb_mem.sv

./obj_dir/Vtb_mem

surfer tb_mem.vcd
