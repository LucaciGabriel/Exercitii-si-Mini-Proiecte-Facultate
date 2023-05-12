unsigned long durata;
float distanta;
void setup()
{
pinMode(2,OUTPUT);
pinMode(3,INPUT);
Serial.begin(9600);
}
void loop()
{
  digitalWrite(2,LOW);
  delayMicroseconds(2);
  digitalWrite(2,HIGH);
  delayMicroseconds(10);
  digitalWrite(2,LOW);
  durata=pulseIn(3,HIGH);
  distanta=(durata*0.000001*340*100)/2;
  Serial.println(distanta);
}
