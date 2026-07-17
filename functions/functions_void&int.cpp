#include <iostream>
using namespace std;

void void1(){
    cout<<"mithun\n";
}

int int1(){
    cout<<"naik\n";
    return 2;
}

int main(){
    void1();// mithun
    int1();// naik
    cout<<int1(); //2
}
