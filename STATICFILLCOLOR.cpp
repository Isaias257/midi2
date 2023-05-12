#include "STATICFILLCOLOR.h"
#include "Arduino.h"
#include <FastLED.h>
#define NUM_LEDS  120
#define LED_PIN   2

CRGB leds_staticfillcolor[NUM_LEDS];

STATICFILLCOLOR::STATICFILLCOLOR(){
  FastLED.addLeds<WS2812B, LED_PIN, GRB>(leds_staticfillcolor, NUM_LEDS);
  FastLED.setBrightness(50);
  }
  
void STATICFILLCOLOR::fillred(){
  fill_solid(leds_staticfillcolor, NUM_LEDS, CRGB::Red);
  FastLED.show();
  FastLED.addLeds<WS2812B, LED_PIN, GRB>(leds_staticfillcolor, NUM_LEDS);
  FastLED.setBrightness(50);
  }
void STATICFILLCOLOR::fillorange(){
  fill_solid(leds_staticfillcolor, NUM_LEDS, CRGB::Orange);
  FastLED.show();
  FastLED.addLeds<WS2812B, LED_PIN, GRB>(leds_staticfillcolor, NUM_LEDS);
  FastLED.setBrightness(50);
  }
void STATICFILLCOLOR::fillyellow(){
  fill_solid(leds_staticfillcolor, NUM_LEDS, CRGB::Yellow);
  FastLED.show();
  FastLED.addLeds<WS2812B, LED_PIN, GRB>(leds_staticfillcolor, NUM_LEDS);
  FastLED.setBrightness(50);
  }
void STATICFILLCOLOR::fillgreen(){
  fill_solid(leds_staticfillcolor, NUM_LEDS, CRGB::Green);
  FastLED.show();
  FastLED.addLeds<WS2812B, LED_PIN, GRB>(leds_staticfillcolor, NUM_LEDS);
  FastLED.setBrightness(50);
  }
void STATICFILLCOLOR::fillpurple(){
  fill_solid(leds_staticfillcolor, NUM_LEDS, CRGB::Purple);
  FastLED.show();
  FastLED.addLeds<WS2812B, LED_PIN, GRB>(leds_staticfillcolor, NUM_LEDS);
  FastLED.setBrightness(50);
  }
void STATICFILLCOLOR::fillbrown(){
  fill_solid(leds_staticfillcolor, NUM_LEDS, CRGB::Brown);
  FastLED.show();
  FastLED.addLeds<WS2812B, LED_PIN, GRB>(leds_staticfillcolor, NUM_LEDS);
  FastLED.setBrightness(50);
  }
void STATICFILLCOLOR::fillpink(){
  fill_solid(leds_staticfillcolor, NUM_LEDS, CRGB(255, 105, 180));
  FastLED.show();
    FastLED.addLeds<WS2812B, LED_PIN, GRB>(leds_staticfillcolor, NUM_LEDS);
  FastLED.setBrightness(50);
  }
void STATICFILLCOLOR::fillwhite(){
  fill_solid(leds_staticfillcolor, NUM_LEDS, CRGB::White);
  FastLED.show();
  FastLED.addLeds<WS2812B, LED_PIN, GRB>(leds_staticfillcolor, NUM_LEDS);
  FastLED.setBrightness(50);
  }
  void STATICFILLCOLOR::fillblue(){
  fill_solid(leds_staticfillcolor, NUM_LEDS, CRGB::Blue);
  FastLED.show();
  FastLED.addLeds<WS2812B, LED_PIN, GRB>(leds_staticfillcolor, NUM_LEDS);
  FastLED.setBrightness(50);
  }
void STATICFILLCOLOR::fillblack(){
  FastLED.clear();
  FastLED.show();
  FastLED.addLeds<WS2812B, LED_PIN, GRB>(leds_staticfillcolor, NUM_LEDS);
  FastLED.setBrightness(50);
  }
