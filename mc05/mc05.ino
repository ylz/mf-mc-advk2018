int rot =   12;
int gelb =  10;
int gruen = 8;

void setup()
{
  Serial.begin(9600);
  pinMode(rot, OUTPUT);
  pinMode(gelb, OUTPUT);
  pinMode(gruen, OUTPUT); 
}

void loop()
{
  digitalWrite(rot, 1); 
  int cmd = Serial.parseInt();
  if(cmd == 1)
  {
    digitalWrite(gelb, 1);
    delay(600);
    digitalWrite(rot, 0); 
    digitalWrite(gelb, 0); 
    digitalWrite(gruen, 1);
    delay(2000); 
    digitalWrite(gruen, 0); 
    digitalWrite(gelb, 1);
    delay(600);
    digitalWrite(gelb, 0); 
    digitalWrite(rot, 1);
    delay(2000);
  }
}
