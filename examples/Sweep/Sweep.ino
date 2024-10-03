

#include "ServoHAL.h"

Servo myservo;
ServoHal servoHal(&myservo);

int pos = 0;

void setup() {
  myservo.attach(4);
}

void loop() {
  for (pos = 0; pos <= 180; pos += 1) {
    servoHal.write(pos);
    delay(15);
  }
  for (pos = 180; pos >= 0; pos -= 1) {
    servoHal.write(pos);
    delay(15);
  }
}
