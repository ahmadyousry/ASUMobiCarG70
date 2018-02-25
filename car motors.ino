
const int but13=13;
const int but5=5;
const int but6=6;
const int but7=7;
const int bra1=12;
const int bra2=11;
const int bra3=10;
const int bra4=9;
int butt13,butt5,butt6,butt7;

void setup() {
pinMode(but13,INPUT);
pinMode(but5,INPUT);
pinMode(but6,INPUT);
pinMode(but7,INPUT);
pinMode(bra1,OUTPUT);
pinMode(bra2,OUTPUT);
pinMode(bra3,OUTPUT);
pinMode(bra4,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {butt13=digitalRead(but13);
butt5=digitalRead(but5);
butt6=digitalRead(but6);
butt7=digitalRead(but7);
if(butt5==1){digitalWrite(bra1,1);digitalWrite(bra3,1);digitalWrite(bra2,0);digitalWrite(bra4,0);}//robot moves forwrad:

else if(butt6==1){digitalWrite(bra1,0);digitalWrite(bra3,0);digitalWrite(bra2,1);digitalWrite(bra4,1);}//robot mobes back:
else if(butt13==1){digitalWrite(bra1,1);digitalWrite(bra3,0);digitalWrite(bra2,0);digitalWrite(bra4,1);}//robot moves right:
else if(butt7==1){digitalWrite(bra1,0);digitalWrite(bra3,1);digitalWrite(bra2,1);digitalWrite(bra4,0);}//robot moves left:
else{digitalWrite(bra1,0);digitalWrite(bra3,0);digitalWrite(bra2,0);digitalWrite(bra4,0);}




  
  
  // put your main code here, to run repeatedly:

} 
