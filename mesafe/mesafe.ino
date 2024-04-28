int trigPin = 13;  //trig pinini tanımladık
int echoPin = 12;  //echo pinini tanımladık

long sure;     //geçen süreyi tutacak değişken
long uzaklik;  //mesafeyi tutacak değişken

void setup() {
  pinMode(trigPin, OUTPUT);  //trigPin çıkış olarak belirlendi
  pinMode(echoPin, INPUT);  //echoPin giriş olarak belirlendi
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin, LOW); //trigPin düşük olarak belirlendi
  delayMicroseconds(5);  //5 mikrosaniye bekledik
  digitalWrite(trigPin, HIGH); //trigPin yüksek olarak belirlendi
  delayMicroseconds(10);  //10 mikrosaniye bekledik
  digitalWrite(trigPin, LOW); //yeni ses dalgası üretebilmesi için pasif hale getirdik

  sure = pulseIn(echoPin, HIGH); //gönderilen ses dalgasının geri dönmesindeki süre hesaplar

  uzaklik = sure / 29.1 / 2; //ölçtüğümüz süreyi uzaklığa çeviriyoruz

  if (uzaklik > 200) //uzaklık 200 üzerinde olunca direkt 200 e eşitledik
    uzaklik = 200;

  Serial.print("Ölçtüğüm uzaklık : ");
  Serial.print(uzaklik); //ölçtüğümüz uzaklığı seri port ekranına yazdırdık
  Serial.println(" cm");

  if (uzaklik < 51) {
    digitalWrite(buz, HIGH);
    delay(10);
    digitalWrite(buz, LOW);
    delay(10);
  }
  if (uzaklik > 49 and uzaklik < 101) {
    digitalWrite(buz, HIGH);
    delay(50);
    digitalWrite(buz, LOW);
    delay(50);
  }
  if (uzaklik > 100 and uzaklik < 151) {
    digitalWrite(buz, HIGH);
    delay(100);
    digitalWrite(buz, LOW);
    delay(100);
  }
  if (uzaklik > 149) {
    digitalWrite(buz, HIGH);
    delay(500);
    digitalWrite(buz, LOW);
    delay(500);
  }
}
