void setup()
{
  Serial.begin(38400);
  Serial.setTimeout(100);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  int cmd = Serial.parseInt();
  if(cmd == 21)
  {
    digitalWrite(2, 1);
  }
  if(cmd == 20)
  {
    digitalWrite(2, 0);
  }
  if(cmd == 22)
  {
    digitalWrite(2, !digitalRead(2));
  }
  if(cmd == 31)
  {
    digitalWrite(3, 1);
  }
  if(cmd == 30)
  {
    digitalWrite(3, 0);
  }
  if(cmd == 32)
  {
    digitalWrite(3, !digitalRead(3));
  }
  if(cmd == 41)
  {
    digitalWrite(4, 1);
  }
  if(cmd == 40)
  {
    digitalWrite(4, 0);
  }
  if(cmd == 42)
  {
    digitalWrite(4, !digitalRead(4));
  }
  if(cmd == 51)
  {
    digitalWrite(5, 1);
  }
  if(cmd == 50)
  {
    digitalWrite(5, 0);
  }
  if(cmd == 52)
  {
    digitalWrite(5, !digitalRead(5));
  }
  if(cmd == 61)
  {
    digitalWrite(6, 1);
  }
  if(cmd == 60)
  {
    digitalWrite(6, 0);
  }
  if(cmd == 62)
  {
    digitalWrite(6, !digitalRead(6));
  }
  if(cmd == 71)
  {
    digitalWrite(7, 1);
  }
  if(cmd == 70)
  {
    digitalWrite(7, 0);
  }
  if(cmd == 72)
  {
    digitalWrite(7, !digitalRead(7));
  }
  if(cmd == 81)
  {
    digitalWrite(8, 1);
  }
  if(cmd == 80)
  {
    digitalWrite(8, 0);
  }
  if(cmd == 82)
  {
    digitalWrite(8, !digitalRead(8));
  }
  if(cmd == 91)
  {
    digitalWrite(9, 1);
  }
  if(cmd == 90)
  {
    digitalWrite(9, 0);
  }
  if(cmd == 92)
  {
    digitalWrite(9, !digitalRead(9));
  }
  if(cmd == 101)
  {
    digitalWrite(10, 1);
  }
  if(cmd == 100)
  {
    digitalWrite(10, 0);
  }
  if(cmd == 102)
  {
    digitalWrite(10, !digitalRead(10));
  }
  if(cmd == 111)
  {
    digitalWrite(11, 1);
  }
  if(cmd == 110)
  {
    digitalWrite(11, 0);
  }
  if(cmd == 112)
  {
    digitalWrite(11, !digitalRead(11));
  }
  if(cmd == 121)
  {
    digitalWrite(12, 1);
  }
  if(cmd == 120)
  {
    digitalWrite(12, 0);
  }
  if(cmd == 122)
  {
    digitalWrite(12, !digitalRead(12));
  }
}
