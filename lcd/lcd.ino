#include <AvrI2c_Greiman.h> //kütüphaneyi çağırdık
#include <LiquidCrystal_I2C_AvrI2C.h> //kütüphaneyi çağırdık

LiquidCrystal_I2C_AvrI2C karpuz(0x27, 16, 2); //karpuz nesnesi oluşturduk

void setup() {
  karpuz.begin(); //lcd ekranı başlattık
  karpuz.backlight(); //lcd ekranın arkaplan ışığını açtık
  karpuz.clear(); //lcd ekranı temizledik
}

void loop() {
  karpuz.setCursor(0,0);
  karpuz.print("mizgin");
  karpuz.setCursor(0,1);
  karpuz.print("durgun");
}
