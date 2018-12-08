// Arduino-Firmware für Minecraft
// Conrad Adventskalender Minecraft 2018

void setup()
{
  Serial.begin(38400);
  Serial.setTimeout(100);
  for(int i=2; i<13; i++)
  {
    pinMode(i, OUTPUT);
  }
}

void loop()
{
  int cmd = Serial.parseInt();
  if(cmd == 20)
  {
    digitalWrite(2, 0);
  }
  if(cmd == 21)
  {
    digitalWrite(2, 1);
  }
  if(cmd == 22)
  {
    digitalWrite(2, !digitalRead(2));
  }
  if(cmd == 24)
  {
    digitalWrite(2, 1);
    digitalWrite(3, 0);
    digitalWrite(4, 0);
    digitalWrite(5, 0);
    digitalWrite(6, 0);
    digitalWrite(7, 0);
    digitalWrite(8, 0);
    digitalWrite(9, 0);
    digitalWrite(10, 0);
    digitalWrite(11, 0);
    digitalWrite(12, 0);
  }
  if(cmd == 30)
  {
    digitalWrite(3, 0);
  }
  if(cmd == 31)
  {
    digitalWrite(3, 1);
  }
  if(cmd == 32)
  {
    digitalWrite(3, !digitalRead(3));
  }
  if(cmd == 33)
  {
    for(int i=0; i<256; i++)
    {
      analogWrite(3, i);
      delay(10);
    }
  }
  if(cmd == 34)
  {
    digitalWrite(2, 0);
    digitalWrite(3, 1);
    digitalWrite(4, 0);
    digitalWrite(5, 0);
    digitalWrite(6, 0);
    digitalWrite(7, 0);
    digitalWrite(8, 0);
    digitalWrite(9, 0);
    digitalWrite(10, 0);
    digitalWrite(11, 0);
    digitalWrite(12, 0);
  }
  if(cmd == 35)
  {
    analogWrite(3, 128);
  }
  if(cmd == 40)
  {
    digitalWrite(4, 0);
  }
  if(cmd == 41)
  {
    digitalWrite(4, 1);
  }
  if(cmd == 42)
  {
    digitalWrite(4, !digitalRead(4));
  }
  if(cmd == 44)
  {
    digitalWrite(2, 0);
    digitalWrite(3, 0);
    digitalWrite(4, 1);
    digitalWrite(5, 0);
    digitalWrite(6, 0);
    digitalWrite(7, 0);
    digitalWrite(8, 0);
    digitalWrite(9, 0);
    digitalWrite(10, 0);
    digitalWrite(11, 0);
    digitalWrite(12, 0);
  }
  if(cmd == 50)
  {
    digitalWrite(5, 0);
  }
  if(cmd == 51)
  {
    digitalWrite(5, 1);
  }
  if(cmd == 52)
  {
    digitalWrite(5, !digitalRead(5));
  }
  if(cmd == 54)
  {
    digitalWrite(2, 0);
    digitalWrite(3, 0);
    digitalWrite(4, 0);
    digitalWrite(5, 1);
    digitalWrite(6, 0);
    digitalWrite(7, 0);
    digitalWrite(8, 0);
    digitalWrite(9, 0);
    digitalWrite(10, 0);
    digitalWrite(11, 0);
    digitalWrite(12, 0);
  }
  if(cmd == 60)
  {
    digitalWrite(6, 0);
  }
  if(cmd == 61)
  {
    digitalWrite(6, 1);
  }
  if(cmd == 62)
  {
    digitalWrite(6, !digitalRead(6));
  }
  if(cmd == 64)
  {
    digitalWrite(2, 0);
    digitalWrite(3, 0);
    digitalWrite(4, 0);
    digitalWrite(5, 0);
    digitalWrite(6, 1);
    digitalWrite(7, 0);
    digitalWrite(8, 0);
    digitalWrite(9, 0);
    digitalWrite(10, 0);
    digitalWrite(11, 0);
    digitalWrite(12, 0);
  }
  if(cmd == 70)
  {
    digitalWrite(7, 0);
  }
  if(cmd == 71)
  {
    digitalWrite(7, 1);
  }
  if(cmd == 72)
  {
    digitalWrite(7, !digitalRead(7));
  }
  if(cmd == 74)
  {
    digitalWrite(2, 0);
    digitalWrite(3, 0);
    digitalWrite(4, 0);
    digitalWrite(5, 0);
    digitalWrite(6, 0);
    digitalWrite(7, 1);
    digitalWrite(8, 0);
    digitalWrite(9, 0);
    digitalWrite(10, 0);
    digitalWrite(11, 0);
    digitalWrite(12, 0);
  }
  if(cmd == 80)
  {
    digitalWrite(8, 0);
  }
  if(cmd == 81)
  {
    digitalWrite(8, 1);
  }
  if(cmd == 82)
  {
    digitalWrite(8, !digitalRead(8));
  }
  if(cmd == 84)
  {
    digitalWrite(2, 0);
    digitalWrite(3, 0);
    digitalWrite(4, 0);
    digitalWrite(5, 0);
    digitalWrite(6, 0);
    digitalWrite(7, 0);
    digitalWrite(8, 1);
    digitalWrite(9, 0);
    digitalWrite(10, 0);
    digitalWrite(11, 0);
    digitalWrite(12, 0);
  }
  if(cmd == 90)
  {
    digitalWrite(9, 0);
  }
  if(cmd == 91)
  {
    digitalWrite(9, 1);
  }
  if(cmd == 92)
  {
    digitalWrite(9, !digitalRead(9));
  }
  if(cmd == 93)
  {
    for(int i=0; i<256; i++)
    {
      analogWrite(9, i);
      delay(10);
    }
  }
  if(cmd == 94)
  {
    digitalWrite(2, 0);
    digitalWrite(3, 0);
    digitalWrite(4, 0);
    digitalWrite(5, 0);
    digitalWrite(6, 0);
    digitalWrite(7, 0);
    digitalWrite(8, 0);
    digitalWrite(9, 1);
    digitalWrite(10, 0);
    digitalWrite(11, 0);
    digitalWrite(12, 0);
  }
  if(cmd == 100)
  {
    digitalWrite(10, 0);
  }
  if(cmd == 101)
  {
    digitalWrite(10, 1);
  }
  if(cmd == 102)
  {
    digitalWrite(10, !digitalRead(10));
  }
  if(cmd == 103)
  {
    for(int i=0; i<256; i++)
    {
      analogWrite(10, i);
      delay(10);
    }
  }
  if(cmd == 104)
  {
    digitalWrite(2, 0);
    digitalWrite(3, 0);
    digitalWrite(4, 0);
    digitalWrite(5, 0);
    digitalWrite(6, 0);
    digitalWrite(7, 0);
    digitalWrite(8, 0);
    digitalWrite(9, 0);
    digitalWrite(10, 1);
    digitalWrite(11, 0);
    digitalWrite(12, 0);
  }
  if(cmd == 110)
  {
    digitalWrite(11, 0);
  }
  if(cmd == 111)
  {
    digitalWrite(11, 1);
  }
  if(cmd == 112)
  {
    digitalWrite(11, !digitalRead(11));
  }
  if(cmd == 113)
  {
    for(int i=0; i<256; i++)
    {
      analogWrite(11, i);
      delay(10);
    }
  }
  if(cmd == 114)
  {
    digitalWrite(2, 0);
    digitalWrite(3, 0);
    digitalWrite(4, 0);
    digitalWrite(5, 0);
    digitalWrite(6, 0);
    digitalWrite(7, 0);
    digitalWrite(8, 0);
    digitalWrite(9, 0);
    digitalWrite(10, 0);
    digitalWrite(11, 1);
    digitalWrite(12, 0);
  }
  if(cmd == 120)
  {
    digitalWrite(12, 0);
  }
  if(cmd == 121)
  {
    digitalWrite(12, 1);
  }
  if(cmd == 122)
  {
    digitalWrite(12, !digitalRead(12));
  }
  if(cmd == 124)
  {
    digitalWrite(2, 0);
    digitalWrite(3, 0);
    digitalWrite(4, 0);
    digitalWrite(5, 0);
    digitalWrite(6, 0);
    digitalWrite(7, 0);
    digitalWrite(8, 0);
    digitalWrite(9, 0);
    digitalWrite(10, 0);
    digitalWrite(11, 0);
    digitalWrite(12, 1);
  }
  if(cmd == 990)
  {
    for(int i=2; i<13; i++)
    {
      digitalWrite(i, 0);
    }
  }
  if(cmd == 999)
  {
    for(int i=2; i<13; i++)
    {
      digitalWrite(i, 1);
    }
  }
}
