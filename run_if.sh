verilator --binary -j 0 -Wall --trace --top tb_if \
    -Wno-SYNCASYNCNET \
    if_stage.sv tb_if.sv

./obj_dir/Vtb_if

surfer tb_if.vcd
