int redLEDpin = 9;
int greenLEDpin = 10;
int redONtime = 250;
int redOFFtime = 250;
int greenONtime = 250;
int greenOFFtime = 250; 
int numRedBlink = 4;
int numGreenBlink  = 2;
String blinkno = "Look! It is blink: ";
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
  
    
   Serial.println(redmessage);

   int i = 1;

while(i <= numRedBlink){
  Serial.print(blinkno);
  Serial.println(i);
  digitalWrite(redLEDpin, HIGH);
    delay(redONtime);
  digitalWrite(redLEDpin, LOW);
    delay(redOFFtime);
     i=i+1;
  }
  
    Serial.println(greenmessage);
    int j = 1;
  while(j <= numGreenBlink){
    
     Serial.print(blinkno);
  Serial.println(j);
    digitalWrite(greenLEDpin, HIGH);
    delay(greenONtime);
        digitalWrite(greenLEDpin, LOW);
        delay(greenOFFtime); 
        j=j+1;

  }
}
  
