#include <iostream>
using namespace std;
int main() {
    char op;
    double num1;
    double num2;
    double result;

    cout<< "**********calculator*************\n";

    cout<< "Enter Operator (+ - * /):";
    cin>> op;

    cout<< "Enter num1: ";
    cin>> num1;

    cout<< "Enter num2: ";
    cin>> num2;

    switch(op){

        case '+':
            result = num1 + num2;
            cout << "result:"<< result;
            break;
        case '-':
            result = num1 - num2;
            cout << "result:"<< result;
            break;
        case '*':
            result = num1*num2;
            cout << "result:"<< result;
            break;
        case '/':
             result = num1/num2;
            cout << "result:"<< result;
            break;
    }

    return 0;
}