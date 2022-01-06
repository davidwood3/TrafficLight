#include "Pushbutton.h"

PushButton::PushButton(byte pin, bool isPullUp, bool internalPullUpActivated)
{
    this->pin = pin;
    this->isPullUp = isPullUp;
    this->internalPullUpActivated = internalPullUpActivated;

    lastTimeStateChanged = millis();
    debounceDelay = 50;
}

void PushButton::init()
{
    if (isPullUp && internalPullUpActivated)
    {
        pinMode(pin, INPUT_PULLUP);
    }
    else
    {
        pinMode(pin, 0);
    }
    buttonState = digitalRead(pin);
}

void PushButton::readState()
{
    unsigned long timeNow = millis();
    if (timeNow - lastTimeStateChanged > debounceDelay) {
        byte newState = digitalRead(pin);
        if (newState != buttonState) {
            buttonState = newState;
            lastTimeStateChanged = timeNow;
        }
    }
}
   
bool PushButton::isButtonPushed()
{
    readState();
    if (isPullUp) {
        return (buttonState == LOW);
    } else {
        return (buttonState == HIGH);
    }
}