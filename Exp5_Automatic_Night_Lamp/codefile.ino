void setup() {
Serial.begin(9600)
pinMode(7,OUTPUT);
}
void loop() {
 int d=analogRead(A0);
 Serial.println(d);
 if(d>500)
{
 digitalWrite(7,HIGH);
}
else
{
digitalWrite(7,LOW);
}

 