#!/usr/bin/env python3
"""
leakage_power.py  —  Static leakage power estimate from Liberty + synthesis reports.

Does NOT require re-synthesis.  Reads already-generated artifacts:
  - Sky130 Liberty .lib file  : cell_leakage_power per cell type (units: nW)
  - reports/*_report.txt      : Technology-Mapped cell breakdown per module

Sky130 HD leakage_power_unit = "1nW", so all values from the Liberty file
are in nanowatts.  Dynamic power (switching + internal) requires VCD/SAIF.

Usage (standalone):
  python3 leakage_power.py \\
      --liberty  <repo>/pdk/sky130_fd_sc_hd/generated_libs/sky130_fd_sc_hd__tt_025C_1v80.lib \\
      --report-dir reports/ \\
      [--output reports/leakage_power.txt]

Called automatically by:
  make power          (run any time reports already exist)
  make synth_unit     (after sweep completes)
  make synth_all      (after sweep completes)
"""

import argparse
import glob
import os
import re
import sys


# ---------------------------------------------------------------------------
# Liberty parsing
# ---------------------------------------------------------------------------

def parse_liberty_leakage(liberty_path):
    """
    Extract cell_leakage_power (nW) for every cell in a Liberty .lib file.

    The Sky130 generated Liberty uses quoted cell names:
        cell ("sky130_fd_sc_hd__nand2_1") {
            cell_leakage_power : 0.7564400000 ;
            ...
        }

    Strategy: split text on 'cell (' boundaries, then search each block
    for cell_leakage_power.  Fast and tolerant of nested brace variations.

    Returns dict: {cell_name (str): leakage_nW (float)}
    """
    if not os.path.isfile(liberty_path):
        sys.stderr.write("[ERROR] Liberty file not found: {}\n".format(liberty_path))
        sys.exit(1)

    with open(liberty_path, "r") as fh:
        text = fh.read()

    # Each cell block starts with:  cell ("name") {  or  cell (name) {
    cell_header_re = re.compile(r'cell\s*\("?(sky130_\w+)"?\)')
    leakage_re     = re.compile(r'\bcell_leakage_power\s*:\s*([\d.Ee+-]+)')

    headers = list(cell_header_re.finditer(text))
    if not headers:
        sys.stderr.write("[ERROR] No sky130 cells found in Liberty file.\n")
        sys.exit(1)

    leakage_db = {}
    for idx, hdr in enumerate(headers):
        cell_name = hdr.group(1)
        start     = hdr.start()
        end       = headers[idx + 1].start() if idx + 1 < len(headers) else len(text)
        block     = text[start:end]

        m = leakage_re.search(block)
        if m:
            leakage_db[cell_name] = float(m.group(1))

    return leakage_db


# ---------------------------------------------------------------------------
# Report parsing  (reads existing *_report.txt — no re-synthesis)
# ---------------------------------------------------------------------------

REPORT_SUFFIX = "_report.txt"

# Matches the Technology-Mapped cell breakdown lines only.
# Pattern: "  sky130_fd_sc_hd__<cell>   <count>"
# The two leading spaces come from parse_report.py's format_cell_breakdown().
_CELL_LINE_RE = re.compile(r"^\s{2}(sky130_\w+)\s+(\d+)\s*$")
_MODULE_RE    = re.compile(r"^Synthesis Report\s*[—-]+\s*module:\s*(\S+)")


def parse_report(report_path):
    """
    Extract the module name and Technology-Mapped cell breakdown from one
    *_report.txt file.

    Only lines matching 'sky130_...' are collected, so the pre-synthesis
    RTLIL cell sections ($add, $mux, etc.) are automatically skipped.

    Returns (module_name: str | None, cell_breakdown: {cell_name: count})
    """
    module_name    = None
    cell_breakdown = {}

    with open(report_path, "r") as fh:
        for line in fh:
            # Module name line
            m = _MODULE_RE.match(line)
            if m:
                module_name = m.group(1)
                continue

            # Cell line (only sky130 names match)
            m = _CELL_LINE_RE.match(line)
            if m:
                cell_breakdown[m.group(1)] = int(m.group(2))

    return module_name, cell_breakdown


# ---------------------------------------------------------------------------
# Power computation
# ---------------------------------------------------------------------------

def compute_leakage(cell_breakdown, leakage_db):
    """
    Multiply cell counts by Liberty leakage values.

    Returns:
        rows     : list of (cell_name, count, lk_per_cell_nw, total_nw)
                   sorted by total contribution, descending
        total_nw : float — grand total leakage in nW
        missing  : list of cell names not found in Liberty
    """
    rows    = []
    missing = []

    for cell_name, count in cell_breakdown.items():
        if cell_name in leakage_db:
            lk = leakage_db[cell_name]
            rows.append((cell_name, count, lk, count * lk))
        else:
            missing.append(cell_name)

    rows.sort(key=lambda r: r[3], reverse=True)
    total_nw = sum(r[3] for r in rows)
    return rows, total_nw, missing


# ---------------------------------------------------------------------------
# Formatting helpers
# ---------------------------------------------------------------------------

def _fmt_power(nw):
    """Human-readable power string with auto unit prefix."""
    if nw >= 1e6:
        return "{:.4f} mW".format(nw / 1e6)
    if nw >= 1e3:
        return "{:.4f} µW".format(nw / 1e3)
    return "{:.4f} nW".format(nw)


def build_report_text(modules_data):
    """
    Build the full leakage power report string.

    modules_data: list of (module_name, rows, total_nw, missing)
    """
    W   = 78
    SEP = "=" * W
    lines = []

    lines.append(SEP)
    lines.append("Leakage Power Estimate  —  sky130_fd_sc_hd  TT 25°C 1.80V")
    lines.append("Static gate leakage only  |  no switching activity  |  no wire capacitance")
    lines.append("Liberty source: sky130_fd_sc_hd__tt_025C_1v80.lib  (leakage_power_unit = 1nW)")
    lines.append(SEP)
    lines.append("")

    for module_name, rows, total_nw, missing in modules_data:
        lines.append("Module: {}".format(module_name))
        hdr = "  {:<44} {:>6}  {:>12}  {:>13}".format(
            "Cell", "Count", "Leakage/cell", "Contribution")
        lines.append(hdr)
        lines.append("  " + "-" * (W - 2))

        for cell_name, count, lk, contrib in rows:
            lines.append("  {:<44} {:>6}  {:>12}  {:>13}".format(
                cell_name, count,
                "{:.4f} nW".format(lk),
                "{:.3f} nW".format(contrib),
            ))

        if missing:
            lines.append("  [WARN] Liberty entry missing for: {}".format(
                ", ".join(missing)))

        lines.append("  " + "-" * (W - 2))
        lines.append("  Total leakage : {}  ({:.2f} nW)".format(
            _fmt_power(total_nw), total_nw))
        lines.append("")

    # Summary table
    lines.append(SEP)
    lines.append("Summary")
    lines.append(SEP)
    lines.append("{:<28} {:>8}  {:>14}  {:>14}".format(
        "Module", "Cells", "Leakage (nW)", "Leakage"))
    lines.append("-" * W)

    for module_name, rows, total_nw, _ in modules_data:
        n_cells = sum(r[1] for r in rows)
        lines.append("{:<28} {:>8}  {:>14.3f}  {:>14}".format(
            module_name, n_cells, total_nw, _fmt_power(total_nw)))

    lines.append(SEP)
    lines.append("")
    lines.append("Notes:")
    lines.append("  1. Values are static leakage (Ileak × Vdd) from Liberty cell_leakage_power.")
    lines.append("  2. Dynamic power (α × C × Vdd² × f) requires switching activity data.")
    lines.append("     Typical dynamic/leakage ratio: 10×–100× at nominal operating frequency.")
    lines.append("  3. For full power breakdown use OpenSTA with a VCD annotation.")

    return "\n".join(lines) + "\n"


# ---------------------------------------------------------------------------
# Main
# ---------------------------------------------------------------------------

def main():
    ap = argparse.ArgumentParser(
        description="Estimate static leakage power from Liberty + synthesis reports."
    )
    ap.add_argument("--liberty", required=True,
                    help="Path to sky130_fd_sc_hd__tt_025C_1v80.lib")
    ap.add_argument("--report-dir", required=True,
                    help="Directory containing *_report.txt synthesis reports")
    ap.add_argument("--output",
                    help="Output file (default: <report-dir>/leakage_power.txt)")
    args = ap.parse_args()

    if args.output is None:
        args.output = os.path.join(args.report_dir, "leakage_power.txt")

    # --- Parse Liberty ---------------------------------------------------
    print("[INFO] Reading Liberty: {}".format(args.liberty))
    leakage_db = parse_liberty_leakage(args.liberty)
    print("[INFO] Leakage data found for {} cell types.".format(len(leakage_db)))

    # --- Find report files -----------------------------------------------
    pattern      = os.path.join(args.report_dir, "*" + REPORT_SUFFIX)
    report_files = sorted(f for f in glob.glob(pattern)
                          if "leakage_power" not in os.path.basename(f))

    if not report_files:
        sys.stderr.write("[ERROR] No *_report.txt files in: {}\n".format(
            args.report_dir))
        sys.exit(1)

    print("[INFO] Processing {} module report(s).\n".format(len(report_files)))

    # --- Compute leakage per module --------------------------------------
    modules_data = []
    for rpath in report_files:
        module_name, breakdown = parse_report(rpath)
        if not module_name or not breakdown:
            print("[WARN] Skipped (no sky130 cells found): {}".format(rpath))
            continue
        rows, total_nw, missing = compute_leakage(breakdown, leakage_db)
        modules_data.append((module_name, rows, total_nw, missing))
        status = "[PASS]" if not missing else "[WARN]"
        print("{} {:28s}  {:6d} cells  {}".format(
            status, module_name, sum(r[1] for r in rows), _fmt_power(total_nw)))

    if not modules_data:
        sys.stderr.write("[ERROR] No valid module data found.\n")
        sys.exit(1)

    # --- Write output ----------------------------------------------------
    report_text = build_report_text(modules_data)
    with open(args.output, "w") as fh:
        fh.write(report_text)

    print("")
    print("[PASS] Leakage power report: {}".format(args.output))


if __name__ == "__main__":
    main()