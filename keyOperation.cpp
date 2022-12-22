#include "keyOperation.h"

Operation keyOperation::pressPlus(){
    calculator::showDisplay_Operations(Plus);
};

Operation keyOperation::pressLess(){
    calculator::showDisplay_Operations(Less);
};

Operation keyOperation::pressMultiplication(){
    calculator::showDisplay_Operations(Multiplication);
};

Operation keyOperation::pressDivision(){
    calculator::showDisplay_Operations(Division);
};

Operation keyOperation::pressEqual(){
    calculator::showDisplay_Operations(Equal);
};

Operation keyOperation::pressSeparator(){
    calculator::showDisplay_Operations(Separator);
};