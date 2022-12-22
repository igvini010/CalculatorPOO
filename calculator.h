#ifndef CALCULATOR_H
#define CALCULATOR_H

#include "enumDigit.h"
#include "enumOperation.h"
#include "display.h"
#include "cpu.h"

class calculator: public display, public cpu{
    Digit numbers[10];
    Operation operations[2];
    int verificationHaveNumbers = 0;
    int verificationHaveOperation = 0;
    int verificationCalc = 0;
    int result = 0;
    int count = 1;
    int num = 0;
    int nums[2];
    public:
    void showDisplay_Numbers(Digit n1);
    void showDisplay_Operations(Operation op);
    void calculate(Operation op);
    void clean();
    int calc(int num);
};

#endif