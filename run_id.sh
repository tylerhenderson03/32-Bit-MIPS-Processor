verilator --binary -j 0 -Wall --trace --top tb_id \
    -Wno-SYNCASYNCNET \
    id_stage.sv tb_id.sv

./obj_dir/Vtb_id

surfer tb_id.vcd
