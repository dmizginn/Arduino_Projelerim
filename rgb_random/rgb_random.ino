#define ledYesil 9
#define ledMavi 10
#define ledKirmizi 11

int kirmizi = 0;
int yesil = 0;
int mavi = 0;
void setup() {
  pinMode(ledYesil, OUTPUT);
  pinMode(ledMavi, OUTPUT);
  pinMode(ledKirmizi, OUTPUT);
}

void loop() {
  kirmizi = random(0, 255);
  yesil = random(0, 255);
  mavi = random(0, 255);

  analogWrite(ledYesil, yesil);
  analogWrite(ledMavi, mavi);
  analogWrite(ledKirmizi, kirmizi);
  delay(1000);
}
