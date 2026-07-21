#include <iostream>
using namespace std;

int prime(int n){
    if(n%2 != 0){
        cout<<n<<" is prime number"<<endl;
    }
    else{
        cout<<n<<" is not prime number"<<endl;
    }
    return 0;
}

int main(){
    prime(5);
    prime(4);

    return 0;
}

// 5 is prime number
// 4 is not prime number
