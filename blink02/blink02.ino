int led1 = 2;

void setup()
{
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  digitalWrite(led1, 0);
}

void loop()
{
  int cmd = Serial.parseInt();  
  if(cmd == 1)
  {
    digitalWrite(led1, 1);
  }
  if(cmd == 2)
  {
    digitalWrite(led1, 0);
  }
}
