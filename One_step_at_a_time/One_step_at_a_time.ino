#include <Stepper.h>

const int stepsPerRevolution =200; 
//for motor 
//initialize stepper library for pins 2-5

Stepper myStepper(stepsPerRevolution,2,3,4,5);
int stepCount=0; //number of steps motor has taken 

void setup() {
  // put your setup code here, to run once:
//initialize serial port 
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
//step one step
myStepper.step(1);
Serial.print("steps:");
Serial.println(stepCount);
stepCount++;
delay(500);
}
