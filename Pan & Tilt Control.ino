/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

Servo yservo, zservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int ypos = 0;    // variable to store the servo position
int zpos = 0;    // variable to store the servo position



void setup() {
  yservo.attach(9);
  zservo.attach(10);
  // attaches the servo on pin 9 to the servo object
}

void loop() {
 
for(zpos = 0; zpos <= 180; zpos += 10){
  
  zservo.write(zpos);
  
for(ypos = 20; ypos <=60; ypos += 10) {

  yservo.write(ypos);
  delay(250);
}
 
for(ypos = 60; ypos >=20; ypos -= 10) {

  yservo.write(ypos);
  delay(250);
}
  

}

for(zpos = 180; zpos >= 0; zpos -= 10){
  
  zservo.write(zpos);
  
for(ypos = 20; ypos <=60; ypos += 10) {

  yservo.write(ypos);
  delay(250);
}
 
for(ypos = 60; ypos >=20; ypos -= 10) {

  yservo.write(ypos);
  delay(250);
}
}
  
}
