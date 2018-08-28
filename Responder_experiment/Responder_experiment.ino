int Redled =8;
int Yellowled =7;
int Greenled =6; 
int Key1 = 5;
int Key2 =4;
int Key3 = 3;
int KeyRest = 2;
int Red;
int Yellow;
int Green; 


void setup() {
  // put your setup code here, to run once:
   pinMode(Redled,OUTPUT);
  pinMode(Yellowled,OUTPUT);
  pinMode(Greenled,OUTPUT);
  pinMode(Key1,INPUT);
  pinMode(Key2,INPUT);
  pinMode(Key3,INPUT);
  pinMode(KeyRest,INPUT);
  
  
}

void loop() 
{
  // put your main code here, to run repeatedly:
Red=digitalRead(Key1);
  Yellow=digitalRead(Key2);
  Green=digitalRead(Key3);
  if(Red==HIGH)Red_YES();
  if(Yellow==HIGH)Yellow_YES();
  if(Green==HIGH)Green_YES();
}
void Red_YES()  // execute the code until Red light is on; end cycle when reset button is pressed
{
  while(digitalRead(KeyRest)==0)
  {
  digitalWrite(Redled,HIGH);
  digitalWrite(Greenled,LOW);
  digitalWrite(Yellowled,LOW);
  }
  clear_led();
}

void Yellow_YES()//ececute the code until yellow light is on; end cycle when reset button is pressed 
{
  while(digitalRead(KeyRest)==0)
  {
    digitalWrite(Redled,LOW);
    digitalWrite(Yellowled,HIGH);
    digitalWrite(Greenled,LOW);
  
  }

  clear_led();
}

void Green_YES()//ececute the code until green light is on; end cycle when reset button is pressed 
{
  while(digitalRead(KeyRest)==0)
  {
    digitalWrite(Redled,LOW);
    digitalWrite(Yellowled,LOW);
    digitalWrite(Greenled,HIGH);
  
  }

  clear_led();
}

void clear_led() //all leds off 
{
  digitalWrite(Redled,LOW);
  digitalWrite(Yellowled,LOW);
  digitalWrite(Greenled,LOW);
}

