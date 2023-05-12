#include "READ_RGB.h"
#include <Arduino.h>
#include <FastLED.h>

#include "SERIALCOM.h"

#define NUM_LEDS  120
#define LED_PIN   2

CRGB leds_rgb[NUM_LEDS];

int R_index, G_index, B_index;
int red, green, blue;
String Red, Green, Blue;

SERIALCOM READ_RGB_serialcom;

READ_RGB::READ_RGB(){
  FastLED.addLeds<WS2812B, LED_PIN, GRB>(leds_rgb, NUM_LEDS);
  FastLED.setBrightness(50);
  }

void READ_RGB::set_rgb(){
    READ_RGB_serialcom.readData();
    
    for (int i=0; i< readString.length();i++){
      if (readString[i]=='R'){
        R_index = i;
        };
      if (readString[i]=='G'){
        G_index = i;
        };
      if (readString[i]=='B'){
        B_index = i;
        };  
    } 
    
    // extracting the data from the substring of data 
    // converting extracted string data into integers 
    Red = readString.substring(R_index + 1, G_index);
    Green = readString.substring(G_index + 1, B_index);
    Blue = readString.substring(B_index + 1, readString.length()); 

      EVERY_N_MILLISECONDS(20){
        fill_solid(leds_rgb, NUM_LEDS, CRGB(Red.toInt(), Green.toInt(), Blue.toInt()));
        FastLED.show();}
      }
