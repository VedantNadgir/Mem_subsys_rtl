RTL := ../../rtl
VERIF := .
TOP := tb_sys
VL := verilator
FLAGS := --cc --exe --build --timing -Wno-WIDTH -Wno-UNUSED -Wno-UNOPTFLAT \
		 --top-module $(TOP)

ifeq ($(WAVES),1)
FLAGS += --trace
endif

SRCS := $(RTL)/pkg/sram_ctrl_pkg.sv \
		$(RTL)/sram_array.sv \
		$(RTL)/req_fifo.sv \
		$(RTL)/rsp_fifo.sv \
		$(RTL)/per_bank_arb.sv \
		$(RTL)/bank_scheduler.sv \
		$(RTL)/rsp_mux.sv \
		$(RTL)/perf_counter.sv \
		$(RTL)/banked_sram_ctrl.sv \
		$(VERIF)/verif_pkg.sv \
		$(VERIF)/scoreboard.sv \
		$(VERIF)/driver.sv \
		$(VERIF)/monitor.sv \
		$(VERIF)/env.sv \
		$(VERIF)/tb_sys.sv

SIM := obj_dir/V$(TOP)
.PHONY: sim regress lint clean smoke

sim: $(SIM)
	@mkdir -p waves
	./$(SIM)

$(SIM): $(SRCS)
		$(VL) $(FLAGS) $(SRCS)

regress: sim
		@echo "Regression Complete"

lint:
	$(VL) --lint-only $(SRCS) -Wno-WIDTH -Wno-UNUSED

clean: 
	rm -rf obj_dir waves