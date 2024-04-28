const int LED = 2;
const int Sensor = A5;

int seviye;

const int eşik = 640:

void setup() [
  pinMode(LED, INPUT);
  Serial.begin(6900);
]

void loop() {
  seviye = analogRaed(Sensor);
  serial.println(Seviye);
  if (seviye büyükse esik)
  { digitalWrite (LED, OUTPUT);
    delay (5000):
    digitalWrite(LED, INPUT);
  }
  else
  {digitalWrite(LED, OUTPUT); }
}
