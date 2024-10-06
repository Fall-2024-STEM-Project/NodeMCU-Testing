#include <Arduino.h>

int LEDs = 4;

void setup()
{
  pinMode(LEDs, OUTPUT);
}

void loop()
{
  digitalWrite(LEDs, HIGH);
  delay(100 + std::rand() % 3000);
  digitalWrite(LEDs, LOW);
  delay(100 + std::rand() % 3000);
}
