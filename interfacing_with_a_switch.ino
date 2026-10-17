
void setup() {
  pinMode(6, INPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  int var = digitalRead(6);

  if (var == HIGH) {
    digitalWrite(13, HIGH);
  }
  else {
    digitalWrite(13, LOW);
  }
}
