void setup()
{
  Serial.begin(38400);
  Serial.setTimeout(100);
  pinMode(4, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  int cmd = Serial.parseInt();
  if(cmd == 1)
  {
    digitalWrite(4, 0);
    digitalWrite(7, 0);
    digitalWrite(9, 0);
    digitalWrite(11, 0);
    int z = random(6) + 1;
    switch(z)
    {
      case 1:
        digitalWrite(9, 1);
        break;
      case 2:
        digitalWrite(4, 1);
        break;
      case 3:
        digitalWrite(9, 1);
        digitalWrite(11, 1);
        break;
      case 4:
        digitalWrite(4, 1);
        digitalWrite(11, 1);
        break;
      case 5:
        digitalWrite(9, 1);
        digitalWrite(4, 1);
        digitalWrite(11, 1);
        break;
      case 6:
        digitalWrite(4, 1);
        digitalWrite(11, 1);
        digitalWrite(7, 1);
        break;
      default:
        digitalWrite(4, 0);
        digitalWrite(7, 0);
        digitalWrite(9, 0);
        digitalWrite(11, 0);
    }
  }
}
