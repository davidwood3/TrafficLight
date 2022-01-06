#ifndef PUSHBUTTON_H
#define PUSHBUTTON_H

#include <Arduino.h>

class PushButton
{
private:
  byte pin;
  byte buttonState;
  bool isPullUp;
  bool internalPullUpActivated; 
  unsigned long lastTimeStateChanged;
  unsigned long debounceDelay;

  void readState();

public:
  PushButton() {}   // do not use
  PushButton (byte pin, bool isPullUp, bool internalPullUpActivated);

  void init();

  bool isButtonPushed();
};

#endif