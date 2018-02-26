const int led=13;
const int on=3;
void setup() {
  // put your setup code here, to run once:
  pinMode(on,INPUT);
  pinMode(led,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(on)==HIGH)
  {
    digitalWrite(led,HIGH);
    delay(2000);
  }
  else
  {
    digitalWrite(led,LOW);
  }
}
   

