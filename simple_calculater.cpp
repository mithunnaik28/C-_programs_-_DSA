#include <iostream>
using namespace std;

int main() {
    int a ,b;

    cout << "Enter the 1st number: ";
    cin >> a;

    char operater;
    cout << "Enter an operator (+, -, *, /, %): ";
    cin >> operater;

    cout << "Enter the 2nd number: ";
    cin >> b;

    switch(operater) {
        case '+':
            cout << a << " + " << b << " = " << a + b;
            break;

        case '-':
            cout << a << " - " << b << " = " << a - b;
            break;

        case '*':
            cout << a << " * " << b << " = " << a * b;
            break;

        case '/':
            if(b != 0)
                cout << a << " / " << b << " = " << a / b;
            else
                cout << "Division by zero is not allowed.";
            break;
        case '%':
            if(b!=0){
                cout<< a<<"%"<< b<< "="<<a%b<<endl;
            } else{
                cout<<"division by ziro is not allowed.";
            break;}
    return 0;
}}
