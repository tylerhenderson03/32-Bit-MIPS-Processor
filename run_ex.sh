verilator --binary -j 0 -Wall --trace --top tb_ex \
    -Wno-SYNCASYNCNET \
    ex_stage.sv tb_ex.sv

./obj_dir/Vtb_ex

surfer tb_ex.vcd
