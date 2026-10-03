/* 
   Lab Practical: LED Blinking
   Board: Arduino UNO R4 Minima
   Pin: 13
*/

void setup() {
  pinMode(13, OUTPUT); // Sets pin 13 as an output pin
}

void loop() {
  digitalWrite(13, HIGH); // Turn LED on
  delay(1000);            // Wait 1 second
  digitalWrite(13, LOW);  // Turn LED off
  delay(1000);            // Wait 1 second
}
