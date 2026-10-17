
void setup() {
  pinMode(6, INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int var = digitalRead(6);

  if (var == HIGH) {
    digitalWrite(13, HIGH);
    Serial.println("The switch is pressed");
  }
  else {
    digitalWrite(13, LOW);
  }

  delay(176);
}
