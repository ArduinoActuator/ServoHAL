#include "ServoHAL.h"

ServoHal::ServoHal(Servo * myservo):
  _servo(myservo)
{}

void ServoHal::write(int angle) {
  _servo->write(angle);
}

void ServoHal::writeMS(int sec) {
  _servo->writeMicroseconds(sec);
}




