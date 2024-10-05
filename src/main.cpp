#include <Arduino.h>

int LEDs = 4;

void setup() { 
  pinMode(LEDs, OUTPUT);
}

void loop() {
  digitalWrite(LEDs, HIGH);
  delay(1000);
  digitalWrite(LEDs, LOW);
  delay(1000);
}