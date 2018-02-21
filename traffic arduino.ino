int ledred=1;
int ledgreen=3;
int ledyellow=2;
void setup()
 {
  pinMode (ledred,OUTPUT);
  pinMode (ledgreen,OUTPUT);
  pinMode (ledyellow,OUTPUT);
  }
  void loop ()
  {
   digitalWrite (ledred,HIGH);
   digitalWrite (ledgreen,LOW);
   digitalWrite (ledyellow,LOW);
   delay (2000);
   digitalWrite (ledred,LOW);
   digitalWrite (ledgreen,LOW);
   digitalWrite (ledyellow,HIGH);
    delay (2000);
   digitalWrite (ledred,LOW);
   digitalWrite (ledgreen,HIGH);
   digitalWrite (ledyellow,LOW);
   delay (2000);
  }
