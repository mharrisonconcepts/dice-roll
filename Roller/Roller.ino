#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
long randNumber;

void setup() {
  lcd.begin(16, 2); //initializes the lcd as output
  randomSeed(analogRead(0)); //
  Serial.setTimeout(10);
  randNumber = random(1, 7); //sets the range or number of sides on the die
  pinMode(7, INPUT); //one die
  pinMode(8, INPUT); //two dice
  lcd.println("Select # of dice to roll");

}

void loop() {
  // put your main code here, to run repeatedly:
{ if (digitalRead(7) == HIGH) {
      lcd.setCursor(0, 0);
      lcd.print("");
      lcd.println(randNumber);

    }
  }



}
