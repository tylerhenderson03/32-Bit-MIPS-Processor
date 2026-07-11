verilator --binary -j 0 -Wall --trace --top tb_ex \
    -Wno-SYNCASYNCNET \
    ./rtl/ex_stage.sv ./tb/tb_ex.sv

./obj_dir/Vtb_ex

surfer tb_ex.vcd
