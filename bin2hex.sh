#!/bin/bash

# Read either the first argument or from stdin (http://stackoverflow.com/questions/6980090/bash-read-from-file-or-stdin)
cat "${1:-/dev/stdin}" | \
# Convert binary to hex using xxd in plain hexdump style
xxd -ps | \
# Put spaces between each pair of hex characters
sed -E 's/(..)/\1 /g' | \
# Merge lines
tr -d '\n'
