const int button=13;
const int res=12;
int but;

void setup() {pinMode(button,INPUT);
pinMode(res,OUTPUT);

  // put your setup code here, to run once:

}

void loop() {but=digitalRead(button);
if(but==1){digitalWrite(res,1);}
else{digitalWrite(res,0);}
  // put your main code here, to run repeatedly:

}
