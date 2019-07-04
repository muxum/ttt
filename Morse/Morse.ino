#include "Morse.h"
#include<string.h>
#include<stdio.h>
#include"Arduino.h"
Morse morse(13);
 char s[100];
void setup() {

  
  
  scanf("%s",&s);
  // put your setup code here, to run once:

}

void loop() {
  int i;
  for(i=0;i<strlen(s);i++)
  {morse.mm(s[i]);}
  // put your main code here, to run repeatedly:

}
