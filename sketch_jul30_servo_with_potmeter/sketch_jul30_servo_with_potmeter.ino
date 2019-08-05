#include <Servo.h>
int pos = 0;
int servopin = 9;
int servodelay = 25;
int potpin = A0;
int readvalue;
int writevalue;


Servo myPointer;
void setup() {
  
Serial.begin(9600);
myPointer.attach(servopin);
pinMode(potpin, INPUT);

}

void loop() {
  readvalue = analogRead(potpin);
  pos = (165./1023.)*readvalue + 10;
  
Serial.println(pos);
  
  myPointer.write(pos);

  }
