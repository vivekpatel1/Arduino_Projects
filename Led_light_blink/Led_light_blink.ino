int led =13;

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led,HIGH);
  delay(1000); //wait for a second
  digitalWrite(led,LOW); //turn off
  delay(1000); //

}
