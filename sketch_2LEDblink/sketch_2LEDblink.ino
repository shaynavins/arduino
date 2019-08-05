void setup() {
  // put your setup code here, to run once:
 pinMode (9, OUTPUT);
 pinMode (13, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
   int repeats = 2;
   
   for(int i = 0; i < repeats; i++){
   digitalWrite(9, HIGH);
  delay(1000);
   digitalWrite(9, LOW);
  delay(1000);
   }
   int red = 5;
  for(int i = 0; i < red; i++){
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
  }
}
