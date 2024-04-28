int a = 2;
int b = 3;
int c = 4;
int d = 5;
int e = 6;
int f = 7;
int g = 8;
int dp = 9;
int D1 = 10;
int D2 = 11;
int D3 = 12;
int D4 = 13;

//4-seven-segment

void setup() {
  for(int sayac = 2; sayac <= 13; sayac++){
    pinMode(sayac, OUTPUT);  
  }  
}

void loop() {
  
}
void sifir(){
  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,1);
  digitalWrite(g,0);
}
