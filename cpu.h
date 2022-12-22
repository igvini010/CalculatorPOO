#ifndef CPU_H
#define CPU_H

#include "enumOperation.h"

class cpu{
    int temp = 0;
    int plus(int n1, int n2);
    int less(int n1, int n2);
    int multiplication(int n1, int n2);
    int division(int n1, int n2);
    public:
    int operation(int n1, int n2, Operation op);
};

#endif