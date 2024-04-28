int buz = 9;
int led = 10;
int pot = A1;
int potDeger; //pot-led

void setup() {
  pinMode(buz, OUTPUT);
  pinMode(led, OUTPUT);
  pinMode(pot, INPUT);
  Serial.begin(9600);
}

void loop() {
  potDeger = analogRead (pot);
  Serial.print("Potansiyometre Değeri: "); //print yan yana yazar
  Serial.println(potDeger); // println alt satıra iner yazdıktan sonra
  
  potDeger = map(analogRead(pot),0,1023,0,255);
  analogWrite (led, potDeger);
}
