#include <iostream>
#include "calculator.h"

void calculator::showDisplay_Numbers(Digit n1){
     if(verificationHaveNumbers >= 0){
         //addDigit(n1);
         //numbers[verificationHaveNumbers] = n1;
         num = calc(n1);
         verificationHaveNumbers++;
     }
};

int calculator::calc(int num){
    //printf("calc = %d", num);
    result *= count;
    result += num;
    count = 10;
    //printf("result = %d\n", result);
    return result;
}

void calculator::showDisplay_Operations(Operation op){
     //addOperation(op);
     printf("num = %d", num);
     nums[verificationHaveOperation] = num;
     operations[verificationHaveOperation] = op;
     result = 0;
     count = 1;
     num = 0;
     if(op == Equal){
         verificationHaveOperation = 0;
         calculate(operations[0]);
     }
     verificationHaveOperation++;
};

void calculator::calculate(Operation op){
    result = cpu::operation(nums[0], nums[1], op);
    //display::showResult(result);
    verificationCalc = 1;
}

/*void calculator::clean(){
    verificationCalc = 0;
    this->display->clean();
}*/