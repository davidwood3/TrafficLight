#ifndef TRAFFIC_LIGHT_H
#define TRAFFIC_LIGHT_H

#include "Led.h"
#include "LedBlinker.h"
#include "Pushbutton.h"
#include "LedBlinker.h"

class TrafficLight 
{
private:
    Led redLed;
    Led yellowLed;
    Led greenLed;
    LedBlinker greenLedBlinker;
    PushButton button1;
    
    byte ledBrightness;

    enum TrafficLightState {
        STATE_RED,
        STATE_YELLOW,
        STATE_GREEN,
        STATE_BLINK_GREEN
    };

    int state;

    unsigned long yellowStateStartTime;
    

}

#endif
