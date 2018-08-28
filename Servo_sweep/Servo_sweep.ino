#include <Servo.h>

Servo myservo; //create servo object
int pos = 0;

void setup() {
  // put your setup code here, to run once:
myservo.attach(9);//attaches servo on pin 9 to the servo object

}

void loop() {
  // put your main code here, to run repeatedly:
  for(pos=0; pos<=180;pos+=1)//goes from 0 to 180 degrees
  {
    myservo.write(pos);
    delay(15);
  }

   for(pos=180; pos>=0;pos-=1)//goes from 180 to 0 degrees
  {
    myservo.write(pos);
    delay(15);
  }
}
