void setup() {
  // put your setup code here, to run once:
pinMode(9,INPUT);
pinMode(12,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int  obstacle = digitalRead(9);
 if(obstacle == HIGH)
   digitalWrite(12, HIGH);
 else
   digitalWrite(12,LOW);
}
