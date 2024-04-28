#include <LedControl.h> //kütüphaneyi çağırdık

#define CLK 5
#define CS 6
#define DIN 7

#define maxSayisi 1 //bağlı olan matrix sayısı

const long sure = 750; //const tanımlanan değişkeni verilen değerde sabit tutar

LedControl led (DIN, CLK, CS, maxSayisi); //pinleri ve sayıyı cağırdım

//Kullanacağımız ifadeler için byte tipinde dizi tanımlıyoruz

byte image [] [8] =
{
  { //KALP
    0,
    B01100110, //İkili sayı sistemi olmasını sağlamak için B ekledim
    B11111111,
    B11111111,
    B01111110,
    B00111100,
    B00011000
  },

  { //GÜLEN GÖZLER
    B00111100,
    B01000010,
    B10100101,
    B10000001,
    B10100101,
    B10011001,
    B01000010,
    B00111100
  }
};

void MatrixYazdir(byte* ch) {
  for (int i = 0; i < 8; i++) {
    led.setRow(0, i, ch[i]);
  }
}

void setup() {
  led.setIntensity(0, 10); //parlaklık ayarı
  led.shutdown(0, false); //led matrixi aktif hale getirme
  led.clearDisplay(0);
}

void loop() {
  for (int j = 0; j < 3; j++) {
    MatrixYazdir(image[j]);
    delay(sure);
  }
  for (int i = 0; i < 15; i++) {
    led.setIntensity(0, i);
    delay(100);
  }
}
