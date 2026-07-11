verilator --binary -j 0 -Wall --trace --top tb_if \
    -Wno-SYNCASYNCNET \
    ./rtl/if_stage.sv ./tb/tb_if.sv

./obj_dir/Vtb_if

surfer tb_if.vcd
