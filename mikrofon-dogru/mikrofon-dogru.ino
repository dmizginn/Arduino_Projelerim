const int LED = 4;
const int Sensor = A0; //A0 girişini analog giriş olarak belirledik.

int seviye;//Sesin şiddetini seviye değişkeni olarak tanımladık.

const int esik = 640;// ses şiddetinin eşik değerini buradan belirleriz.

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  seviye = analogRead(Sensor);
  Serial.println(seviye);

  if (seviye > esik) // eğer ses seviyesi eşik değerinden büyük ise Led yanar ve bir saniye sonra söner.
  { digitalWrite (LED, HIGH);
    delay (100);
    digitalWrite(LED, LOW);
  }
  else
  {
    digitalWrite(LED, LOW); //eğer ses seviyesi eşik değerden küçük ise led söner
  }
}
