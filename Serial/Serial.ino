int yil = 1994;
void setup() { //içeriğinde yazan kodlar bir kere çalışır
  Serial.begin(9600); //seriport ekranını başlatır.
}

void loop() {
  Serial.print(yil);
  Serial.print(" Mizgin "); //print yan yana yazar
  Serial.println("DURĞUN"); //println yazdıktan sonra alt satıra geçer
  delay(500);
}
