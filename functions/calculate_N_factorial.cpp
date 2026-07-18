#include <iostream>
using namespace std;

int calculate_N_Number(int n){
    int mul=1;
    for(int i=1; i<=n; i++){
        mul=mul*i;
    }
    return mul;
}

int main(){
    cout<<"total value 1:"<<calculate_N_Number(5)<<endl;
    cout<<"total value 2:"<<calculate_N_Number(3)<<endl;
}

// total value 1:120
// total value 2:6
