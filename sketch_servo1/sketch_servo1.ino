
#include <Servo.h>

Servo servo_test;

int angle = 0;

void setup() 
{
servo_test.attach(9);
}

void loop() 
{
  for(angle = 0; angle <= 90; angle += 1)
  {
    servo_test.write(angle); 
    delay(15);
    
    }

    delay(1000);

    for(angle = 90; angle >= 0; angle-=1)
    {
      
      servo_test.write(angle);
      delay(15);
      }
delay(1000);
}
