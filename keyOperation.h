#ifndef KEYOPERATION_H
#define KEYOPERATION_H

#include "enumOperation.h"
#include "calculator.h"

class keyOperation: public calculator{
    public:
    Operation pressPlus();
    Operation pressLess();
    Operation pressMultiplication();
    Operation pressDivision();
    Operation pressEqual();
    Operation pressSeparator();
};

#endif