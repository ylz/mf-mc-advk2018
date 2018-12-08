int i; 
int leds[] = {9, 10, 12}; 
void setup()
{
  for (i=0; i<3; i++)
  {
    pinMode(leds[i], OUTPUT);
  }
  Serial.begin(9600);
}

void loop()
{
  int cmd = Serial.parseInt();
  if(cmd == 1)
  {
    for (i=0; i<20; i++)
    {
      digitalWrite(leds[random(3)], 1);
      delay(50);
      digitalWrite(leds[random(3)], 0);
      delay(50);
    }
  }
}
