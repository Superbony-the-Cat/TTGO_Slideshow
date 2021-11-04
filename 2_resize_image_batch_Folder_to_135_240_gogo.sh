#!/bin/bash

# sudo apt-get install imagemagick -y   ////  for "resize"


#  TTGO format =  240 x 135  = 1,777 x 1   = HD1080p = 16:9   !!!

for file in *.jpg;

do convert -resize 135x240! -quality 92 -- "$file" "p${file%%.jpg}.jpg";   # p + index    >   p01.jpg        "!"    wichtig  original aspect ratio ignored.
   rm "${file%%.jpg}.jpg"; # kill orginal big Picture

done




# "resize" option

#scale% 	Height and width both scaled by specified percentage.
#scale-x%xscale-y% 	Height and width individually scaled by specified percentages. (Only one % symbol needed.)
#width 	Width given, height automagically selected to preserve aspect ratio.
#xheight 	Height given, width automagically selected to preserve aspect ratio.
#widthxheight 	Maximum values of height and width given, aspect ratio preserved.
#widthxheight^ 	Minimum values of width and height given, aspect ratio preserved.

#widthxheight! 	Width and height emphatically given, original aspect ratio ignored.  !!!!

#widthxheight> 	Shrinks an image with dimension(s) larger than the corresponding width and/or height argument(s).
#widthxheight< 	Enlarges an image with dimension(s) smaller than the corresponding width and/or height argument(s).
#area@ 	Resize image to have specified area in pixels. Aspect ratio is preserved.
#x:y 	Here x and y denotes an aspect ratio (e.g. 3:2 = 1.5).
#{size}{offset} 	Specifying the offset (default is +0+0). Below, {size} refers to any of the forms above.
#{size}{+-}x{+-}y 	Horizontal and vertical offsets x and y, specified in pixels. Signs are required for both. Offsets are affected by -gravity setting. Offsets are not affected by % or other size operators. Note that positive X and Y #offsets are in the inward direction towards the center of the image for all -gravity options, except 'center'. For East, +X is left. For South, +Y is up. For SouthEast, +X is left and +Y is up. For center, the normal X and Y directional #convention is used (+X is right and +Y is down).
