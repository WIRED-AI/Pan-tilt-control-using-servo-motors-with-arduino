//Pan & tilt control by WIRED-AI

//load servo library
#include <Servo.h>

Servo yservo, zservo;  // create servo object to control  servo motors
// twelve servo objects can be created on most boards

int ypos = 0;    // variable to store the servo y position
int zpos = 0;    // variable to store the servo z position



void setup() {
//using PWM pins 9 & 10 for triggering servo motors
  yservo.attach(9);
  zservo.attach(10);
  // attaches the servo on pin 9 & 10  to the servo objects
}

void loop() {
 
 //set range from 0 to 180
for(zpos = 0; zpos <= 180; zpos += 10){
  
  zservo.write(zpos);
 
  //set range from 20 to 60
for(ypos = 20; ypos <=60; ypos += 10) {

  yservo.write(ypos);
 
 //allow delay to avoid sudden movements
  delay(250);
}
 //set range from 60 to 20
for(ypos = 60; ypos >=20; ypos -= 10) {

  yservo.write(ypos);
 
 //allow delay to avoid sudden movements
  delay(250);
}
  

}
//set range from 180 to 0
for(zpos = 180; zpos >= 0; zpos -= 10){
  
  zservo.write(zpos);
 
  //set range from 20 to 60
for(ypos = 20; ypos <=60; ypos += 10) {

  yservo.write(ypos);
 
 //allow delay to avoid sudden movements
  delay(250);
}
 //set range from 60 to 20
for(ypos = 60; ypos >=20; ypos -= 10) {

  yservo.write(ypos);
 
 //allow delay to avoid sudden movements
  delay(250);
}
}
  
}
