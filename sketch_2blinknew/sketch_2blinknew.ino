int redLEDpin = 9;
int greenLEDpin = 10;
int redONtime = 250;
int redOFFtime = 250;
int greenONtime = 250;
int greenOFFtime = 250; 
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
  delay(5000);
  while(Serial.available() == 0){
    } 
    numRedBlink = Serial.parseInt();
    
 
for(int i = 1; i <= 15; i = i+2){
 
  Serial.println(redmessage);
for(int j = 1; j <= i; j++){
  Serial.print(blinkno);
  Serial.println(j);
  digitalWrite(redLEDpin, HIGH);
    delay(redONtime);
  digitalWrite(redLEDpin, LOW);
    delay(redOFFtime);
  }
    Serial.println(greenmessage);
  for(int j = 1; j <= i; j++){
     Serial.print(blinkno);
  Serial.println(j);
    digitalWrite(greenLEDpin, HIGH);
    delay(greenONtime);
        digitalWrite(greenLEDpin, LOW);
        delay(greenOFFtime);

  }
}
  
}
