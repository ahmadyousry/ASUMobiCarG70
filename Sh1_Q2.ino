

 int a =4;
 int b=5;
 int c=6;
 int d=7;


       
void setup() {

        
        pinMode(a,OUTPUT);
        pinMode(b,OUTPUT);
        pinMode(c,OUTPUT);
        pinMode(d,OUTPUT);
}

void loop() {


digitalWrite(d,HIGH);
delay(1000);
digitalWrite(d,LOW);

digitalWrite(c,HIGH);
delay(1000);
digitalWrite(c,LOW);

digitalWrite(b,HIGH);
delay(1000);
digitalWrite(b,LOW);

digitalWrite(a,HIGH);
delay(1000);
digitalWrite(a,LOW);

digitalWrite(b,HIGH);
delay(1000);
digitalWrite(b,LOW);

digitalWrite(c,HIGH);
delay(1000);
digitalWrite(c,LOW);

  

}
