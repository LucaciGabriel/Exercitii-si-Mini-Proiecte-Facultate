unsigned long durata;
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
  Serial.println(durata);
  Serial.println(durata,BIN);
}
