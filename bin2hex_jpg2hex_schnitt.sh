#!/bin/bash

find /home/btb/soft/scipte/ttgo/ -type f -exec sed -i 's/,}/,}/g' {} \;

# Read either the first argument or from stdin (http://stackoverflow.com/questions/6980090/bash-read-from-file-or-stdin)
##echo "//http://tomeko.net/online_tools/file_to_hex.php?lang=de " && echo "#include <pgmspace.h>" && echo "const uint8_t gogo5[] PROGMEM = {"  && echo -n "0x"  && cat "${1:-/dev/stdin}" | \

# Convert binary to hex using xxd in plain hexdump style
##xxd -ps | \

# Put spaces between each pair of hex characters      mach nach 2 Zeichen ", 0x"
##sed -E 's/../\0, 0x/g' | tr -d '\n' |  \

# Merge lines

# aus klein wird Groß   nur a bis f  weil hex A -F
##tr [a-f] [A-F] && echo -n "};" 


# cat "${3:-/dev/stdin}" | sed -E 's/ 0x}/}/g'


# ausgabe datei einlesen und 3 Zeichen abschscheiden


