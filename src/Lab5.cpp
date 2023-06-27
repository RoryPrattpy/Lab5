/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "/Users/admin/CTD_2023/Lab5/src/Lab5.ino"
void setup();
void loop();
#line 1 "/Users/admin/CTD_2023/Lab5/src/Lab5.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

void setup() {
  pinMode(D5, OUTPUT);
  pinMode(D7, INPUT);
  Serial.begin(9600);
}

void loop() {
  analogWrite(D5, map(analogRead(A0), 297, 800, 0, 255));
  Serial.println(analogRead(A0));
}