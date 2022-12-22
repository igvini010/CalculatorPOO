#include <iostream>

#include "keyboard.cpp"
#include "keyDigit.cpp"
#include "keyOperation.cpp"
#include "calculator.cpp"
#include "cpu.cpp"
#include "display.cpp"


using namespace std;

int main(){

    keyboard key = keyboard();
    calculator cal = calculator();
    
    key.pressZero();
    key.pressFive();
    key.pressMultiplication();
    key.pressFour();
    key.pressOne();
    key.pressEqual();

    return 0;

}