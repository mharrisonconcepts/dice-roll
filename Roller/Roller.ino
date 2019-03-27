#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
long randNumber;
const int buttonPin = A0;
const int button2 = A1;
const int button3 = A2;
const int button4 = A3;
int buttonState = 0;

void setup() {
  lcd.begin(16, 2); //initializes the lcd as output
  randomSeed(analogRead(0)); //
  Serial.setTimeout(10);
  randNumber = random(1, 7); //sets the range or number of sides on the die
  pinMode(buttonPin, INPUT); //one die
  pinMode(8, INPUT); //two dice
  lcd.println("Select # of dice <<end1 to roll");

}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(buttonPin);

{ if (digitalRead(buttonPin) == LOW) {
      lcd.println(randNumber);
      lcd.println("Roll Again");
    }
  }


}
