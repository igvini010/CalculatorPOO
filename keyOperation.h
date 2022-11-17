#ifndef KEYOPERATION_H
#define KEYOPERATION_H

#include "enumOperation.h"

class keyOperation{
    public:
    Operation pressPlus();
    Operation pressLess();
    Operation pressMultiplication();
    Operation pressDivision();
    Operation pressEqual();
    Operation pressSeparator();
};

#endif