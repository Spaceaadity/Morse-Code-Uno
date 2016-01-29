/*
  Morse.h - Library for flashing Morse code.
  Created by David A. Mellis, November 2, 2007.
  Released into the public domain.
 */

#ifndef Morse_h
#define Morse_h

#include "Arduino.h"

class Morse
{
  public:
    Morse(int pin, int pause);
    void dot();
    void dash();
    void displayRemorse(char getChar);
    int pause;
    char getChar;
  private:
    int _pin;
    int _pause;
    
};

#endif
