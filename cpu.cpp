#include "cpu.h"

int cpu::plus(int n1, int n2){
    return (n1+n2);
};

int cpu::less(int n1, int n2){
    return (n1-n2);
};
    
int cpu::multiplication(int n1, int n2){
    return (n1*n2);
};
    
int cpu::division(int n1, int n2){
    return (n1/n2);
};

int cpu::operation(int n1, int n2, Operation op){
    switch(op){
        case Plus: plus(n1, n2); break;
        case Less: less(n1, n2); break;
        case Multiplication: multiplication(n1, n2); break;
        case Division: division(n1, n2); break;
        default: break;
    }
};