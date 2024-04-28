int green = 5;
int red = 3;
int blue = 6;
int sure = 1000;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
}

void loop() { //mavi - magenta - sarı - cyan - beyaz
  //kırmızı
  analogWrite(red, 255);
  analogWrite(green, 0);
  analogWrite(blue, 0);
  delay(sure);

  //yeşil
  analogWrite(red, 0);
  analogWrite(green, 255);
  analogWrite(blue, 0);
  delay(sure);

  //mavi
  analogWrite(red, 0);
  analogWrite(green, 0);
  analogWrite(blue, 255);
  delay(sure);
}
