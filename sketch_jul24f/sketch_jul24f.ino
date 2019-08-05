int redpin=9;
void setup() {
 pinMode (redpin, OUTPUT);
 // put your setup code here, to run once:

}

void loop() {
digitalWrite (redpin, HIGH);// put your main code here, to run repeatedly:
delay (250);
digitalWrite (redpin,LOW);
delay (250);
}
