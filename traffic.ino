const int pin=1;
const int pin1=2;
const int pin2=3;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin,OUTPUT);
  pinMode(pin1,OUTPUT);
  pinMode(pin2,OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly :
  digitalWrite(pin,HIGH);
  delay(12000);
  digitalWrite(pin,LOW);
  digitalWrite(pin1,HIGH);
  delay(500);
  digitalWrite(pin1,LOW);
  delay(500);
  digitalWrite(pin1,HIGH);
  delay(500);
  digitalWrite(pin1,LOW);
  delay(500);
  digitalWrite(pin1,HIGH);
  delay(500);
  digitalWrite(pin1,LOW);
  delay(500);
  digitalWrite(pin2,HIGH);
  delay(12000);
  digitalWrite(pin2,LOW);
  
  

}
