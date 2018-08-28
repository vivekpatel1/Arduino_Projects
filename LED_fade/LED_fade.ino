
int ledpin= 5; 

 
void setup()
{ 

}
void loop()
{
 
  for (int fade = 0; fade<255; fade+=5){
    analogWrite(ledpin,fade);
    delay(50);
  }

  for (int fade=255; fade>=0; fade-=5){
    analogWrite(ledpin,fade);
    delay(30);
  }


}

