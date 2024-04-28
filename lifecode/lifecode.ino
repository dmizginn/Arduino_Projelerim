#include <LiquidCrystal_I2C_AvrI2C.h>
#include <Keypad.h>  // keypad kütüphanesini programa dahil ediyoruz.

LiquidCrystal_I2C_AvrI2C lcd(0x27,16,2);

const byte Satir= 4;  // keypad satır sayısı
const byte Sutun= 4;  // keypad sütün sayısı
String kod;     // girilen kod

char key[Satir][Sutun]= 
{
{'1', '2', '3', 'A'}, 
{'4', '5', '6', 'B'}, 
{'7', '8', '9', 'C'},
{'*', '0', '#', 'D'}
};

// Arduino bağlantı bacaklarını belirliyoruz
byte SatirPinleri[Satir] = {2,3,4,5}; 
byte SutunPinleri[Sutun]= {6,7,8,9}; 

// Keypade TusTakimi ismini verip arduino bağlantılarını ve karakterleri 
// bu TusTakimi keypad nesnesine tanımlıyoruz.
Keypad TusTakimi= Keypad(makeKeymap(key), SatirPinleri, SutunPinleri, Satir, Sutun);
 
void setup()
{
  Serial.begin(9600);
  lcd.begin();
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("Deneme Çalışması"); //İlk satıra yazalım
  lcd.setCursor(0,1);
  lcd.print("Hoşgeldiniz"); //İkinci satıra yazalım
}


void loop()
{
  char basilanTus = TusTakimi.getKey();  // Keyped basılan tuş değerini alıyoruz.
  if (basilanTus == "1") {
    lcd.setCursor(0,0);
    lcd.print("Kod 1");
    lcd.setCursor(0,1);
    lcd.print("Aciktim");
  }    
}
