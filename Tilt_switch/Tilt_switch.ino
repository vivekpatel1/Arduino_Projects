int led=11;
int val;
void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
val=analogRead(0);
if(val<512)
{
  digitalWrite(led,HIGH);
}
else
digitalWrite(led,LOW);
}
