int kirmiziLed = 7;

void setup() {
  pinMode(kirmiziLed, OUTPUT);
}

void loop() {
  digitalWrite(kirmiziLed, HIGH);
  delay(500);
  digitalWrite(kirmiziLed, LOW);
  delay(500);
}
