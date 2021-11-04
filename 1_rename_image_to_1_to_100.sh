#!/bin/bash


#  rename all .jpg  in to pfad
# to  xxcv.jpg  to  01.jpg
#    rrtts.jpg  to  02.jpg  .......
#   xxyyzz.jpg  to 111.jpg




find -name '*.jpg' | # find jpegs
gawk 'BEGIN{ a=1 }{ printf "mv %s %02d.jpg\n", $0, a++ }' | # build mv command   01 - 99
bash # run that command








#for file in *.jpg;
#do convert -resize 135x240! -- "$file" "p${file%%.jpg}.jpg";
# rm "${file%%.jpg}.jpg";
#done
