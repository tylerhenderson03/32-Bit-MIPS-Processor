verilator --binary -j 0 -Wall --trace --top tb_wb \
    -Wno-SYNCASYNCNET \
    ./rtl/wb_stage.sv ./tb/tb_wb.sv

./obj_dir/Vtb_wb

surfer tb_wb.vcd
