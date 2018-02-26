const int red=13;
const int yellow=12;
const int green=11;
void setup() {
  // put your setup code here, to run once:
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(yellow,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(red,HIGH);
  delay(5000);
  digitalWrite(red,LOW);
  for(int i=0;i<=10;i++)
  {
    digitalWrite(yellow,HIGH);
    delay(500);
    digitalWrite(yellow,LOW);
    delay(500);
  }
  digitalWrite(green,HIGH);
  delay(5000);
  digitalWrite(green,LOW);
  
}
   

