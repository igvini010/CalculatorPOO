#include <iostream>

#include "keyboard.cpp"
#include "keyDigit.cpp"
#include "keyOperation.cpp"
//#include "calculator.cpp"
//#include "cpu.cpp"
#include "display.cpp"


using namespace std;

int main(){

    keyboard key = keyboard();
    display dsply = display();                                                                                                                                 
    Digit n1 = key.pressFour();
    Operation op1 = key.pressPlus();
    Digit n2 = key.pressSix();
    Operation op2 = key.pressEqual();
    dsply.addDigit(n1);
    dsply.addOperation(op1);
    dsply.addDigit(n2);
    dsply.addOperation(op2);

    return 0;

}