#!/bin/bash

for file in *.jpg;

#  do ./bin2hex_jpg2hex.sh "$file" > "${file%%.jpg}.h";   # $./bin2hex_jpg2hex.sh 01.jpg > p01.h
do ./jpg2hex_one_Pic.sh "$file" > "${file%%.jpg}.h";   # $./jpg2hex_one_Pic.sh 01.jpg > p01.h

done
