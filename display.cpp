#include <iostream>
#include "display.h"

using namespace std;

void display::addDigit(Digit digit){
    switch(digit){
        case Zero: cout << "0"; break;
        case One: cout << "1"; break;
        case Two: cout << "2"; break;
        case Three: cout << "3"; break;
        case Four: cout << "4"; break;
        case Five: cout << "5"; break;
        case Six: cout << "6"; break;
        case Seven: cout << "7"; break;
        case Eight: cout << "8"; break;
        case Nine: cout << "9"; break;
        default: break; 
    }
};

void display::addOperation(Operation operation){
    switch(operation){
        case Plus: cout << "+"; break;
        case Less: cout << "-"; break;
        case Multiplication: cout << "*"; break;
        case Division: cout << "/"; break;
        case Equal: cout << "="; break;
        case Separator: cout << "."; break;
        default: break;
    }
};

void display::showResult(int result){
    cout << result << endl;
};

void display::clean(){
    system("cls");
};