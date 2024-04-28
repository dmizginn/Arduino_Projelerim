int blue = 11; //pwm pinine bağladık çünkü 0-255 arası değerler vereceğiz.
int green = 10;
int red = 9;

void setup() {
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(red, OUTPUT);

}

void loop() {
  analogWrite(blue, random(0,255));
}
