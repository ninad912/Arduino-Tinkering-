const int ledp = 13;
const int sp = A2;
const int thresh = 200;

void setup() {
  Serial.begin(9600);
  pinMode(ledp,OUTPUT);
  pinMode(sp,INPUT);

  // put your setup code here, to run once:

}

void loop() {
  int ss = analogRead(sp);
  Serial.println(ss);

  if(ss>=thresh)
  {
    digitalWrite(ledp,HIGH);
    //delay(1000);
  }
  else
  {
    digitalWrite(ledp,LOW);
  }
  // put your main code here, to run repeatedly:

}
