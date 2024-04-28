int buton = 8;
int butonDurum;
int led = 6;

void setup() {
  Serial.begin(9600);
  pinMode(buton, INPUT); //butondan değer okuyacağımız için
  //buton değişkenini INPUT olarak ayarladık
  pinMode(led, OUTPUT);
}

void loop() {
  butonDurum = digitalRead (buton);
  Serial.print ("Buton'un Değeri");
  Serial.println(butonDurum);
  delay(100);
  if (butonDurum == 1){ // eğer == kullırsak bu kontrol yapar
    //eğer iki taraf eşitse {} içine yazdığımız kodlar çalışır
    // eşit değilse çalışmaz  
   
  }
}
