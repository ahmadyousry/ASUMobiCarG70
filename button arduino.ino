const int led=2;
const int button=10;
int count =0;
void setup()
 {
  pinMode (led,OUTPUT);
  pinMode (button,INPUT);
  
  }
  void loop ()
  {
    count = digitalRead (button);
    if(count==HIGH)
    digitalWrite (led,HIGH);

     else 
     digitalWrite (led,LOW);
     
  }
