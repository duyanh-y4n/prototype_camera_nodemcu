#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Hello");
  Serial.println("Hallo Duy Anh");
  Serial.println("Hallo Hung");
  delay(1000);
}