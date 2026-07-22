#include <iostream>
using namespace std;

int Decimal_Number(int num){
    int ans=0, power=1;
    for(int i=num; i>0;i=i/10){
        int rem = i%10;
        ans += rem*power;
        power *= 2;
    }
    return ans;
}

int main(){
    cout<<Decimal_Number(11100);
    return 0;
}

//28
