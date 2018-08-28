int speakerPin =11;
int photocellPin = A0;



void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
int reading = analogRead(photocellPin);
int pitch =500+reading/10;
tone(speakerPin,pitch);
}
