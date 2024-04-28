

void loop() {
  for (int i = 0; i <= 180; i++) {
    kelebek.write(i); //0 45 90 135 180 135 90 45 0
    delay(5);
  }
  for (int i = 180; i >= 0; i--) {
    kelebek.write(i); //0 45 90 135 180 135 90 45 0
    delay(5);
  }

}
