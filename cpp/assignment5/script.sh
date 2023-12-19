#!/bin/bash

# Specify the output file
output_file="assignment5.txt"

# Find all *.cpp files and concatenate their contents into assignment5.txt
find . -name "*.cpp" -exec sh -c 'echo "$1"; cat "$1"; echo -e "\n"' _ {} \; > "$output_file"

echo "Text from *.cpp files has been copied to $output_file with filenames at the top of each text block."
