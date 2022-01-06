#include <Arduino.h>

#include "Led.h"
#include "Pushbutton.h"
#include "LedBlinker.h"
#include "TrafficLight.h"

#define RED_LED_PIN 9
#define YELLOW_LED_PIN 10
#define GREEN_LED_PIN 11
#define BUTTON1_PIN 2

Led redLed(RED_LED_PIN);
Led yellowLed(YELLOW_LED_PIN);
Led greenLed(GREEN_LED_PIN);
PushButton button1(BUTTON1_PIN, true, true);
LedBlinker greenLedBlinker(greenLed, 100);
TrafficLight trafficLight(
  redLed, yellowLed, greenLed,
  greenLedBlinker, button1);

void setup() {
  trafficLight.init();
}

void loop() {
  trafficLight.red();
  delay(500);
  trafficLight.yellow();
  delay(500);
  trafficLight.green();
  delay(500);
  trafficLight.allLedsOff();
  delay(500);
  

}