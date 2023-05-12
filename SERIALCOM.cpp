#include "SERIALCOM.h"
#include <Arduino.h>

String readString;

void SERIALCOM::readData(){
    while (Serial.available()){
      char c = Serial.read();
      delay(20);
      readString += c;
      }
  }

void SERIALCOM::resetData(){
    readString = "";
  }
