//butonu 7 numaraya bağladım çünkü buton digital değer alır
//butonun digital değer almasının sebebi sadece aç/kapa özelliği olmasıdır
//digital pinler 2,4,7,8,12 ve 13 numaralı pinlerdir
//pwm 0-255 arası değer alır pwm pinleri digital olarak kullanılabilir
//ama digital pwm olarak kullanılamaz
//pwm pinleri 3,5,6,9,10 ve 11 numaralı pinlerdir
//analog pinleri 0-1023 arası değer alabilirler
//analog pinler A0,A1,A2,A3,A4 ve A5 pinleridir 
//analog pinler genellikle sensörlerden veri okumak için kullanılır (su sensörü vb.)

int buton = 7;
int butonDurum;

// butonDurum değişkeni butondan gelecek olan 1 veya 0 değerini tutması için oluşturuldu


void setup() { //bir kere çalışır
  pinMode(buton, INPUT);
  // INPUT --- GİRİŞ
  // OUTPUT --- ÇIKIŞ
  Serial.begin(9600); //seri port ekranını başlattık
  Serial.println("Buton Bağlantısı Testi -- Yapan Mizgin");
}

void loop() { //sürekli çalışır
  butonDurum = digitalRead (buton);
  Serial.print("Butondan Gelen Değer: ");
  Serial.println(butonDurum)
  delay(100);
  if (butonDurum == 1){ // şart () arasına yazılır
    // şart gerçekleşince olacaklar {} arasına yazılır
    // bir adet = sağ taraftakine sol tarafta yazanı atar
    // iki adet = yani == sağ tarafta ki ve sol tarafta ki eşit mi diye kontrol eder
    digitalWrite(led, HIGH);
  }else{
    digitalWrite(led, LOW);
  }
}
