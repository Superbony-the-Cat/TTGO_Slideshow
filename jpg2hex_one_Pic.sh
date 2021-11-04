#!/bin/bash

ttgox=${1:-/dev/stdin} ;

 # Read either the first argument or from stdin (http://stackoverflow.com/questions/6980090/bash-read-from-file-or-stdin)
echo "//http://tomeko.net/online_tools/file_to_hex.php?lang=de " && echo "#include <pgmspace.h>" && echo "const uint8_t $ttgox[] PROGMEM = {"  && echo -n "0x"  && cat "${1:-/dev/stdin}" | \
# Convert binary to hex using xxd in plain hexdump style
xxd -ps | \
# Put spaces between each pair of hex characters    ###  mach nach 2 Zeichen ein ", 0x"  dazu
sed -E 's/../\0, 0x/g' | tr -d '\n' |  \
# Merge lines
# aus klein wird groß   nur a bis f  weil hex A -F
tr [a-f] [A-F] && echo -n "};"

find *.h -type f -exec sed -i 's/, 0x}/,}/g' {} \;  # finde in allen  *.h  "0x "  -->  ","   letztes "0x" vor ,};
find *.h -type f -exec sed -i 's/.jpg//g' {} \;     # finde in allen  *.h   ".jpg" und lösche



# Ergebnis in

# p01.h

# //http://tomeko.net/online_tools/file_to_hex.php?lang=de
# include <pgmspace.h>
# const uint8_t p01[] PROGMEM = {
# 0xFF, 0xD8, 0xFF, 0xE0, 0x00, 0x10, 0x4A, 0x46, 0x49, 0x46, 0x00, ........ 0x5F, 0xFF, 0xD9,};

# p02.h

# //http://tomeko.net/online_tools/file_to_hex.php?lang=de
# include <pgmspace.h>
# const uint8_t p02[] PROGMEM = {
# 0xFF, 0xF8, 0xFF, 0x50, 0x00, 0x10, 0x8A, 0x46, 0x49, 0x66, 0x00, ........ 0x6F, 0xFF, 0xD9,};
