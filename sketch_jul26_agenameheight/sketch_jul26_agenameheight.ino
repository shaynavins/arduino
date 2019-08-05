String nameprint;
float heightprint;
int ageprint;
float ininch;
void setup() {
Serial.begin(9600);
}

void loop() {
Serial.println("what is your name?");
while(Serial.available() == 0){
  }                                                  //waiting for user input
  nameprint = Serial.readString();
//reading the name
  
Serial.println("Please enter your height in feet...");
while(Serial.available() == 0){
  }                                                 //waiting for user input
  heightprint = Serial.parseFloat();
  //readingheight
ininch = (heightprint)*12;    //12inch in a feet


Serial.println("How old are you? ");
  while(Serial.available() == 0){
  }                                                //waiting for user input
    ageprint = Serial.parseInt();
//reading age

    Serial.println("Hello "+ nameprint + "! You are " + heightprint+" feet and "+ininch+" in inches. You are "+ageprint+ " years old. It is a pleasure to meet you!");
    //stitching the sentence.

}


/*
this is a survey for your name age and height. using serial.parseInt, serial.parsefloat, and serial.readstring. 
After allowing the computer to read it, I used the formula to convert form feet to inches.
then, using serial.println, I printed the message. I used strings and + signs to stitch the sentence together. 
Serial.println("Hello "+ nameprint + "! You are " + heightprint+" feet and "+ininch+" in inches. 
You are "+ageprint+ " years old. It is a pleasure to meet you!");
 */
