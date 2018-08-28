
// initialize the library with the numbers of the interface pins
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup()                                                                                     
{
// set up the LCD's number of columns and rows:
  lcd.begin(16,2);
  lcd.print("Fortnite");
  lcd.setCursor(5,1);  //Display position
  lcd.print("Rules");
  
}
void loop()
{


lcd.noDisplay();
delay(1000);
lcd.display();
delay(1000);
 
   
 }

