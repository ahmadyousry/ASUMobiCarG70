int m1a = 12;
int m1b = 13;
int m2a = 7;  
int m2b = 8;
int en1 =2;
int en2 = 3;
int sensor1 = 4;
int sensor2 = 5;
int sensor3 = 6;
int sensorstate1 = 0;
int sensorstate2 = 0;
int sensorstate3 = 0;
int flag=0;
/*char val;
const byte trigger =4;
const byte echo =5;
float distance ;
unsigned long period;*/
void setup() 
{  
  pinMode(en1, OUTPUT);
  pinMode(en2, OUTPUT);
pinMode(m1a, OUTPUT);  // Digital pin 10 set as output Pin
pinMode(m1b, OUTPUT);  // Digital pin 11 set as output Pin
pinMode(m2a, OUTPUT);  // Digital pin 12 set as output Pin
pinMode(m2b, OUTPUT); // Digital pin 13 set as output Pin
pinMode (sensor1, INPUT);
pinMode (sensor2, INPUT);
pinMode (sensor3, INPUT);
/*pinMode (trigger,OUTPUT);
pinMode (echo, INPUT);*/
Serial.begin(9600);
    
}

void loop()
{
  // enable
  digitalWrite(en1, HIGH);
  digitalWrite(en2, HIGH);
  // ultra sonic
 /* digitalWrite (trigger, LOW);
      delayMicroseconds (3);    
      digitalWrite (trigger, HIGH);
      delayMicroseconds (10);
      digitalWrite (trigger, LOW);
      period =pulseIn (echo,HIGH);
      distance=float (period)/58.8;      // distance=[period /(10^6 *2)]/380*100 cm
      Serial.println (distance);
      delay (60);
      // bluetooth modules
  while (Serial.available() > 0)
  {
  val = Serial.read();
  Serial.println(val);
  }*/
  // line follower
   sensorstate1= digitalRead(4);
  sensorstate2= digitalRead(5);
  sensorstate3= digitalRead(6);
   /*if (distance<=30)
   {
      digitalWrite(m1a, LOW);
      digitalWrite(m1b, LOW);
      digitalWrite(m2a, LOW);
      digitalWrite(m2b, LOW); 
   }
   */
   // line follower (forward)
     if(sensorstate3 == 1&&sensorstate1 == 0&&sensorstate2 == 0) // Forward
    {
      digitalWrite(m1a, HIGH);
      digitalWrite(m1b, LOW);
      digitalWrite(m2a, HIGH);
      digitalWrite(m2b, LOW);
      flag=1; 
    }
    else if(sensorstate2 == 1&&sensorstate1 == 0&&sensorstate3 == 0) //Left
    {
    digitalWrite(m1a, LOW);
    digitalWrite(m1b, LOW);
    digitalWrite(m2a, HIGH);
    digitalWrite(m2b, LOW);
    flag=2;
    }
    else if(sensorstate2 == 0&&sensorstate1 == 1&&sensorstate3 == 0) //Right
    {
    digitalWrite(m1a, HIGH);
    digitalWrite(m1b, LOW);
    digitalWrite(m2a, LOW);
    digitalWrite(m2b, LOW);
    flag=3; 
    }
    else if(sensorstate2 == 0&&sensorstate1 == 1&&sensorstate3 == 1) //Right
    {
    digitalWrite(m1a, HIGH);
    digitalWrite(m1b, LOW);
    digitalWrite(m2a, LOW);
    digitalWrite(m2b, LOW);
    flag=3; 
    }
    else if(sensorstate2 == 1&&sensorstate1 == 0&&sensorstate3 == 1) //Left
    {
    digitalWrite(m1a, LOW);
    digitalWrite(m1b, LOW);
    digitalWrite(m2a, HIGH);
    digitalWrite(m2b, LOW);
    flag=2;
    }
    else if(sensorstate2 == 1&&sensorstate1 == 1&&sensorstate3 == 1) //right
    {
    digitalWrite(m1a, HIGH);
    digitalWrite(m1b, LOW);
    digitalWrite(m2a, LOW);
    digitalWrite(m2b, LOW); 
    }
    else if(sensorstate2 == 0&&sensorstate1 ==0 &&sensorstate3 == 0) //right
    {
     if (flag==1)
      {
        digitalWrite(m1a, HIGH);
      digitalWrite(m1b, LOW);
      digitalWrite(m2a, HIGH);
      digitalWrite(m2b, LOW);
      }
       else if (flag==2)
      {
        digitalWrite(m1a, LOW);
    digitalWrite(m1b, LOW);
    digitalWrite(m2a, HIGH);
    digitalWrite(m2b, LOW);
      }
      else if (flag==3)
      {
         digitalWrite(m1a, HIGH);
    digitalWrite(m1b, LOW);
    digitalWrite(m2a, LOW);
    digitalWrite(m2b, LOW);
      }
      
    }
    
  /*else if( val == 'F') // Forward
    {
      digitalWrite(m1a, HIGH);
      digitalWrite(m1b, LOW);
      digitalWrite(m2a, HIGH);
      digitalWrite(m2b, LOW); 
    }
  else if(val == 'B') // Backward
    {
      digitalWrite(m1a, LOW);
      digitalWrite(m1b, HIGH);
      digitalWrite(m2a, LOW);
      digitalWrite(m2b, HIGH); 
    }
  
    else if(sensorstate2 == HIGH) //Left
    {
    digitalWrite(m1a, LOW);
    digitalWrite(m1b, LOW);
    digitalWrite(m2a, HIGH);
    digitalWrite(m2b, LOW);
    }
    else if(sensorstate1 == HIGH) //Right
    {
    digitalWrite(m1a, HIGH);
    digitalWrite(m1b, LOW);
    digitalWrite(m2a, LOW);
    digitalWrite(m2b, LOW); 
    }
    
  else if(val == 'S') //Stop
    {
    digitalWrite(m1a, LOW);
    digitalWrite(m1b, LOW);
    digitalWrite(m2a, LOW);
    digitalWrite(m2b, LOW); 
    }
  else if(val == 'I') //Forward Right
    {
    digitalWrite(m1a, HIGH);
    digitalWrite(m1b, LOW);
    digitalWrite(m2a, LOW);
    digitalWrite(m2b, LOW);
    }
  else if(val == 'J') //Backward Right
    {
    digitalWrite(m1a, LOW);
    digitalWrite(m1b, HIGH);
    digitalWrite(m2a, LOW);
    digitalWrite(m2b, LOW);
    }
   else if(val == 'G') //Forward Left
    {
    digitalWrite(m1a, LOW);
    digitalWrite(m1b, LOW);
    digitalWrite(m2a, HIGH);
    digitalWrite(m2b, LOW);
    }
  else if(val == 'H') //Backward Left
    {
    digitalWrite(m1a, LOW);
    digitalWrite(m1b, LOW);
    digitalWrite(m2a, LOW);
    digitalWrite(m2b, HIGH); 
    }
    */
}

