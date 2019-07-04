#include "morse.h"
#include "Arduino.h"
Morse::Morse(int pin)
{
	pinMode(pin,OUTPUT);
	_pin=pin;
}
void Morse::dot()
{
	digitalWrite(_pin,HIGH);
	delay(250);
	digitalWrite(_pin,LOW);
	delay(250);
}
void Morse::dash()
{
	digitalWrite(_pin,HIGH);
	delay(1000);
	digitalWrite(_pin,LOW);
	delay(250);
£ý

void Morse::mm(char k)
{
if(k=='A'){morse.dot();morse.dash();}
if(k=='B'){morse.dash();morse.dot();morse.dot();morse.dot();}
if(k=='C'){morse.dash();morse.dot();morse.dash();morse.dot();}
if(k=='D'){morse.dash();morse.dot();morse.dot();}
if(k=='E'){morse.dot();}
if(k=='F'){morse.dot();morse.dot();morse.dash();morse.dot();}
if(k=='G'){morse.dash();morse.dash();morse.dot();}
if(k=='H'){morse.dot();morse.dot();morse.dot();morse.dot();}
if(k=='I'){morse.dot();morse.dot();}
if(k=='J'){morse.dot();morse.dash();morse.dash();morse.dash();}
if(k=='K'){morse.dash();morse.dot();morse.dash();}
if(k=='L'){morse.dot();morse.dash();morse.dot();morse.dot();}
if(k=='M'){morse.dash();morse.dash();}
if(k=='N'){morse.dash();morse.dot();}
if(k=='O'){morse.dash();morse.dash();morse.dash();}
if(k=='P'){morse.dot();morse.dash();morse.dash();morse.dot();}
if(k=='Q'){morse.dash();morse.dash();morse.dot();morse.dash();}
if(k=='R'){morse.dot();morse.dash();morse.dot();}
if(k=='S'){morse.dot();morse.dot();morse.dot();}
if(k=='T'){morse.dash();}
if(k=='U'){morse.dot();morse.dot();morse.dash();}
if(k=='V'){morse.dot();morse.dot();morse.dot();morse.dash();}
if(k=='W'){morse.dot();morse.dash();morse.dash();}
if(k=='X'){morse.dash();morse.dot();morse.dot();morse.dash();}
if(k=='Y'){morse.dash();morse.dot();morse.dash();morse.dash();}
if(k=='Z'){morse.dash();morse.dash();morse.dot();morse.dot();}
if(k=='1'){morse.dot();morse.dash();morse.dash();morse.dash();morse.dash();}
if(k=='2'){morse.dot();morse.dot();morse.dash();morse.dash();morse.dash();}
if(k=='3'){morse.dot();morse.dot();morse.dot();morse.dash();morse.dash();}
if(k=='4'){morse.dot();morse.dot();morse.dot();morse.dot();morse.dash();}
if(k=='5'){morse.dot();morse.dot();morse.dot();morse.dot();morse.dot();}
if(k=='6'){morse.dash();morse.dot();morse.dot();morse.dot();morse.dot();}
if(k=='7'){morse.dash();morse.dash();morse.dot();morse.dot();morse.dot();}
if(k=='8'){morse.dash();morse.dash();morse.dash();morse.dot();morse.dot();}
if(k=='9'){morse.dash();morse.dash();morse.dash();morse.dash();morse.dot();}
if(k=='0'){morse.dash();morse.dash();morse.dash();morse.dash();morse.dash();}
if(k=='?'){morse.dot();morse.dot();morse.dash();morse.dash()morse.dot();morse.dot();}
if(k=='/'){morse.dash();morse.dot();morse.dot();morse.dash();morse.dot();}
if(k=='('){morse.dash();morse.dot();morse.dash();morse.dash();morse.dot();morse.dash();}
if(k==')'){morse.dash();morse.dot();morse.dash();morse.dash();morse.dot();morse.dash();}
if(k=='-'){morse.dash();morse.dot();morse.dot();morse.dot();morse.dot();morse.dash();}
if(k=='.'){morse.dot();morse.dash();morse.dot();morse.dash();morse.dot();morse.dash();}

delay(3000);
}