verilator --binary -j 0 -Wall --trace --top tb_id \
    -Wno-SYNCASYNCNET \
    ./rtl/id_stage.sv ./tb/tb_id.sv

./obj_dir/Vtb_id

surfer tb_id.vcd
