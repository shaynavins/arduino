#include <Servo.h>

//int servoPin = 9;
#define servoPin 9
Servo myPointer;
void setup() {
myPointer.attach(servoPin);
}

void loop() {
  myPointer.write(10);
  delay(1000);
myPointer.write(45);
delay(1000);
myPointer.write(90);
delay(1000);
myPointer.write(180);
delay(1000);

}
//#define servoPin 9;
