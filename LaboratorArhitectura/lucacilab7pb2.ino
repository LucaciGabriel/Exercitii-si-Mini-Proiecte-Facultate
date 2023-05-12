float f,T,i;
void setup() {
  pinMode(2,OUTPUT);
  Serial.begin(9600);
}
void loop() {
 for(f=110;f<=2500;f++)
 {
  T=1000000/(2*f); 
  Serial.println(T);
  for(i=0;i<=10;i++)
  {
    digitalWrite(2,HIGH);
    delayMicroseconds(T);
    digitalWrite(2,LOW);
    delayMicroseconds(T);
  }
 }
}
