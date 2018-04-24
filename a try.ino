
int ENA,ENB ;

#define ENA_speed 70 // 1,37 volts 
#define ENB_speed 70



int F_L = 1; 
int B_L = 2;
int F_R = 4;
int B_R = 5;



int Sensor_left = 0;
int Sensor_right = 0;
int Sensor_middle = 0; //read white initially 


void setup() {

  pinMode(ENA, OUTPUT);

  pinMode(F_L, OUTPUT);
  pinMode(B_L, OUTPUT);

 ///////

  pinMode(ENB, OUTPUT);

  pinMode(F_R, OUTPUT);
  pinMode(B_R, OUTPUT);

  pinMode(Sensor_left, INPUT);
  pinMode(Sensor_right, INPUT);
  pinMode(Sensor_middle, INPUT);

  
}

void loop(){

    // السطرين دول على حوار ال PWM 
  analogWrite(ENA, ENA_speed);
  analogWrite(ENB, ENB_speed);

  
  Sensor_left = digitalRead(10);
  Sensor_middle = digitalRead(11);
  Sensor_right = digitalRead(9);




  if(Sensor_left == HIGH && Sensor_middle == LOW && Sensor_right == LOW ){

    //Turn LEFT
    //motor A Backward
    digitalWrite(F_L, LOW);
    digitalWrite(B_L, HIGH);

    //motor B Forward
    digitalWrite(F_R, HIGH);
    digitalWrite(B_R, LOW);
  }

  else if (Sensor_left == LOW && Sensor_middle == LOW && Sensor_right == HIGH ){

    //Turn RIGHT
    //motor A Forward
    digitalWrite(F_L, HIGH);
    digitalWrite(B_L, LOW);

    //motor B Backward
    digitalWrite(F_R, LOW);
    digitalWrite(B_R, HIGH);
  }

  else if(Sensor_left == LOW && Sensor_middle == HIGH && Sensor_right == LOW ){
 
    //FORWARD
    digitalWrite(B_L, LOW);
    digitalWrite(F_L, HIGH);
    digitalWrite(B_R, LOW);
    digitalWrite(F_R, HIGH);
  }


else{


    digitalWrite(B_L, LOW);
    digitalWrite(F_L, LOW);
    digitalWrite(B_R, LOW);
    digitalWrite(F_R, LOW);


}
}


