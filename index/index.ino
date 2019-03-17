long randNumber;

void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));
  Serial.setTimeout(10);

}

void loop() {
  // put your main code here, to run repeatedly:

{ if (Serial.available() > 0) {
      String command;
      command = Serial.readString();
      command.trim();
      if (String(command) == "Roll") {
        Serial.print("random1=");
        randNumber = random(1,7);
        Serial.println(randNumber);
      }

    }
  }
}
