int reading=0;
void setup()
{
  pinMode(3, OUTPUT);
  pinMode(14,INPUT);
  
}

void loop()
{
  reading = analogRead(14);
  analogWrite(3,map(reading,0,1028,0,255));
}