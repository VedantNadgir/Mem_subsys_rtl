#!/usr/bin/env python3
###############################################################################
# parse_report.py
#
# Two subcommands:
#
#   report     Reads a raw Yosys synthesis log and writes a human-readable
#              per-module report.
#
#   summarize  Reads every reports/<module>_report.txt file already
#              written by the 'report' subcommand and aggregates them
#              into reports/summary.txt and reports/summary.csv.
#
# This script does not invent any metric. If a checkpoint or a specific
# number cannot be found, the corresponding field is printed as
# "Unavailable before place-and-route" (for timing metrics) or
# "Unavailable - not found in log" / "Unavailable - not found in report"
# (for a structural metric that was expected but missing).
#
# Usage:
#   python3 parse_report.py report \
#       --module req_fifo \
#       --log logs/req_fifo.log \
#       --netlist netlists/req_fifo_netlist.v \
#       --report-out reports/req_fifo_report.txt
#
#   python3 parse_report.py summarize \
#       --report-dir reports \
#       --csv-out reports/summary.csv \
#       --txt-out reports/summary.txt
###############################################################################

import argparse
import csv
import glob
import os
import re
import sys


UNAVAILABLE_TIMING = "Unavailable before place-and-route"
UNAVAILABLE_MISSING = "Unavailable - not found in log"
UNAVAILABLE_IN_REPORT = "Unavailable - not found in report"

# Sequential cell name fragments, taken directly from the Sky130 HD
# standard cell library cell directory. Any cell whose name contains one
# of these fragments is classified as sequential (flip-flop or latch).
SEQUENTIAL_CELL_MARKERS = (
    "dfstp", "sdfrbp", "dlrtn", "dfbbp", "dfrtn", "dlxtn", "sdfbbn",
    "dfsbp", "dfxbp", "dlxbp", "sdfrtp", "dfrbp", "dfxtp", "sdfxtp",
    "dlxbn", "dlrbp", "dfbbn", "sdfsbp", "dlrtp", "sdfstp", "sdfbbp",
    "sdfrtn", "edfxtp", "edfxbp", "sedfxtp", "sedfxbp",
)

STAGE_MARKERS = ["HIERARCHY", "PRE_OPT", "POST_OPT", "POST_TECHMAP"]

REPORT_SUFFIX = "_report.txt"

SUMMARY_HEADER = ["Module", "Cells", "Area", "Delay", "Frequency", "Logic Depth", "Optimization %"]


def fail(message):
    sys.stderr.write("[ERROR] " + message + "\n")
    sys.exit(1)


# =============================================================================
# 'report' subcommand
# =============================================================================

def read_text_file(path, kind):
    try:
        with open(path, "r") as f:
            return f.read()
    except FileNotFoundError:
        fail(kind + " file not found: " + path)
    except OSError as exc:
        fail("Could not read " + kind + " file " + path + ": " + str(exc))


def extract_stage_sections(log_text):
    """
    Split the log into named sections using the ==STAGE:NAME== sentinels.
    Returns a dict: stage_name -> section text.
    """
    marker_pattern = re.compile(r"^==STAGE:(\w+)==\s*$", re.MULTILINE)
    matches = list(marker_pattern.finditer(log_text))

    sections = {}
    for i, match in enumerate(matches):
        stage_name = match.group(1)
        start = match.end()
        end = matches[i + 1].start() if i + 1 < len(matches) else len(log_text)
        sections[stage_name] = log_text[start:end]

    return sections


def parse_stat_block(section_text):
    """
    Parse a single Yosys 'stat' block into structured data.
    Handles both the verbose format and the compact tree format.
    Returns a dict with keys: wires, wire_bits, cells_total,
    cell_breakdown (dict name->count), area (float or None).
    """
    result = {
        "wires": None,
        "wire_bits": None,
        "cells_total": None,
        "cell_breakdown": {},
        "area": None,
    }

    # Wires: try verbose format first, then compact format
    wires_match = re.search(r"Number of wires:\s+(\d+)", section_text)
    if not wires_match:
        wires_match = re.search(
            r"^\s*(\d+)(?:\s+[\d.E+-]+)?\s+wires\s*$", section_text, re.MULTILINE
        )
    if wires_match:
        result["wires"] = int(wires_match.group(1))

    # Wire bits: try verbose format first, then compact format
    wire_bits_match = re.search(r"Number of wire bits:\s+(\d+)", section_text)
    if not wire_bits_match:
        wire_bits_match = re.search(
            r"^\s*(\d+)(?:\s+[\d.E+-]+)?\s+wire bits\s*$", section_text, re.MULTILINE
        )
    if wire_bits_match:
        result["wire_bits"] = int(wire_bits_match.group(1))

    # Cells total: try verbose format first, then compact format
    cells_match = re.search(r"Number of cells:\s+(\d+)", section_text)
    if not cells_match:
        cells_match = re.search(
            r"^\s*(\d+)(?:\s+[\d.E+-]+)?\s+cells\s*$", section_text, re.MULTILINE
        )
    if cells_match:
        result["cells_total"] = int(cells_match.group(1))

        # Cell breakdown lines immediately follow the "cells" line.
        # Pre-techmap compact:  "     3   $add"
        # Post-techmap compact:  "     1    5.005   sky130_fd_sc_hd__a21oi_1"
        after_cells_text = section_text[cells_match.end():]
        breakdown_pattern = re.compile(r"^\s*(\d+)(?:\s+[\d.E+-]+)?\s+(\S+)\s*$")
        for line in after_cells_text.splitlines():
            line = line.rstrip()
            if not line:
                continue
            line_match = breakdown_pattern.match(line)
            if not line_match:
                break
            cell_count = int(line_match.group(1))
            cell_name = line_match.group(2)
            # Guard against accidentally matching the "cells" line itself
            # or other metric lines that start with a number.
            if cell_name in (
                "cells",
                "wires",
                "wire",
                "bits",
                "processes",
                "ports",
                "port",
            ):
                break
            result["cell_breakdown"][cell_name] = cell_count

    # Area (only present in post-techmap / stat -liberty)
    area_match = re.search(
        r"Chip area for module[^:]*:\s*([\d.E+-]+)", section_text
    )
    if area_match:
        result["area"] = float(area_match.group(1))

    return result


def classify_cells(cell_breakdown):
    """
    Split a cell_breakdown dict into (sequential_count, combinational_count)
    using SEQUENTIAL_CELL_MARKERS. A cell is sequential if any marker
    fragment appears in its name (case-insensitive).
    """
    sequential_count = 0
    combinational_count = 0

    for cell_name, count in cell_breakdown.items():
        cell_name_lower = cell_name.lower()
        is_sequential = any(
            marker in cell_name_lower
            for marker in SEQUENTIAL_CELL_MARKERS
        )
        if is_sequential:
            sequential_count += count
        else:
            combinational_count += count

    return sequential_count, combinational_count


def format_cell_breakdown(cell_breakdown):
    if not cell_breakdown:
        return "  " + UNAVAILABLE_MISSING
    lines = []
    for cell_name in sorted(cell_breakdown.keys()):
        lines.append("  {:<40} {}".format(cell_name, cell_breakdown[cell_name]))
    return "\n".join(lines)


def format_value(value, unit=""):
    if value is None:
        return UNAVAILABLE_MISSING
    return "{}{}".format(value, unit)


def build_report(module, log_path, netlist_path, report_path, sections):
    for stage in STAGE_MARKERS:
        if stage not in sections:
            fail(
                "Expected checkpoint '==STAGE:{}==' not found in log: {}\n"
                "        This means synth.ys did not run to completion, or "
                "the template was modified.\n"
                "        Re-run 'make synth MODULE={}' and check the log "
                "for errors.".format(stage, log_path, module)
            )

    hierarchy_stat = parse_stat_block(sections["HIERARCHY"])
    pre_opt_stat = parse_stat_block(sections["PRE_OPT"])
    post_opt_stat = parse_stat_block(sections["POST_OPT"])
    post_techmap_stat = parse_stat_block(sections["POST_TECHMAP"])

    seq_count, comb_count = classify_cells(post_techmap_stat["cell_breakdown"])

    pre_opt_cells = pre_opt_stat["cells_total"]
    post_opt_cells = post_opt_stat["cells_total"]

    if pre_opt_cells is not None and post_opt_cells is not None and pre_opt_cells > 0:
        reduction_pct = 100.0 * (pre_opt_cells - post_opt_cells) / pre_opt_cells
        reduction_str = "{:.2f}%".format(reduction_pct)
    else:
        reduction_str = UNAVAILABLE_MISSING

    lines = []
    lines.append("=" * 70)
    lines.append("Synthesis Report — module: {}".format(module))
    lines.append("=" * 70)
    lines.append("")

    lines.append("--- Hierarchy Report (post-elaboration, pre-processing) ---")
    lines.append("Wire count       : {}".format(format_value(hierarchy_stat["wires"])))
    lines.append("Wire bits        : {}".format(format_value(hierarchy_stat["wire_bits"])))
    lines.append("Cell count       : {}".format(format_value(hierarchy_stat["cells_total"])))
    lines.append("Cell breakdown   :")
    lines.append(format_cell_breakdown(hierarchy_stat["cell_breakdown"]))
    lines.append("")

    lines.append("--- Pre-Optimization Report ---")
    lines.append("Wire count       : {}".format(format_value(pre_opt_stat["wires"])))
    lines.append("Wire bits        : {}".format(format_value(pre_opt_stat["wire_bits"])))
    lines.append("Cell count       : {}".format(format_value(pre_opt_stat["cells_total"])))
    lines.append("Cell breakdown   :")
    lines.append(format_cell_breakdown(pre_opt_stat["cell_breakdown"]))
    lines.append("")

    lines.append("--- Post-Optimization Report ---")
    lines.append("Wire count       : {}".format(format_value(post_opt_stat["wires"])))
    lines.append("Wire bits        : {}".format(format_value(post_opt_stat["wire_bits"])))
    lines.append("Cell count       : {}".format(format_value(post_opt_stat["cells_total"])))
    lines.append("Cell breakdown   :")
    lines.append(format_cell_breakdown(post_opt_stat["cell_breakdown"]))
    lines.append("")

    lines.append("--- Optimization Summary ---")
    lines.append("Pre-optimization cell count  : {}".format(format_value(pre_opt_cells)))
    lines.append("Post-optimization cell count : {}".format(format_value(post_opt_cells)))
    lines.append("Reduction %                  : {}".format(reduction_str))
    lines.append("")

    lines.append("--- Technology-Mapped Report (final, Sky130 HD) ---")
    lines.append("Gate count (total cells)     : {}".format(format_value(post_techmap_stat["cells_total"])))
    lines.append("Cell count                   : {}".format(format_value(post_techmap_stat["cells_total"])))
    lines.append("Sequential cell count         : {}".format(format_value(seq_count)))
    lines.append("Combinational cell count      : {}".format(format_value(comb_count)))
    lines.append("Wire count                   : {}".format(format_value(post_techmap_stat["wires"])))
    lines.append("Wire bits                    : {}".format(format_value(post_techmap_stat["wire_bits"])))
    lines.append(
        "Area (liberty units, from stat -liberty) : {}".format(
            format_value(post_techmap_stat["area"])
        )
    )
    lines.append("Cell breakdown                :")
    lines.append(format_cell_breakdown(post_techmap_stat["cell_breakdown"]))
    lines.append("")

    lines.append("--- Timing Report ---")
    lines.append("Critical path estimate   : {}".format(UNAVAILABLE_TIMING))
    lines.append("Maximum frequency estimate: {}".format(UNAVAILABLE_TIMING))
    lines.append("Logic depth              : {}".format(UNAVAILABLE_TIMING))
    lines.append(
        "Note: Yosys without a place-and-route / STA tool does not"
    )
    lines.append(
        "produce reliable timing numbers. These fields are intentionally"
    )
    lines.append("left unavailable rather than estimated.")
    lines.append("")

    lines.append("--- Artifact Paths ---")
    lines.append("Generated netlist path : {}".format(netlist_path))
    lines.append("Generated log path     : {}".format(log_path))
    lines.append("Generated report path  : {}".format(report_path))
    lines.append("")
    lines.append("=" * 70)

    return "\n".join(lines) + "\n"


def run_report(args):
    log_text = read_text_file(args.log, "Log")
    warning_count = len(re.findall(r"^Warning:", log_text, re.MULTILINE))
    sections = extract_stage_sections(log_text)
    report_text = build_report(args.module, args.log, args.netlist, args.report_out, sections)

    try:
        with open(args.report_out, "w") as f:
            f.write(report_text)
    except OSError as exc:
        fail("Could not write report file " + args.report_out + ": " + str(exc))

    print("[PASS] Report written: " + args.report_out)
    if warning_count > 0:
        print("[WARN] {} warning(s) found in synthesis log.".format(warning_count))


# =============================================================================
# 'summarize' subcommand
# =============================================================================

def find_field(report_text, pattern):
    match = re.search(pattern, report_text, re.MULTILINE)
    if not match:
        return UNAVAILABLE_IN_REPORT
    return match.group(1).strip()


def parse_module_report(report_path):
    report_text = read_text_file(report_path, "Report")

    module_name = os.path.basename(report_path)
    if module_name.endswith(REPORT_SUFFIX):
        module_name = module_name[: -len(REPORT_SUFFIX)]

    cells = find_field(report_text, r"^Gate count \(total cells\)\s*:\s*(.+)$")
    area = find_field(report_text, r"^Area \(liberty units.*?:\s*(.+)$")
    delay = find_field(report_text, r"^Critical path estimate\s*:\s*(.+)$")
    frequency = find_field(report_text, r"^Maximum frequency estimate:\s*(.+)$")
    logic_depth = find_field(report_text, r"^Logic depth\s*:\s*(.+)$")
    optimization_pct = find_field(report_text, r"^Reduction %\s*:\s*(.+)$")

    return {
        "module": module_name,
        "cells": cells,
        "area": area,
        "delay": delay,
        "frequency": frequency,
        "logic_depth": logic_depth,
        "optimization_pct": optimization_pct,
    }


def run_summarize(args):
    if not os.path.isdir(args.report_dir):
        fail("Report directory not found: " + args.report_dir)

    pattern = os.path.join(args.report_dir, "*" + REPORT_SUFFIX)
    report_paths = sorted(glob.glob(pattern))

    if not report_paths:
        fail(
            "No per-module reports found matching: " + pattern + "\n"
            "        Run 'make synth_all' (or 'make synth MODULE=<name> && "
            "make report MODULE=<name>') first."
        )

    rows = []
    for report_path in report_paths:
        data = parse_module_report(report_path)
        rows.append([
            data["module"],
            data["cells"],
            data["area"],
            data["delay"],
            data["frequency"],
            data["logic_depth"],
            data["optimization_pct"],
        ])

    # --- CSV ---------------------------------------------------------
    try:
        with open(args.csv_out, "w", newline="") as f:
            writer = csv.writer(f)
            writer.writerow(SUMMARY_HEADER)
            writer.writerows(rows)
    except OSError as exc:
        fail("Could not write CSV summary " + args.csv_out + ": " + str(exc))

    # --- Aligned text table --------------------------------------------
    col_widths = []
    for col_index, header_name in enumerate(SUMMARY_HEADER):
        widest_cell = max((len(str(row[col_index])) for row in rows), default=0)
        col_widths.append(max(len(header_name), widest_cell))

    def format_row(row_values):
        padded_cells = []
        for col_index, cell_value in enumerate(row_values):
            padded_cells.append(str(cell_value).ljust(col_widths[col_index]))
        return " | ".join(padded_cells)

    text_lines = []
    text_lines.append(format_row(SUMMARY_HEADER))
    text_lines.append("-+-".join("-" * width for width in col_widths))
    for row in rows:
        text_lines.append(format_row(row))

    try:
        with open(args.txt_out, "w") as f:
            f.write("\n".join(text_lines) + "\n")
    except OSError as exc:
        fail("Could not write text summary " + args.txt_out + ": " + str(exc))

    print("[PASS] Summary written: " + args.csv_out)
    print("[PASS] Summary written: " + args.txt_out)


# =============================================================================
# Entry point
# =============================================================================

def main():
    parser = argparse.ArgumentParser(
        description="Parse Yosys synthesis logs into reports, and aggregate reports into a summary."
    )
    subparsers = parser.add_subparsers(dest="command", required=True)

    report_parser = subparsers.add_parser("report", help="Parse one module's log into a report file")
    report_parser.add_argument("--module", required=True, help="Module name (e.g. req_fifo)")
    report_parser.add_argument("--log", required=True, help="Path to the Yosys log file")
    report_parser.add_argument("--netlist", required=True, help="Path to the generated netlist")
    report_parser.add_argument("--report-out", required=True, help="Path to write the report file")

    summarize_parser = subparsers.add_parser("summarize", help="Aggregate all per-module reports into a summary")
    summarize_parser.add_argument("--report-dir", required=True, help="Directory containing <module>_report.txt files")
    summarize_parser.add_argument("--csv-out", required=True, help="Path to write summary.csv")
    summarize_parser.add_argument("--txt-out", required=True, help="Path to write summary.txt")

    args = parser.parse_args()

    if args.command == "report":
        run_report(args)
    elif args.command == "summarize":
        run_summarize(args)


if __name__ == "__main__":
    main()