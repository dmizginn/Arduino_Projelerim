int kirmizi = 7;

// değişken isminde türkçe karakter olamaz - stray hatası verir.
// değişken isminde boşluk olmaz örnek kirmizi led olması gereken kirmizi_led veya kirmiziLed
// değişken ismi sayı ile başlayamaz örnek 1.led olması gereken led1

// ledi 7 numaralı pine bağladım 7 sayısı bir tamsayı bu nedenle int olduğunu belirttik
// int yani integer tamsayı anlamına gelmektedir

// kullandığımız programın adı arduino ide
// arduino ide C tabanlı bir dildir C bir yazılım dilidir
// C tabanlı dillerde satır sonuna ; eklenir

void setup() { // bu fonksiyon bir defa çalışır
  pinMode(kirmizi, OUTPUT); //pinMode ile çağırdığımız pinin giriş mi yoksa çıkış mı olduğunu belirtiriz
  // kirmizi değişkeni yani 7 numaralı pin elektrik vereceğimiz için çıkıştır 
}

void loop() { // bu fonksiyon sürekli çalışır
  digitalWrite(kirmizi, HIGH); //digitalWrite dijitale yaz anlamına gelir 7 numaralı pin dijitaldir
  //HIGH yüksek anlamına gelir, elektiriği açar HIGH yerine 1 yazabiliriz.
  delay(3000); //delay bekleme için kullanılır 3000 milisaniye 3 saniye eder
  digitalWrite(kirmizi, LOW); //LOW düşük anlamına gelir Low yerine 0 yazılabilir
  delay(3000);
}

//yeni bir sayfayı açılacak sayfa adı led2 olacak iki led bağlanacak biri 7 numaraya diğeri 8 numaraya
//ledler aynı anda yanacak ve aynı anda sönecek
//bekleme süresi iki buçuk saniye olacak
//ikinci dönem bunu yaparak gelenlere çikolata verilecek
