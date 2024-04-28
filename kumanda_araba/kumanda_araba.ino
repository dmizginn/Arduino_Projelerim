#include <IRremote.h>

int ALICI_PIN=13;
IRrecv irrecv(ALICI_PIN);

decode_results sonuclar;

# define m1 2
# define m2 3
# define m3 5
# define m4 6


void setup()
{
  pinMode(m1, OUTPUT);
  pinMode(m2, OUTPUT);
  pinMode(m3, OUTPUT);
  pinMode(m4, OUTPUT);
  
  Serial.begin(9600);
  irrecv.enableIRIn();
}

void loop()
{
if(irrecv.decode(&sonuclar))
{
   Serial.print("Okunan Deger: ");
  Serial.println(sonuclar.value,HEX);
  if( sonuclar.value == 0XFD8877)
    {
      ileriGit();
    }
    if( sonuclar.value == 0XFD28D7)
    {
      solaGit();
    }
      if( sonuclar.value == 0XFD9867)
    {
      geriGit();
    }
        if( sonuclar.value == 0XFD6897)
    {
      sagaGit();
    }
          if( sonuclar.value == 0XFDA857)
    {
      dur();
    }
  
      irrecv.resume();
}
}



void ileriGit()
{
  digitalWrite(m1, HIGH);
    digitalWrite(m3, HIGH);
    digitalWrite(m2, LOW);
    digitalWrite(m4, LOW);
}
void geriGit()
{
  digitalWrite(m1, LOW);
    digitalWrite(m3, LOW);
    digitalWrite(m2, HIGH);
    digitalWrite(m4, HIGH);
}
void sagaGit()
{
  digitalWrite(m1, HIGH);
    digitalWrite(m3, LOW);
    digitalWrite(m2, LOW);
    digitalWrite(m4, HIGH);
}
void solaGit()
{
  digitalWrite(m1, LOW);
    digitalWrite(m3, HIGH);
    digitalWrite(m2, HIGH);
    digitalWrite(m4, LOW);
}
void dur()
{
  digitalWrite(m1, LOW);
    digitalWrite(m3, LOW);
    digitalWrite(m2, LOW);
    digitalWrite(m4, LOW);
}
