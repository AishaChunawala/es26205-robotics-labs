
void setup() {
  pinMode(11, OUTPUT);  // LED 1
  pinMode(10, OUTPUT);  // LED 2
  pinMode(9, OUTPUT);   // Buzzer
}

void loop() {
  // State 1: LED 1 OFF, LED 2 OFF, Buzzer OFF
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  delay(1000);

  // State 2: LED 1 OFF, LED 2 ON, Buzzer ON
  digitalWrite(11, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  delay(100);

  // State 3: LED 1 ON, LED 2 OFF, Buzzer ON
  digitalWrite(11, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  delay(100);

  // State 4: LED 1 ON, LED 2 ON, Buzzer ON
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  delay(100);
}


  // State 4: Both LEDs ON, buzzer ON
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  digitalWrite(BUZZER, HIGH);
  delay(100);
}
