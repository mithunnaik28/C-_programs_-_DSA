#include <iostream>
using namespace std;

int sumOf_N_Number(int n){
    int sum=0;
    for(int i=1; i<=n; i++){
        sum=sum+i;
    }
    return sum;
}

int main(){
    cout<<"total value 1:"<<sumOf_N_Number(16)<<endl;
    cout<<"total value 2:"<<sumOf_N_Number(10)<<endl;
}

// total value 1:136
// total value 2:55
