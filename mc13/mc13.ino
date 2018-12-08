void setup()
{
  Serial.begin(9600);
  pinMode(6, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  int cmd = Serial.parseInt();
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
