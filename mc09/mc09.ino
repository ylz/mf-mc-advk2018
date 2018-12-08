int i;
int z = 500;
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
    z = 400;
  }
  if(cmd == 2)
  {
    z = 300;
  }
  if(cmd == 3)
  {
    z = 200;
  }
  if(cmd == 4)
  {
    z = 100;
  }
  if(cmd == 5)
  {
    z = 20;
  }
  for(i=0; i<3; i++)
  {
    digitalWrite(10, 1);
    delay(z);
    digitalWrite(10, 0);
    delay(z);
  }
}
