int buz = 9;

void setup() {
  pinMode(buz, OUTPUT);
}

void loop() {
  for(int i=1; i<10; i++){ //buzzer
    digitalWrite(buz, HIGH);
    delay(500);
    digitalWrite(buz, LOW);
    delay(500);
  }
  delay(100000);
}
