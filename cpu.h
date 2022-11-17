#ifndef CPU_H
#define CPU_H

#include "enumOperation.h"

class cpu{
    float plus(float n1, float n2);
    float less(float n1, float n2);
    float multiplication(float n1, float n2);
    float division(float n1, float n2);
    public:
    float operation(float n1, float n2, Operation op);
};

#endif