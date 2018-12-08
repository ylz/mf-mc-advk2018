int r = 12;
int g = 10;
int b = 9;
void setup()
{
  pinMode(r, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(b, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int cmd = Serial.parseInt();
  if(cmd == 1)
  {
    digitalWrite(r, !digitalRead(r));
  }
  if(cmd == 2)
  {
    digitalWrite(g, !digitalRead(g));
  }
  if(cmd == 3)
  {
    digitalWrite(b, !digitalRead(b));
  }
}
