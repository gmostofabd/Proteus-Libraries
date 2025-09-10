#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(13, 12, 11, 10, 9, 8);
//LiquidCrystal lcd(A0, A1, A2, A3, A4, A5);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.setCursor(1,0);
  lcd.print("www.TheEngineering");
  lcd.setCursor(4,1);
  lcd.print("Projects.com");
}

void loop() {
  
}
