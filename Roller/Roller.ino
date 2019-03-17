#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
long randNumber;

void setup() {
  lcd.begin(16, 2);
  randomSeed(analogRead(0));
  Serial.setTimeout(10);
  lcd.setCursor(0, 0);
  lcd.print("");
  randNumber = random(1, 7);
  lcd.println(randNumber);

}

void loop() {
  // put your main code here, to run repeatedly:



}
