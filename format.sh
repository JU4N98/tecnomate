#!/usr/bin/env bash
set -e

if [ $# -lt 2 ]; then
    echo "Usage: $0 <problem-folder> <sample1> [<sample2> ...]"
    exit 1
fi

PROBLEM_DIR="$1"
shift
SAMPLES=("$@")

TEST_DIR="$PROBLEM_DIR/test_cases"
DATA_DIR="$PROBLEM_DIR/data"
SAMPLE_DIR="$DATA_DIR/sample"
SECRET_DIR="$DATA_DIR/secret"

mkdir -p "$SAMPLE_DIR" "$SECRET_DIR"

# Convert .out to .ans and move them
for infile in "$TEST_DIR"/*.in; do
    base=$(basename "$infile" .in)
    outfile="$TEST_DIR/$base.out"

    # Check if .out exists
    if [ ! -f "$outfile" ]; then
        echo "Missing $outfile"
        continue
    fi

    # Decide whether it's sample or secret
    if printf '%s\n' "${SAMPLES[@]}" | grep -qx "$base"; then
        destdir="$SAMPLE_DIR"
    else
        destdir="$SECRET_DIR"
    fi

    cp "$infile" "$destdir/$base.in"
    cp "$outfile" "$destdir/$base.ans"
done

rm -rf "$TEST_DIR"
