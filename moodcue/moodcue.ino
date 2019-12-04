#include <HID.h>

#include <Servo.h>

Servo myservo;  // create servo object to control a servo

int potpin = 0;  // analog pin used to connect the potentiometer
int value;    // variable to read the value from the analog pin

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  value = analogRead(potpin);            // reads the value of the potentiometer (value between 0 and 1023)
  value = map(value, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  myservo.write(value);                  // sets the servo position according to the scaled value
  delay(15);                           // waits for the servo to get there
}
