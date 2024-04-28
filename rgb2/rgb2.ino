int blue = 11; //pwm pinine bağladık çünkü 0-255 arası değerler vereceğiz.
int green = 10;
int red = 9;

void setup() {
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(red, OUTPUT);

}

void loop() {
  analogWrite(red, 255);
  analogWrite(green, 0);
  analogWrite(blue, 0);

  delay(1000);
  
  analogWrite(red, 0);
  analogWrite(green, 255);
  analogWrite(blue, 0);

  delay(1000);
}
