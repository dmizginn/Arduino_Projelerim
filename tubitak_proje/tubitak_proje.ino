#include <Servo.h>

const int micPin1 = A0; // Mikrofon 1 pin
const int micPin2 = A1; // Mikrofon 2 pin
const int micPin3 = A2; // Mikrofon 3 pin

const int threshold = 500; // Ses eşiği

Servo motor; // Servo motor nesnesi

void setup() {
  Serial.begin(9600);
  motor.attach(9); // Servo motor pin
}

void loop() {
  int mic1Value = analogRead(micPin1);
  int mic2Value = analogRead(micPin2);
  int mic3Value = analogRead(micPin3);

  // Eğer bir mikrofondan gelen ses eşiği aşıyorsa
  if (mic1Value > threshold || mic2Value > threshold || mic3Value > threshold) {
    // Sesin geldiği yöne göre step motoru döndür
    int direction = getDirection(mic1Value, mic2Value, mic3Value);
    rotateMotor(direction);
  } else {
    // Ses yoksa motoru durdur
    motor.write(90); // Orta pozisyon
  }
}

// Sesin geldiği yöne göre bir sayı döndüren fonksiyon
int getDirection(int mic1Value, int mic2Value, int mic3Value) {
  if (mic1Value > mic2Value && mic1Value > mic3Value) {
    return 1; // Motoru sola döndür
  } else if (mic2Value > mic1Value && mic2Value > mic3Value) {
    return -1; // Motoru sağa döndür
  } else {
    return 0; // Motoru durdur
  }
}

// Step motoru döndüren fonksiyon
void rotateMotor(int direction) {
  int speed = 50; // Motorun dönüş hızı
  int angle = 10; // Motorun dönüş açısı

  if (direction == 1) {
    motor.write(90 + angle); // Sola dön
  } else if (direction == -1) {
    motor.write(90 - angle); // Sağa dön
  }
  delay(speed);
}
