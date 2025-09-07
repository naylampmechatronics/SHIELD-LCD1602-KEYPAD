// ---------------------------------------------------------------------------
// Created by David S. Castañeda 
// for NAYLAMP MECHATRONICS - https://naylampmechatronics.com/
// Copyright 2016 License: GNU GPL v3 http://www.gnu.org/licenses/gpl.html
// Date: 05/09/2025
// ---------------------------------------------------------------------------

// include the library code:
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 8, en = 9, d4 = 4, d5 = 5, d6 = 6, d7 = 7;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
//LiquidCrystal lcd(8,9,4,5,6,7);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  // Print a message to the LCD.
  lcd.print("hola mundo - NM!");
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
  // print the number of seconds since reset:
  lcd.print(millis() / 1000);

  int x;
  x = analogRead (0);
  lcd.setCursor(10,1);

  if (x < 60) {
    lcd.print("Right ");
  }
  else if (x < 200) {
    lcd.print("Up    ");
  }
  else if (x < 400){
    lcd.print("Down  ");
  }
  else if (x < 600){
    lcd.print("Left  ");
  }
  else if (x < 800){
    lcd.print("Select"); 
  }
  else if (x < 1024){
    lcd.print("N/A   ");
  }

}

