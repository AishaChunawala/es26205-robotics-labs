/* 
   Lab Practical: LED Blinking
   Board: Arduino UNO R4 Minima
   Pin: 10 
   Adding LED, resistor on a breadboard
*/

void setup() {
  pinMode(10, OUTPUT); // Sets pin 10 as an output pin
}

void loop() {
  digitalWrite(10, HIGH); // Turn LED on
  delay(1000);            // Wait 1 second
  digitalWrite(10, LOW);  // Turn LED off
  delay(1000);            // Wait 1 second
}