int motorpin=9;
int ontime=2500;
int offtime=1000;
void setup() {
  // put your setup code here, to run once:
  pinMode(motorpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(motorpin,100);
  delay(ontime);
  analogWrite(motorpin,LOW);
  delay(offtime);
  analogWrite(motorpin,190);
  delay(ontime);
  analogWrite(motorpin,LOW);
  delay(offtime);
  analogWrite(motorpin,255);
  delay(ontime);
  analogWrite(motorpin,LOW);
  delay(offtime);
    
      

}
