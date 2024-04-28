int husameddin = 9;
int huriye;

void setup() {
  pinMode(husameddin, INPUT);
  Serial.begin(9600); // Seri port ekranının aktif olmasını sağlar
}

void loop() {
  huriye = digitalRead(husameddin);
  Serial.print(huriye);

}
