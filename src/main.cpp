#include <Arduino.h>
#include "WifiService.h"

////////// Wifi Konfiguration /////////////
/* SteinSohn */
const char *SSID = "SteinSohn";
const char *PASS = "BhZEn93Pf";
/* Private */
// const char *SSID = "SteinSohn";
// const char *PASS = "BhZEn93Pf";

////////// Wifi initialisation ////////////
WifiService wifiController(SSID,PASS);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  wifiController.connectToWifi();
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Hello");
  Serial.println("Hallo Duy Anh");
  Serial.println("Hallo Hung");
  delay(1000);
}