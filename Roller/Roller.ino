#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
long randNumber1;
long randNumber2;
long randNumber3;
long randNumber4;
const int buttonPin = A0;
const int button2 = A1;
const int button3 = A2;
const int button4 = A3;
int buttonState = 0;
boolean okToPrint = true;

void setup() {
  lcd.begin(16, 2); //initializes the lcd as output
  randomSeed(analogRead(0)); //
  Serial.setTimeout(10);
  randomSeed(analogRead(5)); //sets the range or number of sides on the die
  pinMode(buttonPin, INPUT); //one die
  pinMode(8, INPUT); //two dice
  lcd.println("Select # of dice <<end1 to roll");

}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(buttonPin);
  buttonState = digitalRead(button2);
  buttonState = digitalRead(button3);
  buttonState = digitalRead(button4);
  randNumber1 = random(1,7);
  randNumber2 = random(1,7);
  randNumber3 = random(1,7);
  randNumber4 = random(1,7);

{ if (digitalRead(buttonPin) == LOW) {
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("");
      lcd.println(randNumber1);
      lcd.setCursor(1, 1);
      lcd.println("Roll Again?");
    }
  }
{ if (digitalRead(button2) == LOW) {
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("");
      lcd.println(randNumber1);
      lcd.println(randNumber2);
      lcd.setCursor(1, 1);
      lcd.println("Roll Again?");
    }
  }
  { if (digitalRead(button3) == LOW) {
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("");
      lcd.println(randNumber1);
      lcd.println(randNumber2);
      lcd.println(randNumber3);
      lcd.setCursor(1, 1);
      lcd.println("Roll Again?");
    }
  }
  { if (digitalRead(button4) == LOW) {
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("");
      lcd.println(randNumber1);
      lcd.println(randNumber2);
      lcd.println(randNumber3);
      lcd.println(randNumber4);
      lcd.setCursor(1, 1);
      lcd.println("Roll Again?");
    }
  }
}
