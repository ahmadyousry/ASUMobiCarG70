int m1a = 12;
int m1b = 13;
int m2a = 7;  
int m2b = 8;
int en1 =2;
int en2 = 3;
char val;
int sensor1 =9;
int sensor2 = 10;
int sensor3 = 11;
int sensorstate1 = 0;
int sensorstate2 = 0;
int sensorstate3 = 0;
int flag=0;
/*const byte trigger =4;
const byte echo =5;
float distance ;
unsigned long period;*/
void setup() 
{  
  pinMode(en1, OUTPUT);
  pinMode(en2, OUTPUT);
pinMode(m1a, OUTPUT);  
pinMode(m1b, OUTPUT);  
pinMode(m2a, OUTPUT);  
pinMode(m2b, OUTPUT); 
pinMode (sensor1, INPUT);
pinMode (sensor2, INPUT);
pinMode (sensor3, INPUT);
/*pinMode (trigger,OUTPUT);
pinMode (echo, INPUT);*/
Serial.begin(9600);

}

void loop()
{
  digitalWrite(en1, HIGH);
  digitalWrite(en2, HIGH);
  // line follower
   sensorstate1= digitalRead(9);
  sensorstate2= digitalRead(10);
  sensorstate3= digitalRead(11);
  // line follower (forward)
     if(sensorstate3 == 1&&sensorstate1 == 0&&sensorstate2 == 0) // Forward
    {
      digitalWrite(m1a,150);
      digitalWrite(m1b, LOW);
      digitalWrite(m2a, 150);
      digitalWrite(m2b, LOW);
      flag=1; 
    }
    else if(sensorstate2 == 1&&sensorstate1 == 0&&sensorstate3 == 0) //Left
    {
    digitalWrite(m1a, 150);
    digitalWrite(m1b, LOW);
    digitalWrite(m2a, LOW);
    digitalWrite(m2b, LOW);
    flag=2;
    }
    else if(sensorstate2 == 0&&sensorstate1 == 1&&sensorstate3 == 0) //Right
    {
    digitalWrite(m1a, LOW);
    digitalWrite(m1b, LOW);
    digitalWrite(m2a, 150);
    digitalWrite(m2b, LOW);
    flag=3; 
    }
    else if(sensorstate2 == 0&&sensorstate1 == 1&&sensorstate3 == 1) //Right
    {
    digitalWrite(m1a, LOW);
    digitalWrite(m1b, LOW);
    digitalWrite(m2a, 150);
    digitalWrite(m2b, LOW);
    flag=3; 
    }
    else if(sensorstate2 == 1&&sensorstate1 == 0&&sensorstate3 == 1) //Left
    {
    digitalWrite(m1a, 150);
    digitalWrite(m1b, LOW);
    digitalWrite(m2a, LOW);
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
        digitalWrite(m1a,150);
      digitalWrite(m1b, LOW);
      digitalWrite(m2a, 150);
      digitalWrite(m2b, LOW);
      }
       else if (flag==2)
      {
        digitalWrite(m1a, 150);
    digitalWrite(m1b, LOW);
    digitalWrite(m2a, LOW);
    digitalWrite(m2b, LOW);
      }
      else if (flag==3)
      {
         digitalWrite(m1a, LOW);
    digitalWrite(m1b, LOW);
    digitalWrite(m2a, 150);
    digitalWrite(m2b, LOW);
      }
      
    }
    
 /* while (Serial.available() > 0)
  {
  val = Serial.read();
  Serial.println(val);
  }
  digitalWrite (trigger, LOW);
      delayMicroseconds (3);    
      digitalWrite (trigger, HIGH);
      delayMicroseconds (10);
      digitalWrite (trigger, LOW);
      period =pulseIn (echo,HIGH);
      distance=float (period)/58.8;      // distance=[period /(10^6 *2)]/380*100 cm
      Serial.println (distance);
      delay (60);
   if (distance<=30)
   {
    digitalWrite(m1a, LOW);
      digitalWrite(m1b, LOW);
      digitalWrite(m2a, LOW);
      digitalWrite(m2b, LOW); 
   }
  else if( val == 'F') // Forward
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

    else if(val == 'L') //Left
    {
    digitalWrite(m1a, LOW);
    digitalWrite(m1b, LOW);
    digitalWrite(m2a, HIGH);
    digitalWrite(m2b, LOW);
    }
    else if(val == 'R') //Right
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
