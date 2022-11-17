#ifndef DISPLAY_H
#define DISPLAY_H

#include "enumDigit.h"
#include "enumOperation.h"

class display{
    public:
    void addDigit(Digit digit);
    void addOperation(Operation operation);
    void showResult(float result);
    void clean();
};

#endif