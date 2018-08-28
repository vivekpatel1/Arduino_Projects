const int buttonPin =12; //number of pushbutton pin 
const int ledPin = 13;  //number of led pin 

//variables will change 
 int buttonState =0;
void setup() {
  // put your setup code here, to run once:
 
  //initialize the led pin as an output 
  pinMode(ledPin,OUTPUT);
  //initialize the pushbutton pin as an input
  pinMode(buttonPin,INPUT);

}

void loop() {
  //read the state of the pushbutton value 
  buttonState = digitalRead(buttonPin);
  //check if button is pressed 
  //if it is buttonstate is high 
  if (buttonState==HIGH){
    //turn led on
    digitalWrite(ledPin,HIGH);
    
  }

 else {
  //turn led off
  digitalWrite(ledPin,LOW);
 }
  
  

}
