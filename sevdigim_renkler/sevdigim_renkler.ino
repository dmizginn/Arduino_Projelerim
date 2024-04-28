 int red=3;
 int green=5;
 int blue=6;
 int sure=500;
//int tamsayı türünde veri tutabilen bir değişken türü
//digital pinler 0-13 arasında değişen 14 tane digital pin vardır
//digital pinler 0 ya da 1 değerini alırlar
//3,5,6,9,10,11 pinleri pwm pinleridir
//pwm pinleri 0-255 arasında değer alırlar
//analog pinleri A0,A1,A2,A3,A4,A5
//analog pinler 0-1023 arasında deger alır yani 1024 farklı deger alır
void setup() {
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);
  //setup fonksiyonu 1 kere çalışır
}

void loop() {
  analogWrite(red,255);
  analogWrite(green,255);
  analogWrite(blue,255);
  delay(sure);

}
