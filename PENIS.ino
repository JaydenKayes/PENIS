//shared with Mr Hansen successfully - also added the .ino to your filename so it runs ok
//Jayden Kayes super cool hardcore code
#include <Servo.h>

Servo leftEar;
Servo rightEar;

byte LEDPIN = 13;

const byte PAW1 = 1;
const byte PAW2 = 2;
const byte PAW3 = 3;
const byte PAW4 = 4;
const byte LEFTEARPIN = 9;
const byte RIGHTEARPIN = 10;
// this code above this is setting the pins
void setup() {
  pinMode(LEDPIN, OUTPUT);
  pinMode(PAW1, INPUT);
  pinMode(PAW2, INPUT);
  pinMode(PAW3, INPUT);
  pinMode(PAW4, INPUT);
  leftEar.attach(LEFTEARPIN);
  rightEar.attach(RIGHTEARPIN);
  //this code is setting the variables as inputs and outputs
}


void loop() {
  //if paw 1 is pressed it turns the LED on
  if (digitalRead(PAW1) == HIGH) {
    digitalWrite(LEDPIN, HIGH);
  }
  //if paw 2 is pressed it turns the LED off
  if (digitalRead(PAW2) == HIGH) {
    digitalWrite(LEDPIN, LOW);
  }
  //if paw 3 is pressed turn LED on
  if (digitalRead(PAW3) == HIGH) {
    digitalWrite(LEDPIN, HIGH);
  }
  //if paw 4 is pressed turn LED off
  if (digitalRead(PAW4) == HIGH) {
    digitalWrite(LEDPIN, LOW);
  }
}
//I caught Garchomp in pokemon go and I miss mr Park but mr Hanseen is still the best teacher 
