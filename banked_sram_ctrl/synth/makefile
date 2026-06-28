###############################################################################
# Banked SRAM Controller Synthesis
###############################################################################

.DEFAULT_GOAL := help

include config.mk

.PHONY: \
	help \
	synth \
	clean

###############################################################################
# Help
###############################################################################

help:
	@echo ""
	@echo "Synthesis Targets"
	@echo "-----------------"
	@echo "make synth    Run synthesis"
	@echo "make clean    Remove synthesis outputs"
	@echo ""

###############################################################################
# Synthesis
###############################################################################

synth:
	@echo ""
	@echo "[SYNTHESIS]"

	@mkdir -p $(REPORT_DIR)
	@mkdir -p $(NETLIST_DIR)
	@mkdir -p $(LOG_DIR)
	@mkdir -p $(GENERATED_DIR)

	@echo "# Auto-generated. Do not edit." > $(READ_RTL_SCRIPT)

	@while read file; do \
		echo "read_verilog -sv $$file" >> $(READ_RTL_SCRIPT); \
	done < $(FILELIST)

	$(YOSYS) \
		-l $(LOG_DIR)/yosys.log \
		-s synth.ys

	@echo ""
	@echo "[DONE]"
	@echo "Netlist : $(NETLIST_DIR)/banked_sram_ctrl_generic.v"
	@echo "Log     : $(LOG_DIR)/yosys.log"

###############################################################################
# Clean
###############################################################################

clean:
	@echo "[CLEAN]"

	@rm -rf $(REPORT_DIR)
	@rm -rf $(NETLIST_DIR)
	@rm -rf $(LOG_DIR)
	@rm -rf $(GENERATED_DIR)

	@mkdir -p $(REPORT_DIR)
	@mkdir -p $(NETLIST_DIR)
	@mkdir -p $(LOG_DIR)

	@echo "[DONE]"