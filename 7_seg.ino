const int a=1;
 const int b=2;
 const int c=3;
 const int d=4;
 const int e=5;
 const int f=6;
 const int g=7;
 
void setup() {
  // put your setup code here, to run once:
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
  
}


void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(e,HIGH);
digitalWrite(f,HIGH);
delay(1000);
digitalWrite(a,LOW);
digitalWrite(d,LOW);
digitalWrite(e,LOW);
digitalWrite(f,LOW);
delay(1000);

digitalWrite(c,LOW);
digitalWrite(a,HIGH);
digitalWrite(g,HIGH);
digitalWrite(d,HIGH);
digitalWrite(e,HIGH);
delay(1000);

digitalWrite(e,LOW);
digitalWrite(c,HIGH);

delay(1000);

digitalWrite(a,LOW);
digitalWrite(d,LOW);
digitalWrite(f,HIGH);
delay(1000);

digitalWrite(b,LOW);
digitalWrite(d,HIGH);
digitalWrite(a,HIGH);

delay(1000);

digitalWrite(e,HIGH);
delay(1000);

digitalWrite(g,LOW);
digitalWrite(f,LOW);
digitalWrite(d,LOW);
digitalWrite(e,LOW);
digitalWrite(b,HIGH);

delay(1000);
digitalWrite(g,HIGH);
digitalWrite(f,HIGH);
digitalWrite(d,HIGH);
digitalWrite(e,HIGH);

delay(1000);

digitalWrite(e,LOW);


delay(1000);

digitalWrite(g,LOW);



}
