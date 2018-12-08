void setup()
{
  Serial.begin(9600);
  pinMode(8, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  int cmd = Serial.parseInt();
  if(cmd == 81)
  {
    digitalWrite(8, 1);
  }
  if(cmd == 80)
  {
    digitalWrite(8, 0);
  }
  if(cmd == 101)
  {
    digitalWrite(10, 1);
  }
  if(cmd == 100)
  {
    digitalWrite(10, 0);
  }
  if(cmd == 121)
  {
    digitalWrite(12, 1);
  }
  if(cmd == 120)
  {
    digitalWrite(12, 0);
  }
}
