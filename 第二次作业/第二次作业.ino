#include<stdio.h>

//f前进；b后退；l左转；r右转；s停

void setup()
{
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  Serial.begin(9000);
}
int input=0;
void loop()
{
 if(Serial.available()>0)
 {
   input=Serial.read();
 }
  switch(input)
  {
    case 'f':
    front();break;
    case 'b':
      back();break;
    case 'l':
      left();break;
    case 'r':
    right();break;
    case 's':
    stop();break;
    default:
    break;
  }
  

}
  void front()
  {digitalWrite(5,HIGH);
   digitalWrite(6,LOW);
   digitalWrite(9,HIGH);
   digitalWrite(10,LOW);
  }
   void back()
  {
     digitalWrite(5,LOW);
   digitalWrite(6,HIGH);
   digitalWrite(9,LOW);
   digitalWrite(10,HIGH);
  }
   void left()
  {
     digitalWrite(5,LOW);
   digitalWrite(6,HIGH);
   digitalWrite(9,HIGH);
   digitalWrite(10,LOW);
  }
   void right()
  {
     digitalWrite(5,HIGH);
   digitalWrite(6,LOW);
   digitalWrite(9,LOW);
   digitalWrite(10,HIGH);
  }
   void stop()
  {
     digitalWrite(5,LOW);
   digitalWrite(6,LOW);
   digitalWrite(9,LOW);
   digitalWrite(10,LOW);
  }
