#include "user_script.h"
void UserScript::setup() {
  Serial.begin(115200);
  pinMode(2, OUTPUT);
}

void UserScript::loop() {
  static unsigned long timer = 0;
  if (millis() - timer > 1000) {
    timer = millis();
    digitalWrite(2, 1 - digitalRead(2));
    Serial.println(".");
  }
}
