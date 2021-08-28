#include <Servo.h>

Servo mot1; 
Servo mot2;
Servo mot3;
Servo mot4;

int i = 0;

void setup() {
  mot1.attach(3);
  mot2.attach(5); 
  mot3.attach(6); 
  mot4.attach(9); 
}

void loop() {
  for (i = 0; i < 180; i++) { 
    mot1.write(i);              
    mot2.write(i);     
    mot3.write(i);
    mot4.write(i);         
    delay(10);                      
  }
  for (i = 180; i > 0; i--) { 
    mot1.write(i);                
    mot2.write(i);     
    mot3.write(i);
    mot4.write(i);          
    delay(10);                      
  }

}
