int i; 
int j; 
void setup()
{
  for (i=4; i<=12; i+=2) 
  {
    pinMode(i, OUTPUT); 
  } 
  Serial.begin(9600);
}

void loop()
{
  int cmd = Serial.parseInt();
  if(cmd == 1)
  {
    for (j=0; j<10; j++)
    {
      for (i=4; i<=12; i+=2) 
      {
        digitalWrite(i, 1);
        delay(100);
        digitalWrite(i, 0);
      }
    }
  }
  if(cmd == 2)
  {
    for (j=0; j<10; j++)
    {
    for (i=12; i>=4; i-=2) 
      {
        digitalWrite(i, 1);
        delay(100);
        digitalWrite(i, 0);
      }
    }
  }
}
