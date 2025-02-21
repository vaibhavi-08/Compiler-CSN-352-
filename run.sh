#!/bin/bash

# Build the parser
make 2>/dev/null

# Check if input and output file names are provided
if [ $# -ne 2 ]; then
  echo "Usage: ./run.sh <input_file> <output_file>"
  exit 1
fi

# Input and output file names from command line arguments
INPUT_FILE="$1"
OUTPUT_FILE="$2"

# Run the parser with input and output files
src/parser -i "$INPUT_FILE" -o "$OUTPUT_FILE"

echo "Parser execution complete. Output in $OUTPUT_FILE"
