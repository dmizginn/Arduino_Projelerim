int led = 3;
int water = A0;
int waterDurum;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  waterDurum = analogRead (water);
  Serial.print("Su Değeri: ");
  Serial.println(waterDurum);

  waterDurum = map(analogRead(water),0,1023,0,255);
  analogWrite(led, waterDurum);
}
