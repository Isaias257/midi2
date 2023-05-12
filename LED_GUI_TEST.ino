#include "READ_RGB.h"
#include "ANIMATIONS.h"
#include "STATICFILLCOLOR.h"
#include "SERIALCOM.h"
#include <FastLED.h>

#define NUM_LEDS  120
#define LED_PIN   2
CRGB leds[NUM_LEDS];

/* DECLARATION OF OBJECTS TO ACCESS THEIR RESPECTIVE FUNCTIONS */
ANIMATIONS animations;
STATICFILLCOLOR staticfill;
READ_RGB readrgb;
SERIALCOM serialcom;
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

void setup() {
  Serial.begin(9600);
  pinMode(2,OUTPUT);
}

void loop(){
animations.setupFire();
animations.runFire();
  }

  
/*MENU SELECTION*/
/*serialcom.readData();
if (readString == "Custom"){

  digitalWrite(11,HIGH);
  serialcom.resetData();
  while(true){
    rgb.set_rgb();
    if (readString == "Static"){
      staticfill.fillblack();
      break;
    }
    
  }
}

else if (readString == "Static"){

  digitalWrite(11,LOW);
  serialcom.resetData();
  while(true){
    serialcom.readData();
    if (readString == "Red"){
      staticfill.fillred();
      }
    else if (readString == "Purple"){
      staticfill.fillpurple();
      }
    else if (readString == "Green"){
    staticfill.fillgreen();
    }
    else if (readString == "Brown"){
    staticfill.fillbrown();
    }
    else if (readString == "Pink"){
    staticfill.fillpink();
    }
    else if (readString == "Yellow"){
    staticfill.fillyellow();
    }
    else if (readString == "White"){
    staticfill.fillwhite();
    }
    else if (readString == "Orange"){
    staticfill.fillorange();
    }
    else if (readString == "Custom"){
    staticfill.fillblack();
    break;
    }
    serialcom.resetData();
    }
    */
  







  /*STATIC COLOR SELECTION CODE */
  /*============================*/
/*
  serialcom.readData();
  if (readString == "Red"){
    staticfill.fillred();
    }
  else if (readString == "Purple"){
    staticfill.fillpurple();
    }
  else if (readString == "Green"){
  staticfill.fillgreen();
  }
  else if (readString == "Brown"){
  staticfill.fillbrown();
  }
  else if (readString == "Pink"){
  staticfill.fillpink();
  }
  else if (readString == "Yellow"){
  staticfill.fillyellow();
  }
  else if (readString == "White"){
  staticfill.fillwhite();
  }
  else if (readString == "Orange"){
  staticfill.fillorange();
  }
  serialcom.resetData(); */
 
