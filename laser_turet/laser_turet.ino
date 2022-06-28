#include <Servo.h>

Servo myservo ;
Servo my2ndservo;

void setup()
{
 Serial.begin(9600);
 myservo.attach(9);
 my2ndservo.attach(3);
 pinMode(13,OUTPUT);
}
 
void loop()
{
 digitalWrite(13,1);
 
 delay(20);                  
 
 int XVal = analogRead(A1) ;  
 myservo.write((XVal/7.7));
 Serial.println(XVal);
 
 int YVal = analogRead(A0) ;  
 my2ndservo.write((YVal/5.7));        
 Serial.println(YVal);
}
