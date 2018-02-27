const int a=1;
 const int b=2;
 const int c=3;
 const int d=4;
 const int e=5;
 const int f=6;
 const int g=7;

 
// 2nd display 

const int aa=0;
 const int bb=8;
 const int cc=9;
 const int dd=10;
 const int ee=11;
 const int ff=12;
 const int gg=13;

 

 int i =1;
 

 
 
void setup() {
  // put your setup code here, to run once:
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);

  
 // 2nd display 
  pinMode(aa,OUTPUT);
  pinMode(bb,OUTPUT);
  pinMode(cc,OUTPUT);
  pinMode(dd,OUTPUT);
  pinMode(ee,OUTPUT);
  pinMode(ff,OUTPUT);
  pinMode(gg,OUTPUT);
  
}


void loop() {
  // put your main code here, to run repeatedly:

 
 digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(e,HIGH);
digitalWrite(f,HIGH);

if(i==7){
  delay(10000);
}


if(i==1){
digitalWrite(aa,HIGH);
digitalWrite(bb,HIGH);
digitalWrite(cc,HIGH);
digitalWrite(dd,HIGH);
digitalWrite(ee,HIGH);
digitalWrite(ff,HIGH);
}

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




switch (i){

case 1 : 
digitalWrite(aa,LOW);
digitalWrite(dd,LOW);
digitalWrite(ee,LOW);
digitalWrite(ff,LOW);


break;

case 2 : 

digitalWrite(cc,LOW);
digitalWrite(aa,HIGH);
digitalWrite(gg,HIGH);
digitalWrite(dd,HIGH);
digitalWrite(ee,HIGH);


break;

case 3 : 

digitalWrite(ee,LOW);
digitalWrite(cc,HIGH);


break;

case 4 : 


digitalWrite(aa,LOW);
digitalWrite(dd,LOW);
digitalWrite(ff,HIGH);

break;


case 5 : 

digitalWrite(bb,LOW);
digitalWrite(dd,HIGH);
digitalWrite(aa,HIGH);



break;

case 6 : 
  digitalWrite(ee,HIGH);
  break;
}
i++;
}
