int redLEDpin = 9;
int greenLEDpin = 10;
int redONtime = 250;
int redOFFtime = 250;
int greenONtime = 250;
int greenOFFtime = 250; 
int numRedBlink;
int numGreenBlink;
int blinkno = "Look! It is blink: ";
String redmessage = "The red LED is blinking";
String greenmessage = "The green LED is blinking";
void setup() {
Serial.begin(9600);
String WM1 = "Weclome to ";
String WM2 = "Shayna's greatest blink company!";
String WM3; 
WM3 = WM1 + WM2;
Serial.println(WM3);
pinMode(redLEDpin, OUTPUT);
pinMode(greenLEDpin, OUTPUT);
}
void loop() {
  Serial.println("How many times do you want the red LED to blink????????? (tell quick!)");
  while(Serial.available() == 0){
    } 
    numRedBlink = Serial.parseInt();
    Serial.println("How many times do you want the green LED to blink????????? (tell quick!)");
  while(Serial.available() == 0){
    } 
    numGreenBlink = Serial.parseInt();
    
   Serial.println(redmessage);

 
for(int j = 1; j <= numRedBlink; j++){
  Serial.print(blinkno);
  Serial.println(j);
  digitalWrite(redLEDpin, HIGH);
    delay(redONtime);
  digitalWrite(redLEDpin, LOW);
    delay(redOFFtime);
  }
  
    Serial.println(greenmessage);
  for(int j = 1; j <= numGreenBlink; j++){
     Serial.print(blinkno);
  Serial.println(j);
    digitalWrite(greenLEDpin, HIGH);
    delay(greenONtime);
        digitalWrite(greenLEDpin, LOW);
        delay(greenOFFtime);

  }
}
  
