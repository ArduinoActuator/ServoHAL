#ifndef __SERVO_HAL_H__

#include <stdint.h>
#include <Arduino.h>
#include <Servo.h>


enum ServoHalFunctionReturnValue {
  FUNCTION_UNSUPPORTED = 1,
  FUNCTION_SUCCESS,
  FUNCTION_FAIL
};

class ServoHal {
public:
  ServoHal(Servo * myservo);
  void write(int angle);
  void writeMS(int sec);
protected:
  Servo * _servo;
};

#endif /* __SERVO_HAL_H__ */
