int i; 
int j; 
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
  if(cmd == 1)
  {
    for (j=0; j<20; j++)
    {
      i = random(4)*2+6;
      digitalWrite(i, 1);
      delay(100);
      digitalWrite(i, 0);
    }
  }
}
