SV_SRC  = counter.sv
TB_SRC  = tb_counter.cpp
TOP     = counter

sim:
	verilator --cc --trace --build --exe -Wall $(SV_SRC) $(TB_SRC) -o sim_$(TOP)
	./obj_dir/sim_$(TOP)

lint:
	verible-verilog-lint $(SV_SRC)

synth:
	yosys synth.ys

clean:
	rm -rf obj_dir *.vcd

.PHONY: sim lint synth clean