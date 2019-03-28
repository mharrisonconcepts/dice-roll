#include <LiquidCrystal.h> //no idea why this is here
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2; //sets output pins for lcd display
LiquidCrystal lcd(rs, en, d4, d5, d6, d7); //lists pins on lcd display
long randNumber1; //declares that "randNumber1" stores 32 bits
long randNumber2; //declares that "randNumber2" stores 32 bits
long randNumber3; //declares that "randNumber3" stores 32 bits
long randNumber4; //declares that "randNumber4" stores 32 bits
long randNumber5; //declares that "randNumber5" stores 32 bits
const int buttonPin = A0; //names pin A0 "button1" for the program
const int button2 = A1; //names pin A1 "button2" for the program
const int button3 = A2; //names pin A2 "button3" for the program
const int button4 = A3; //names pin A3 "button4" for the program
const int button5 = A4; //names pin A4 "button5" for the program
int buttonState = 0; //declares button state as 0

void setup() { //code here runs once
  lcd.begin(16, 2); //initializes the lcd as output
  randomSeed(analogRead(0)); //sets where the Arduino will generate the random number
  Serial.setTimeout(10); //refreshes serial buffer every 10 milliseconds
  randomSeed(analogRead(5)); //sets the range or number of sides on the die
  lcd.println("Select # of dice to roll"); //prints "Select # of dice to roll" on the lcd

}
void(* resetFunc) (void) = 0; //declares reset function
void loop() { // put your main code here, to run repeatedly:
  buttonState = digitalRead(buttonPin); //initializes this pin for reading
  buttonState = digitalRead(button2); //initializes this pin for reading
  buttonState = digitalRead(button3); //initializes this pin for reading
  buttonState = digitalRead(button4); //initializes this pin for reading
  buttonState = digitalRead(button5); //initializes this pin for reading
  randNumber1 = random(1, 7); //sets range for random number 1
  randNumber2 = random(1, 7); //sets range for random number 2
  randNumber3 = random(1, 7); //sets range for random number 3
  randNumber4 = random(1, 7); //sets range for random number 4
  randNumber5 = random(1, 7); //sets range for random number 4

{ if (digitalRead(buttonPin) == LOW) { //tells Arduino "if input from buttonPin is low, run this code"
      lcd.clear(); //clears characters that were on the lcd from setup
      lcd.setCursor(0, 0); //moves the lcd cursor to the first row of the first column
      lcd.print(randNumber1); //prints the "randomNumber1" declared at the beginning of loop
      lcd.setCursor(0, 1); //moves the lcd cursor to the second row of the first column
      lcd.print("Roll Again?"); //prints "Roll again?" on the lcd
    }
  }
{ if (digitalRead(button2) == LOW) { //tells Arduino "if input from buttonPin is low, run this code"
      lcd.clear(); //clears characters that were on the lcd from setup
      lcd.setCursor(0, 0); //moves the lcd cursor to the first row of the first column
      lcd.print(randNumber1); //prints the "randomNumber1" declared at the beginning of loop
      lcd.print(randNumber2); //prints the "randomNumber2" declared at the beginning of loop
      lcd.setCursor(0, 1); //moves the lcd cursor to the second row of the first column
      lcd.print("Roll Again?"); //prints "Roll again?" on the lcd
    }
  }
{ if (digitalRead(button3) == LOW) { //tells Arduino "if input from buttonPin is low, run this code"
      lcd.clear(); //clears characters that were on the lcd from setup
      lcd.setCursor(0, 0); //moves the lcd cursor to the first row of the first column
      lcd.print(randNumber1); //prints the "randomNumber1" declared at the beginning of loop
      lcd.print(randNumber2); //prints the "randomNumber2" declared at the beginning of loop
      lcd.print(randNumber3); //prints the "randomNumber3" declared at the beginning of loop
      lcd.setCursor(0, 1); //moves the lcd cursor to the second row of the first column                                                                                                                              
      lcd.print("Roll Again?"); //prints "Roll again?" on the lcd
    }
  }
{ if (digitalRead(button4) == LOW) { //tells Arduino "if input from buttonPin is low, run this code"
      lcd.clear(); //clears characters that were on the lcd from setup
      lcd.setCursor(0, 0); //moves the lcd cursor to the first row of the first column
      lcd.print(randNumber1); //prints the "randomNumber1" declared at the beginning of loop
      lcd.print(randNumber2); //prints the "randomNumber2" declared at the beginning of loop
      lcd.print(randNumber3); //prints the "randomNumber3" declared at the beginning of loop
      lcd.print(randNumber4); //prints the "randomNumber4" declared at the beginning of loop
      lcd.setCursor(0, 1); //moves the lcd cursor to the second row of the first column
      lcd.print("Roll Again?"); //prints "Roll again?" on the lcd
    }
  }
  { if (digitalRead(button5) == LOW) { //tells Arduino "if input from buttonPin is low, run this code"
      lcd.clear(); //clears characters that were on the lcd from setup
      lcd.setCursor(0, 0); //moves the lcd cursor to the first row of the first column
      lcd.print(randNumber1); //prints the "randomNumber1" declared at the beginning of loop
      lcd.print(randNumber2); //prints the "randomNumber2" declared at the beginning of loop
      lcd.print(randNumber3); //prints the "randomNumber3" declared at the beginning of loop
      lcd.print(randNumber4); //prints the "randomNumber4" declared at the beginning of loop
      lcd.print(randNumber5); //prints the "randomNumber4" declared at the beginning of loop
      lcd.setCursor(0, 1); //moves the lcd cursor to the second row of the first column
      lcd.print("Roll Again?"); //prints "Roll again?" on the lcd
    }
  }
}
