int buzzer =6;


void setup() {
  // put your setup code here, to run once:
pinMode(buzzer,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(buzzer,HIGH);//produce sound 
delay(1000);
}
