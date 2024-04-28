int isik = 8 ;

// Değişken isimleri türkçe karakter içermez (örnek=ışık)
// Değişken isimleri sayı ile başlamaz (örnek=1isik)
// Değişken isimleri iki kelimeden oluşuyorsa arada boşluk olmaz

//DEĞİŞKEN TÜRLERİ
// int -- tamsayılar (-32,768 arası 32,767)
// bool -- True,False
// char -- karakter
// byte -- 0-255 arası sayıları tutar
// long -- sayı değişken türü (-2,147,483,648 arası 2,147,483,647)
// float -- Virgüllü sayılar
// string -- karakter 

void setup() {  // bir kere çalışır
  pinMode(isik, OUTPUT);
}

void loop() {  //sürekli çalışır
  digitalWrite(isik, HIGH); //1 de yakmayı sağlar
  delay(1000); // 1000 milisaniye(ms) - 1 saniye eder
  digitalWrite(isik, LOW); //0 da söndürmeyi sağlar
  delay(2000); 
}
