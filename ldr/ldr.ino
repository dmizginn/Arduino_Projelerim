int LDRPin = A3; //LDRnin bağlı olduğu pin
int isik_degeri;

void setup(){
Serial.begin(9600); //Seri iletişimi başlat
}

void loop(){
int isik_degeri = analogRead(LDRPin); //ışığun değerini LDRden oku
Serial.println(isik_degeri); //Seri port ekranına yazdır
delay(250);

if (isik_degeri < 250){ //eğer ışık 250 den küçükse
digitalWrite(ledPin, HIGH); //led yansın, değilse sönsün
digitalWrite(kirmizi, LOW);
}

else{
digitalWrite(ledPin, LOW);
digitalWrite(kirmizi, HIGH);
}
}
