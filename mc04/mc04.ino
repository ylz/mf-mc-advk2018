void setup()
{
  Serial.begin(9600);
  pinMode(10, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  int cmd = Serial.parseInt();
  if(cmd == 10)
  {
    digitalWrite(10, 1);
    digitalWrite(12, 0);
  }
  if(cmd == 12)
  {
    digitalWrite(10, 0);
    digitalWrite(12, 1);
  }
}
