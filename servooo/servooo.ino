#include <Servo.h>

Servo cagan;

void setup() {
  cagan.attach(9);
}

void loop() {
 for(int i=0; i<180; i++){
  cagan.write(i);
  delay(10);
 }
 for(int i=180; i>0; i--){
  cagan.write(i);
  delay(10);
 }
 
}
