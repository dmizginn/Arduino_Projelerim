int kirmizi = 7;

// değişken isminde türkçe karakter olamaz - stray hatası verir.
// değişken isminde boşluk olmaz örnek kirmizi led olması gereken kirmizi_led veya kirmiziLed 
// değişken ismi sayı ile başlayamaz örnek 1.led olması gereken led1

// ledi 7 numraya bağladım 7 tamsayı olduğu için int ifadesini kullandım
// int yani uzun hali integer tam sayı anlamına gelir.

// arduino ide yani şuan kod yazdığımız sayfa C tabanlı bir dildir
// C bir yazılım dilidir
// C tabanlı dillerde kod yazdığım satırım bittiği zaman ; koyarız

void setup() {  //bir kere çalışır
  pinMode(kirmizi, OUTPUT);//burada 7.pinin bir çıkış kapısı olduğunu söylüyoruz
  //7.pinden güç çıkışı olacak 
}

void loop() {  //sürekli çalışır
digitalWrite(kirmizi,HIGH);//7.pine güç ver 7.pinin degerini yüksek yap
delay(1000);//1 saniye bekle
digitalWrite(kirmizi,0);//digitalWrite(kirmizi,LOW); 7.pinin degerini  düşük yap
delay(1000);
}


//yeni bir sayfay açılacak sayfa adı led2 olacak iki led bağlanacak biri 7 numaraya diğeri 8 numaraya
//ledler aynı anda yanacak ve aynı anda sönecek
//bekleme süresi iki buçuk saniye olacak
//ikinci dönem bunu yaparak gelenlere çikolata verilecek
