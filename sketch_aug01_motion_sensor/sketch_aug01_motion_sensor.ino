int led  = 8;
int pirpin = 4;
int value = 0;
int pirstate = LOW;

void setup() {
pinMode(led, OUTPUT);
pinMode(pirpin, INPUT);

Serial.begin(9600);
}



void loop() {
  value = digitalRead(pirpin);
  
 Serial.println(value);
 if(value == HIGH)
 {
  digitalWrite(led, HIGH);
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
      delay(100);
      }
}
}
}

  
    
    
