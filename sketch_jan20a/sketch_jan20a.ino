int kirmizi_led = 8 ;
int yesil_led1 = 9 ;
int yesil_led = 10 ;
int sari_led = 11 ;
void setup() {
  pinMode(kirmizi_led, OUTPUT);
  pinMode(yesil_led1, OUTPUT);
  pinMode(yesil_led, OUTPUT);
  pinMode(sari_led, OUTPUT);
}
void loop() {
  digitalWrite(kirmizi_led, HIGH);
  delay(100);
  digitalWrite(yesil_led1, HIGH);
  delay(100);
  digitalWrite(yesil_led, HIGH);
  delay(100);
  digitalWrite(sari_led, HIGH);
  delay(4000);
  digitalWrite(kirmizi_led, LOW);
  delay(100);
  digitalWrite(yesil_led1, LOW);
  delay(100);
  digitalWrite(yesil_led, LOW);
  delay(100);
  digitalWrite(sari_led, LOW);
  delay(400);
}
