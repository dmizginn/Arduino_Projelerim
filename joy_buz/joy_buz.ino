int buton = 2; //SW
int buzzer = 9;

int yPin = A1;
int xPin = A0;
int butonDurum;
int xPinDurum;
int yPinDurum;

int Do = 262;
int Re = 294;
int Mi = 330;
int Fa = 349;
int Sol = 392;
int La = 440;
int Si = 494;
int Do_ = 523;

void setup() {
  pinMode(buton, INPUT_PULLUP); 
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  butonDurum = digitalRead(buton);
  xPinDurum = analogRead(xPin);
  yPinDurum = analogRead(yPin);

  Serial.print(" X pini Değeri: ");
  Serial.println(xPinDurum);
  Serial.print(" Y pini Değeri: ");
  Serial.println(yPinDurum);
  Serial.print(" Buton Değeri: ");
  Serial.println(butonDurum);
  delay(250);

  if (xPinDurum > 900){
    tone(buzzer, Do);
    delay(200);
    noTone(buzzer);
  }
  if (xPinDurum < 200){
    tone(buzzer, Fa);
    delay(200);
    noTone(buzzer);
  }
}

slm arkadaşlar ben mustafa the mizgin hocanın eski öğrencisi
