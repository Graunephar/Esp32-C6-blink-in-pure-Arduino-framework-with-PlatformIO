#include <Arduino.h>
extern "C" {
    #include "ulp_lp_core.h"
}

void setup() {
    Serial.begin(115200);
    Serial.println("HP Core running...");
    pinMode(2, OUTPUT);
}

void loop() {
    digitalWrite(2, HIGH);
    delay(500);
    digitalWrite(2, LOW);
    delay(500);
}