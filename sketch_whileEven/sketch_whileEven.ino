void setup() {
Serial.begin(9600);
}

void loop() {
int i = 2;   
while(i <= 20){
  Serial.println(i);
  delay(250);
  i = i + 2;
  }
    Serial.println(" ");
}
