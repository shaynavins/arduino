int led  = 8;
int pirpin = 4;
int value = 0;
int pirstate = LOW;
int buzzerpin = 9;

void setup() {
pinMode(led, OUTPUT);
pinMode(pirpin, INPUT);
pinMode(buzzerpin, OUTPUT);

Serial.begin(9600);
}

void loop() {
  value = digitalRead(pirpin);
  
 Serial.println(value);
 if(value == HIGH)
 {
  digitalWrite(led, HIGH);
  tone(buzzer, 1000);
  delay(100);
 
 if(pirstate == LOW){
    Serial.println("Burgular Alert!!!! ");
    pirstate = HIGH;
    
    }
   else{
    digitalWrite(led, LOW);
if (pirstate == HIGH){
      Serial.println("Motion Ended");
      pirstate = LOW;
      noTone(buzzer, 1000);
  delay(100);
      }
}
}
}
