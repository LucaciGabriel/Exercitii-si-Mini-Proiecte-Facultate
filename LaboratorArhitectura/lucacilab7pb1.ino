float f=880,T,i;
void setup() {
  pinMode(2,OUTPUT);
  Serial.begin(9600);
}
void loop() {
  T=1000000/(2*f); 
  Serial.println(T);
  for(i=0;i<=5000000;i+=2*T)
  {
    digitalWrite(2,HIGH);
    delayMicroseconds(T);
    digitalWrite(2,LOW);
    delayMicroseconds(T);
  }
  delay(10000);
  //pentru 440 T=1136 s-au generat 2200 impulsuri
  //pentru 880 T=568 s-au generat 4400 impulsuri
}
