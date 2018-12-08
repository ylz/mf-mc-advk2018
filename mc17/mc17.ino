void setup()
{
  Serial.begin(38400);
  Serial.setTimeout(100);
  pinMode(6, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  int cmd = Serial.parseInt();
  if(cmd == 1)
  {
    digitalWrite(12, 1);
    digitalWrite(8, 1);
    for(int i=0; i<256; i++)
    {
      analogWrite(10, i);
      analogWrite(6, i);
      delay(20);
    }
    delay(200);
    digitalWrite(12, 0);
    digitalWrite(10, 0);
    digitalWrite(8, 0);
    digitalWrite(6, 0);
  }
}
