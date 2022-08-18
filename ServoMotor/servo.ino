#include <Servo.h> 
 
Servo servoMotor; 
 
int Potansiyometre = A0;
int PotDeger; 
 
void setup() 
{ 
  servoMotor.attach(9); 
} 
 
void loop() 
{ 
  PotDeger = analogRead(Potansiyometre); 
  PotDeger = map(PotDeger, 0, 1023, 0, 179);  

  servoMotor.write(PotDeger); 
  delay(15);  
}
