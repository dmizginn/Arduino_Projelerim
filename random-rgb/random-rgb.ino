int red = 3; // int integer kısaltması ve tamsayı anlamına gelir
int green = 5; // -32768 ila 32767 arasında değer alabilir
int blue = 6;
int sure = 1000;
long randNumber; //-2147483648 ile 2147483647 arasında değer alır

void setup() {
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  randomSeed(analogRead(0)); // rastgele sayı üretmemizi sağlayacak fonksiyon
}

void loop() {
  randNumber = random (0 , 255);
  analogWrite(red, randNumber);
  randNumber = random (0 , 255);
  analogWrite(green, randNumber);
  randNumber = random (0 , 255);
  analogWrite(blue, randNumber);
  delay(sure);
}
