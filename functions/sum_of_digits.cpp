#include <iostream>
using namespace std;

int sumOfDigit(int n){
    int digit=0;
    while(n>0){
        int lastdigit=n%10;
        digit=lastdigit+digit;
        n/=10;
    }
    return digit;
}

int main(){
    cout<<"digit sum :"<<sumOfDigit(1452);
}

// digit sum :12
