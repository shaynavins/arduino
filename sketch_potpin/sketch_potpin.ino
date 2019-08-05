float writevalue;
int potpin  = A0;
int readvalue;
float voltage;
int redpin = 9;`
void setup() {
pinMode(potpin, INPUT);
pinMode(redpin, OUTPUT);

Serial.begin(9600);
}

void loop() {
readvalue = analogRead(potpin);
writevalue = (255./1023.)*readvalue;
voltage = (5./255.)*writevalue;
Serial.println(voltage);
delay(250);
 analogWrite(redpin, writevalue);
 
}
//this code is basically all about using the potentiometer in order to change the frequency of the light. When you are using the potentiometer, we have to convert using 225./1023. formula. and when you want the voltage form, we need to use 5./255. this will help convert from anolog to voltage. to 1023.  
