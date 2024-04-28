#include <IRremote.h> //uzaktan kumanda için kütüphane ekledik

int RECV_PIN = 2; //uzaktan kumanda alıcısının bağlı olduğu pini yazdım

IRrecv irrecv(RECV_PIN); //kütüphane ile nesne oluşturduk
decode_results results; //

void setup() {
  Serial.begin(9600); //Seri port ekranını başlattık
  irrecv.enableIRIn();
}
void loop() {
  if (irrecv.decode(&results)) {
    int value = results.value; //gelen değeri tutan bir değişken oluşturdum
    Serial.println("  ");
    Serial.print("Kod: ");
    Serial.println(results.value); //kodu ekranda göreceğiz
    Serial.println("  ");
    if (results.value == 16724175) { //19 24 dahil yeni ekledim
      digitalWrite(led, HIGH);
    }
    if (results.value == 17938487) {
      digitalWrite(led, LOW);
    }
    irrecv.resume(); //Bir sonraki değeri alır
    Serial.println("******************");
  }
}
