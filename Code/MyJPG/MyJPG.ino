#include <TFT_eSPI.h>

#include "shahan.h"


TFT_eSPI tft = TFT_eSPI();   // Invoke library

void setup(void) {
  Serial.begin(115200);
  Serial.print("ST7789 TFT Bitmap Test");

  tft.begin();     // initialize a ST7789 chip
  tft.setSwapBytes(true); // Swap the byte order for pushImage() - corrects endianness
  
  tft.fillScreen(TFT_BLACK);
  tft.setRotation(1);
  tft.pushImage(0,0,320,240,shahan);
}

void loop() {

}
