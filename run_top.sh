verilator --binary -j 0 -Wall --trace --top tb_top \
    -Wno-SYNCASYNCNET \
    if_stage.sv id_stage.sv ex_stage.sv mem_stage.sv wb_stage.sv top.sv tb_top.sv data_mem.sv 

./obj_dir/Vtb_top

surfer tb_top.vcd
