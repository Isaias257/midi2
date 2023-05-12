#include "ANIMATIONS.h"
#include <Arduino.h>
#include <FastLED.h>
#define NUM_LEDS  120
#define LED_PIN   2
CRGB leds_animations[NUM_LEDS];

/* READ ME
ANIMATION COMMANDS
#1) runFire()     ---- Gives a bonfire flame effect
#2) 
*/

//#1 
/*=============================================FIRE ANIMATION===============================================*/
/*                                  GLOBAL VARIABLES FOR FIRE ANIMATION                                     */
CRGBPalette16 firePalette_animations = HeatColors_p;
/* -------------------------------------------------------------------------------------------------------- */

    ANIMATIONS::ANIMATIONS(){
      FastLED.addLeds<WS2812B, LED_PIN, GRB>(leds_animations, NUM_LEDS);
      FastLED.setBrightness(100);
      };
  
    void ANIMATIONS::setupFire() {
      int  a = millis();
      
      for (int i = 0; i < NUM_LEDS; i++) {
    
        // 3D noise, x is constant, we move through time on y and z axis
        // The 60 here will change the scale of the effect, lower is smoother
        // higher is more flickery. The time value for z was in the original code
        // as that was a 2D matrix version. I've left it in here as it looks 
        // nice in 1D too!
        uint8_t noise = inoise8 (0 , i * 60 + a , a / 3);
    
        // Divides 255 by (NUM_LEDS - 1) and subtracts that amount away from 255 to return 
        // a decreasing number each time e.g. for NUM_LEDS = 18, difference between
        // each point is 15, so:
        // i = 0, math = 255
        // i = 1, math = 240
        // i = 2, math = 225
        // ...
        // i = NUM_LEDS, math =  0
        uint8_t math = abs8(i - (NUM_LEDS-1)) * 255 / (NUM_LEDS-1);
    
        // Take the noise function from earlier and subtract math from it,
        // so the further along the strip you are, the higher palette index you
        // are likely to get. This results in the base of the fire (white, yellow)
        // being at the far end of the strip
        uint8_t index = qsub8 (noise, math);
    
        // Set the LED color from the palette
        leds_animations[i] = ColorFromPalette (firePalette_animations, index, 255);    
      }  
    };
    
    void  ANIMATIONS::runFire() {
      EVERY_N_MILLISECONDS(5) {
      setupFire();
    }                                                       
      FastLED.show();
      Serial.println("This section of code is running");
    };
/*==============================================END OF FIRE ANIMATION===================================================*/
