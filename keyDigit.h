#ifndef KEYDIGIT_H
#define KEYDIGIT_H

#include "enumDigit.h"
#include "calculator.h"

class keyDigit: public calculator{
    public:
    Digit pressZero();
    Digit pressOne();
    Digit pressTwo();
    Digit pressThree();
    Digit pressFour();
    Digit pressFive();
    Digit pressSix();
    Digit pressSeven();
    Digit pressEight();
    Digit pressNine();
};

#endif