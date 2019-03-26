#include <Servo.h> 

int servoPin = 3; 

Servo Servo1; 
void setup() { 
	Servo1.attach(servoPin); 
}
void loop(){ 
   // 0 degrees 
   Servo1.write(0); 
   delay(1000); 
   // 90 degrees 
   Servo1.write(90); 
   delay(1000); 
   // 180 degrees 
   Servo1.write(180); 
   delay(1000); 
}
