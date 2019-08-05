// Declaring Pins
const int buzzerPin = 5;
const int ledPin = 8;
const int motionPin = 4;

// Setting Buzzer mode to False
boolean buzzer_mode = false;

// For LED
int ledState = LOW;
long previousMillis = 0; 
long interval = 100;  // Interval at which LED blinks

void setup()
{
  //The Following are our output
  pinMode(ledPin,OUTPUT);
  pinMode(buzzerPin,OUTPUT);

 
}

void loop()
{
  // To chech whether the motion is detected or not
  if (digitalRead(motionPin)) {
    buzzer_mode = true; 
  }

  // If alarm mode is on,blink our LED
  if (buzzer_mode){
    unsigned long currentMillis = millis();
    if(currentMillis - previousMillis > interval) {
      previousMillis = currentMillis;   
      if (ledState == LOW)
        ledState = HIGH;
      else
        ledState = LOW;
    // Switch the LED
    digitalWrite(ledPin, ledState);
    }
    tone(buzzerPin,1000);
  }

  // If alarm is off
  if (buzzer_mode == false) {
  
    // No tone & LED off
    noTone(buzzerPin);  
    digitalWrite(ledPin, LOW);
  }
  }

  // If our button is pressed Switch off ringing and Setup
  
