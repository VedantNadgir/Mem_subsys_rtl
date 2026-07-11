###############################################################################
# System Test Catalog — Thin Layer
#
# Lists available system-level tests. Each target delegates to the
# unified build engine in sim/makefile.
#
# Never defines SRCS, FLAGS, or simulator invocations.
###############################################################################

SIM_DIR := ../../sim

# Default: run the full system TB (all 5 test-tasks: smoke, conflict, backpressure, random, stress)
.PHONY: all sim smoke conflict backpressure random stress clean

all: sim

sim:
	@$(MAKE) -C $(SIM_DIR) sim TEST_TYPE=system TEST=system_all PARAMS="$(PARAMS)" || true

# Individual test-task names (for convenience; all run in same simulation)
smoke:
	@$(MAKE) -C $(SIM_DIR) sim TEST_TYPE=system TEST=system_all

conflict:
	@$(MAKE) -C $(SIM_DIR) sim TEST_TYPE=system TEST=system_all

backpressure:
	@$(MAKE) -C $(SIM_DIR) sim TEST_TYPE=system TEST=system_all

random:
	@$(MAKE) -C $(SIM_DIR) sim TEST_TYPE=system TEST=system_all

stress:
	@$(MAKE) -C $(SIM_DIR) sim TEST_TYPE=system TEST=system_all

clean:
	@$(MAKE) -C $(SIM_DIR) clean