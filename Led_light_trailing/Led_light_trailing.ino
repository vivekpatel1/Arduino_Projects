int BASE =2;
int NUM = 6;


void setup() {
for (int i = BASE; i< BASE + NUM;i++){
  pinMode(i,OUTPUT); //setting port 'i' as output pin
}
}

void loop() {
 for (int i =BASE;i<BASE+NUM;i++){
  digitalWrite(i,LOW);
  delay(200);
  
 }

 for (int i = BASE; i<BASE+NUM;i++){
  digitalWrite(i,HIGH);
  delay(200);
 }
}
