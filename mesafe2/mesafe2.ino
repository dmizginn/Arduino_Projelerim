int trigPin = 13;  //trig pinini tanımladık
int echoPin = 12 ;  //echo pinini tanımladık
int buz = 8;

long sure;     //geçen süreyi tutacak değişken
long uzaklik;  //mesafeyi tutacak değişken


void setup() {
  pinMode(trigPin, OUTPUT);  //trigPin çıkış olarak belirlendi
  pinMode(echoPin, INPUT);  //echoPin giriş olarak belirlendi
  pinMode(buz, OUTPUT);
  Serial.begin(9600);  //Seriport ekranını başlattık
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
  Serial.println("  cm");
  delay(100);  //0-50 (10)   50-100(100)    100-150(1000)    150-200(2000)

  if( uzaklik>0 and uzaklik<51){
    digitalWrite(buz, HIGH);
    delay(10);
    digitalWrite(buz, LOW);
    delay(10);
  }
  
  }
