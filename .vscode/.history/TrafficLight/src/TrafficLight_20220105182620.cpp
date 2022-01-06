#include "TrafficLight.h"

 TrafficLight::TrafficLight(
        Led &redLed, Led &yellowLed, Led &greenLed,
        LedBlinker &greenLedBlinker, PushButton &button1)
        { 
            this->redLed = redLed;
            this->yellowLed = yellowLed;
            this->greenLed = greenLed;
            this->greenLedBlinker = greenLedBlinker;
            this->button1 = button1;
        }

void TrafficLight::init()
{
    redLed.init();
    yellowLed.init();
    greenLed.init();
    button1.init();
    delay(100);
    
    red();
}

void TrafficLight::red()
{
    redLed.on();
    yellowLed.off();
    greenLed.off();
}

void TrafficLight::yellow()
{
    redLed.off();
    yellowLed.on();
    greenLed.off();
}

void TrafficLight::green()
{
    redLed.off();
    yellowLed.off();
    greenLed.on();
}

void TrafficLight::allLedsOff()
{
    redLed.off();
    yellowLed.off();
    greenLed.off();
}
