#!/bin/bash
set -e

# Usage: ./make_domjudge_zip.sh /path/to/problem

PROBLEM_PATH="$1"
AUX_DIR="$2"

# Clean and create aux folder
rm -rf "$AUX_DIR"
mkdir -p "$AUX_DIR"

# Copy data folder
cp -r "$PROBLEM_PATH/data" "$AUX_DIR/"

# Copy problem.yaml
cp "$PROBLEM_PATH/domjudge-problem.ini" "$AUX_DIR/domjudge-problem.ini"

# Generate PDF from statement.md
mkdir -p "$AUX_DIR/attachments"
pandoc "$PROBLEM_PATH/statement.md" -o "$AUX_DIR/attachments/statement.pdf"

cd "$2" 
zip -r ../"$2" * 
cd ..
