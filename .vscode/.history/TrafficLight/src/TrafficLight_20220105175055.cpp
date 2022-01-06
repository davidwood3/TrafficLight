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
