#include <Arduino.h>
#ifndef SERIALCOM_H
#define SERIALCOM_H

/*  allows global varibale access across files  */
extern String readString;

class SERIALCOM{
public:
  void readData();
  void resetData();
};


#endif
