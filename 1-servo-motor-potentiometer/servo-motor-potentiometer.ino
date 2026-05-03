#include <Servo.h>

Servo ServoMotor;

const int servoPin = 9;
const int potPin = A0;

void setup() {
    ServoMotor.attach(servoPin);
}

void loop() {
    int readingValue = analogRead(potPin);
    int angle = map(readingValue, 0, 1023, 0, 180);
    ServoMotor.write(angle);
}