int RLP=9;
int GLP=10;
int ROT= 250;
int ROFT= 250;
int GOT= 250;
int GOFT= 250;
String redmessage = "Harshita the GREAT is doing MAGIC. She is making the red LED blink";
String redsubmessage = "   WOW! The MAGIC is happening! the red LED is on blink # ";
String greenmessage = "Harshita the MOST WONDERFUL is doing a MIRACLE. She is making the green LED blink";
String greensubmessage = "   OMG! The miracle is happening! the green LED is on blink # ";

void setup () {
  Serial.begin(9600);

  pinMode(RLP, OUTPUT);
  pinMode(GLP, OUTPUT);

  String WM1 = "Welcome to...";
  String WM2 = "  the MOST FANTASTIC program ever!";
  String WM3 = "    created by- Harshita the amazingEST";
  String WM4 ;
  WM4 = WM1+WM2+WM3;
  Serial.print(WM4);
}

void loop() {
 for(int y=0; y<10; y=y+1){
  Serial.println(redmessage);
  for(int x=1; x<=y;x=x+1){
    Serial.print(redsubmessage);
    Serial.println(x);
     digitalWrite(RLP, y);
     delay(ROT);
     digitalWrite(RLP, LOW);
     delay(ROFT);
    }
    
  Serial.println(greenmessage); 
 for(int h=1;h<= y;h=h+1){
  Serial.print(greensubmessage);
  Serial.println(h);
  
  digitalWrite(GLP, y);
  delay(GOT);
  digitalWrite(GLP, LOW);
  delay(GOFT);
  }
 }
}
