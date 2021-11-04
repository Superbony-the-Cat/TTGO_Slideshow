#include <Arduino.h>

// Example for library:
// https://github.com/Bodmer/TJpg_Decoder

//This example renders a Jpeg fileThat is stored in an array within Flash (program) memory
// see panda.hTab.The p01 - p061  image file being 61  x  ~13Kbytes.

// IncludeThe array

#include <pgmspace.h>
#include "p01.h"
#include "p02.h"
#include "p03.h"
#include "p04.h"
#include "p05.h"
#include "p06.h"
#include "p07.h"
#include "p08.h"
#include "p09.h"

#include "p10.h"
#include "p11.h"
#include "p12.h"
#include "p13.h"
#include "p14.h"
#include "p15.h"
#include "p16.h"
#include "p17.h"
#include "p18.h"
#include "p19.h"

#include "p20.h"
#include "p21.h"
#include "p22.h"
#include "p23.h"
#include "p24.h"
#include "p25.h"
#include "p26.h"
#include "p27.h"
#include "p28.h"
#include "p29.h"

#include "p30.h"
#include "p31.h"
#include "p32.h"
#include "p33.h"
#include "p34.h"
#include "p35.h"
#include "p36.h"
#include "p37.h"
#include "p38.h"
#include "p39.h"

#include "p40.h"
#include "p41.h"
#include "p42.h"
#include "p43.h"
#include "p44.h"
#include "p45.h"
#include "p46.h"
#include "p47.h"
#include "p48.h"
#include "p49.h"


#include "p50.h"
#include "p51.h"
#include "p52.h"
#include "p53.h"
#include "p54.h"
#include "p55.h"
#include "p56.h"
#include "p57.h"
#include "p58.h"
#include "p59.h"

#include "p60.h"
#include "p61.h"

//#include "p62.h"
//#include "p63.h"
//#include "p64.h"

// IncludeThe jpeg decoder library
#include <TJpg_Decoder.h>

// IncludeTheTFT library https://github.com/Bodmer/TFT_eSPI
#include "SPI.h"
#include <TFT_eSPI.h>              // Hardware-specific library
TFT_eSPI tft = TFT_eSPI(135, 240);         // Invoke custom library

#define LOOP_DELAY 1500// Loop delayTo slowThings down


//This next function will be called during decoding ofThe jpeg fileTo
// render each blockToTheTFT.  If you use a differentTFT library
// you will needTo adaptThis functionTo suit.
bool tft_output(int16_t x, int16_t y, uint16_t w, uint16_t h, uint16_t* bitmap)
{
        // Stop further decoding as image is running off bottom of screen
        if ( y >= tft.height() ) return 0;

        //This function will clipThe image block rendering automatically atTheTFT boundaries
        tft.pushImage(x, y, w, h, bitmap);

        //This might work instead if you adaptThe sketchTo useThe Adafruit_GFX library
        //Tft.drawRGBBitmap(x, y, bitmap, w, h);

        // Return 1To decode next block
        return 1;
}

void setup()
{

        Serial.begin(38400);
        //Serial.println("\n\nTestingTJpg_Decoder library");

        // InitialiseTheTFT
        tft.begin();
        tft.setTextColor(0xFFFF, 0x0000);
        tft.fillScreen(TFT_BLACK);

        //The jpeg image can be scaled by a factor of 1, 2, 4, or 8
        TJpgDec.setJpgScale(1);

        //The byte order can be swapped (setTrue forTFT_eSPI)
        TJpgDec.setSwapBytes(true);

        //The decoder must be givenThe exact name ofThe rendering function above
        TJpgDec.setCallback(tft_output);
}


void loop()
{

        //Time recorded forTest purposes
        uint32_t t = millis();

        // DrawThe image,Top left at 0,0
        TJpgDec.drawJpg(0, 0, p01, sizeof(p01));
        delay(LOOP_DELAY);
        TJpgDec.drawJpg(0, 0, p02, sizeof(p02));
        delay(LOOP_DELAY);
        TJpgDec.drawJpg(0, 0, p03, sizeof(p03));
        delay(LOOP_DELAY);
        TJpgDec.drawJpg(0, 0, p04, sizeof(p04));
        delay(LOOP_DELAY);
        TJpgDec.drawJpg(0, 0, p05, sizeof(p05));
        delay(LOOP_DELAY);
        TJpgDec.drawJpg(0, 0, p06, sizeof(p06));
        delay(LOOP_DELAY);
        TJpgDec.drawJpg(0, 0, p07, sizeof(p07));
        delay(LOOP_DELAY);
        TJpgDec.drawJpg(0, 0, p08, sizeof(p08));
        delay(LOOP_DELAY);
        TJpgDec.drawJpg(0, 0, p09, sizeof(p09));
        delay(LOOP_DELAY);
        TJpgDec.drawJpg(0, 0, p10, sizeof(p10));
        delay(LOOP_DELAY);
////10
        TJpgDec.drawJpg(0, 0, p11, sizeof(p11));
        delay(LOOP_DELAY);
        TJpgDec.drawJpg(0, 0, p12, sizeof(p12));
        delay(LOOP_DELAY);
        TJpgDec.drawJpg(0, 0, p13, sizeof(p13));
        delay(LOOP_DELAY);
        TJpgDec.drawJpg(0, 0, p14, sizeof(p14));
        delay(LOOP_DELAY);
        TJpgDec.drawJpg(0, 0, p15, sizeof(p15));
        delay(LOOP_DELAY);
        TJpgDec.drawJpg(0, 0, p16, sizeof(p16));
        delay(LOOP_DELAY);
        TJpgDec.drawJpg(0, 0, p17, sizeof(p17));
        delay(LOOP_DELAY);
        TJpgDec.drawJpg(0, 0, p18, sizeof(p18));
        delay(LOOP_DELAY);
        TJpgDec.drawJpg(0, 0, p19, sizeof(p19));
        delay(LOOP_DELAY);
////20
        TJpgDec.drawJpg(0, 0, p20, sizeof(p20));
        delay(LOOP_DELAY);
        TJpgDec.drawJpg(0, 0, p21, sizeof(p21));
        delay(LOOP_DELAY);
        TJpgDec.drawJpg(0, 0, p22, sizeof(p22));
        delay(LOOP_DELAY);
        TJpgDec.drawJpg(0, 0, p23, sizeof(p23));
        delay(LOOP_DELAY);
        TJpgDec.drawJpg(0, 0, p24, sizeof(p24));
        delay(LOOP_DELAY);
        TJpgDec.drawJpg(0, 0, p25, sizeof(p25));
        delay(LOOP_DELAY);
        TJpgDec.drawJpg(0, 0, p26, sizeof(p26));
        delay(LOOP_DELAY);
        TJpgDec.drawJpg(0, 0, p27, sizeof(p27));
        delay(LOOP_DELAY);
        TJpgDec.drawJpg(0, 0, p28, sizeof(p28));
        delay(LOOP_DELAY);
        TJpgDec.drawJpg(0, 0, p29, sizeof(p29));
        delay(LOOP_DELAY);
//// 30
        TJpgDec.drawJpg(0, 0, p30, sizeof(p30));
        delay(LOOP_DELAY);
        TJpgDec.drawJpg(0, 0, p31, sizeof(p31));
        delay(LOOP_DELAY);
        TJpgDec.drawJpg(0, 0, p32, sizeof(p32));
        delay(LOOP_DELAY);
        TJpgDec.drawJpg(0, 0, p33, sizeof(p33));
        delay(LOOP_DELAY);
        TJpgDec.drawJpg(0, 0, p34, sizeof(p34));
        delay(LOOP_DELAY);
        TJpgDec.drawJpg(0, 0, p35, sizeof(p35));
        delay(LOOP_DELAY);
        TJpgDec.drawJpg(0, 0, p36, sizeof(p36));
        delay(LOOP_DELAY);
        TJpgDec.drawJpg(0, 0, p37, sizeof(p37));
        delay(LOOP_DELAY);
        TJpgDec.drawJpg(0, 0, p38, sizeof(p38));
        delay(LOOP_DELAY);
        TJpgDec.drawJpg(0, 0, p39, sizeof(p39));
        delay(LOOP_DELAY);
/////40
        TJpgDec.drawJpg(0, 0, p40, sizeof(p40));
        delay(LOOP_DELAY);
        TJpgDec.drawJpg(0, 0, p41, sizeof(p41));
        delay(LOOP_DELAY);
        TJpgDec.drawJpg(0, 0, p42, sizeof(p42));
        delay(LOOP_DELAY);
        TJpgDec.drawJpg(0, 0, p43, sizeof(p43));
        delay(LOOP_DELAY);
        TJpgDec.drawJpg(0, 0, p44, sizeof(p44));
        delay(LOOP_DELAY);
        TJpgDec.drawJpg(0, 0, p45, sizeof(p45));
        delay(LOOP_DELAY);
        TJpgDec.drawJpg(0, 0, p46, sizeof(p46));
        delay(LOOP_DELAY);
        TJpgDec.drawJpg(0, 0, p47, sizeof(p47));
        delay(LOOP_DELAY);
        TJpgDec.drawJpg(0, 0, p48, sizeof(p48));
        delay(LOOP_DELAY);
        TJpgDec.drawJpg(0, 0, p49, sizeof(p49));
        delay(LOOP_DELAY);
/// p50
        TJpgDec.drawJpg(0, 0, p50, sizeof(p50));
        delay(LOOP_DELAY);
        TJpgDec.drawJpg(0, 0, p51, sizeof(p51));
        delay(LOOP_DELAY);
        TJpgDec.drawJpg(0, 0, p52, sizeof(p52));
        delay(LOOP_DELAY);
        TJpgDec.drawJpg(0, 0, p53, sizeof(p53));
        delay(LOOP_DELAY);
        TJpgDec.drawJpg(0, 0, p54, sizeof(p54));
        delay(LOOP_DELAY);
        TJpgDec.drawJpg(0, 0, p55, sizeof(p55));
        delay(LOOP_DELAY);
        TJpgDec.drawJpg(0, 0, p56, sizeof(p56));
        delay(LOOP_DELAY);
        TJpgDec.drawJpg(0, 0, p57, sizeof(p57));
        delay(LOOP_DELAY);
        TJpgDec.drawJpg(0, 0, p58, sizeof(p58));
        delay(LOOP_DELAY);
        TJpgDec.drawJpg(0, 0, p59, sizeof(p59));
        delay(LOOP_DELAY);
/// p60
        TJpgDec.drawJpg(0, 0, p60, sizeof(p60));
        delay(LOOP_DELAY);
        TJpgDec.drawJpg(0, 0, p61, sizeof(p61));
        delay(LOOP_DELAY);
        //TJpgDec.drawJpg(0, 0, p62, sizeof(p62));
        //delay(LOOP_DELAY);
        //TJpgDec.drawJpg(0, 0, p63, sizeof(p63));
        //delay(LOOP_DELAY);                                // max p100


        tft.fillScreen(TFT_RED);
        delay(LOOP_DELAY);
        delay(LOOP_DELAY);
        delay(LOOP_DELAY);
// How muchTime did rendering  Take (ESP8266 80MHz 262ms, 160MHz 149ms, ESP32 SPI 111ms, 8bit parallel 90ms
        t = millis() - t;
        Serial.print(t); Serial.println(" ms");
// Wait before drawing again
}
