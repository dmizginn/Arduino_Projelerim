#include <Keypad.h> //kütüphaneyi çağırdık 
#define buzzer 10 //buzzer bağlı olduğu pini tanımladık
#define led 11 //ledin bağlı olduğu pini tanımlaık

String sifre = "3564"; //String türünde bir değişken oluşturduk
String girilenSifre = ""; //kullanıcının gireceği şifre için değişken oluşturduk

// Farklı değişken tanımlama Değişken veri türleri
// int tam sayılar için
// String karakter tanımlamaları için
// float virgüllü sayılar için
// Boolean True ve False için
// Char karakter tanımlamak için
// byte en küçük veri tanımlama değişken türüdür(yer kaplama)

const byte satirSayisi = 4; //satır sayısını gösteren sabiti tanımladık
const byte sutunSayisi = 4; //sütun sayısını gösteren sabiti tanımladık

// Tuşların üzerinde yer alan karakterlerin mimarisini tanımlıyoruz
char keys[satirSayisi][sutunSayisi] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};
//sırası ile keypad satır pinlerinin bağlı olduğu pinleri ekledik
byte satirPinleri[satirSayisi] = {9, 8, 7, 6};

//sırası ile keypad sütun pinlerinin bağlı olduğu pinleri ekledik
byte sutunPinleri[sutunSayisi] = {5, 4, 3, 2};

// keypad1 adında bir Keypad nesnesi oluşturuyoruz
Keypad keypad1 = Keypad(makeKeymap(keys), satirPinleri, sutunPinleri, satirSayisi, sutunSayisi);

void setup() {
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  char key = keypad1.getKey();
  if (key != NO_KEY) {
    girilenSifre += key;
    Serial.println(girilenSifre);
    digitalWrite(buzzer, HIGH);
    delay(50);
    digitalWrite(buzzer, LOW);
  }
  if (girilenSifre.length() == sifre.length()) {
    if (girilenSifre == sifre) {
      digitalWrite(led, HIGH);
      delay(5000);
      digitalWrite(led, LOW);
    } else {
      for (int x = 0; x < 5; x++) {
        digitalWrite(buzzer, HIGH);
        delay(100);
        digitalWrite(buzzer, LOW);
        delay(100);
      }
    }
    girilenSifre = "";
  }
}
