void setup()
{
  Serial.begin(9600);
  pinMode(12, OUTPUT);
}

void loop()
{
  int cmd = Serial.parseInt();
  if(cmd == 2)
  {
    digitalWrite(12, !digitalRead(12));
  }
}
