const byte trigger =7;
const byte echo =8;
float distance ;
unsigned long period;
void setup ()
  {
    pinMode (trigger,OUTPUT);
    pinMode (echo, INPUT);
    Serial.begin(9600);
  }
  void loop ()
    {
      digitalWrite (trigger, LOW);
      delayMicroseconds (3);    
      digitalWrite (trigger, HIGH);
      delayMicroseconds (10);  
      digitalWrite (trigger, LOW);
      period =pulseIn (echo,HIGH);
      distance=float (period)/58.8;      // distance=[period /(10^6 *2)]/380*100 cm
      Serial.println (distance);
      delay (60);
    }
      
        
    
