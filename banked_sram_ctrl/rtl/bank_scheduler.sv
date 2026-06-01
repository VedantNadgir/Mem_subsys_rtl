// What Bank_Scheduler Does
// It's a 2-stage pipeline sitting between arbiter output and SRAM array.
// Cycle N:   Arbiter grants request → PP0 captures it
// Cycle N+1: PP0 → SRAM reads/writes → PP1 captures SRAM output
// Cycle N+2: PP1 → Response ready

module bank_scheduler #(
    parameter int NUM_REQ_PORTS = 4,
    parameter int BANK_SEL_BITS = 2,
    parameter int BANK_ADDR_BITS = 8,
    parameter int DATA_WIDTH = 32,
    parameter int STROBE_WIDTH = 4,
    parameter int ID_WIDTH = 4,
    parameter int PORT_ID_BITS = 2,
    parameter int TOTAL_ID_BITS = 6,
    parameter int ADDR_WIDTH = 10,
    parameter int PIPELINE_STAGES = 2
) (
    ports
);

endmodule
