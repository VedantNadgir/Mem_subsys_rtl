#!/usr/bin/env bash

set -euo pipefail

echo "===================================================="
echo " Sky130 Liberty Setup"
echo "===================================================="

# ------------------------------------------------------------
# Repository root
# ------------------------------------------------------------

ROOT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

PDK_DIR="${ROOT_DIR}/pdk"
LIB_DIR="${PDK_DIR}/sky130_fd_sc_hd"
TOOLS_DIR="${ROOT_DIR}/pdk_tools"

# ------------------------------------------------------------
# Check prerequisites
# ------------------------------------------------------------

echo ""
echo "[1/7] Checking prerequisites..."

command -v git >/dev/null 2>&1 || {
    echo "[ERROR] git not found"
    exit 1
}

command -v python3 >/dev/null 2>&1 || {
    echo "[ERROR] python3 not found"
    exit 1
}

command -v yosys >/dev/null 2>&1 || {
    echo "[ERROR] yosys not found"
    echo "Run setup.sh first"
    exit 1
}

echo "[PASS] git"
echo "[PASS] python3"
echo "[PASS] yosys"

# ------------------------------------------------------------
# Verify skywater_pdk package
# ------------------------------------------------------------

echo ""
echo "[2/7] Verifying skywater_pdk package..."

PKG_DIR="${TOOLS_DIR}/skywater_pdk"

for file in __init__.py liberty.py sizes.py utils.py
do
    if [ ! -f "${PKG_DIR}/${file}" ]; then
        echo "[ERROR] Missing:"
        echo "        ${PKG_DIR}/${file}"
        exit 1
    fi
done

echo "[PASS] skywater_pdk package found"

# ------------------------------------------------------------
# Create PDK directory
# ------------------------------------------------------------

echo ""
echo "[3/7] Creating PDK directory..."

mkdir -p "${PDK_DIR}"

echo "[PASS] ${PDK_DIR}"

# ------------------------------------------------------------
# Clone library
# ------------------------------------------------------------

echo ""
echo "[4/7] Downloading Sky130 HD library..."

cd "${PDK_DIR}"

if [ ! -d "${LIB_DIR}" ]; then

    git clone \
        https://github.com/google/skywater-pdk-libs-sky130_fd_sc_hd.git \
        sky130_fd_sc_hd

else
    echo "[INFO] Existing library found"
fi

# ------------------------------------------------------------
# Verify structure expected by liberty.py
# ------------------------------------------------------------

echo ""
echo "[5/7] Verifying library structure..."

cd "${LIB_DIR}"

[ -d cells ] || {
    echo "[ERROR] cells/ missing"
    exit 1
}

[ -d timing ] || {
    echo "[ERROR] timing/ missing"
    exit 1
}

[ -f timing/sky130_fd_sc_hd__common.lib.json ] || {
    echo "[ERROR] common timing file missing"
    exit 1
}

[ -f timing/sky130_fd_sc_hd__tt_025C_1v80.lib.json ] || {
    echo "[ERROR] tt_025C_1v80 corner missing"
    exit 1
}

CELL_JSON_COUNT=$(
    find cells -name "*.lib.json" | wc -l | tr -d ' '
)

if [ "${CELL_JSON_COUNT}" -eq 0 ]; then
    echo "[ERROR] No per-cell timing files found"
    exit 1
fi

VERILOG_COUNT=$(
    find cells -name "*.v" | wc -l | tr -d ' '
)

if [ "${VERILOG_COUNT}" -eq 0 ]; then
    echo "[ERROR] No cell Verilog models found"
    exit 1
fi

echo "[PASS] cells/"
echo "[PASS] timing/"
echo "[PASS] ${CELL_JSON_COUNT} .lib.json files"
echo "[PASS] ${VERILOG_COUNT} Verilog files"

# ------------------------------------------------------------
# Generate liberty
# ------------------------------------------------------------

echo ""
echo "[6/7] Generating Liberty file..."

mkdir -p generated_libs

export PYTHONPATH="${TOOLS_DIR}:${PYTHONPATH:-}"

cd "${ROOT_DIR}"

python3 -m skywater_pdk.liberty \
    "${LIB_DIR}" \
    tt_025C_1v80 \
    -o "${LIB_DIR}/generated_libs"

TARGET_LIB="${LIB_DIR}/generated_libs/sky130_fd_sc_hd__tt_025C_1v80.lib"

if [ ! -f "${TARGET_LIB}" ]; then
    echo "[ERROR] Liberty generation failed"
    exit 1
fi

echo "[PASS] Generated:"
echo "       ${TARGET_LIB}"

# ------------------------------------------------------------
# Summary
# ------------------------------------------------------------

echo ""
echo "[7/7] Summary"

echo ""
echo "Library Root:"
echo "  ${LIB_DIR}"

echo ""
echo "Generated Liberty:"
echo "  ${TARGET_LIB}"

echo ""
echo "Yosys usage:"
echo ""
echo "  read_liberty -lib ${TARGET_LIB}"
echo "  dfflibmap -liberty ${TARGET_LIB}"
echo "  abc -liberty ${TARGET_LIB}"

echo ""
echo "===================================================="
echo " Setup Complete"
echo "===================================================="