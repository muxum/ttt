#ifndef Morse_h
#define Morse_h

#include "Arduino.h"

class Morse
{
public :
	Morse(int pin);
	void dot();
	void dash();
void mm(char);
private :
	_pin;
};
#endif
