void setup()
{
  pinMode(10, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int cmd = Serial.parseInt();
  if(cmd == 1)
  {
    digitalWrite(10, 1);
  }
  if(cmd == 2)
  {
    digitalWrite(10, 0);
  }
}
