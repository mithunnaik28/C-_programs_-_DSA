#include <iostream>
using namespace std;

int Binary_Number(int num){
    int ans=0;
    int power=1;
    for(int i=num; i>0; i=i/2){
        int rem=i%2;
        ans +=(rem*power);
        power =power*10; 
    }

    return ans;
}
    

int main(){

    int num;
    cout<<"Enter the number:";
    cin>>num;
    cout<<num<<"Binary number value is : "<<Binary_Number(num)<<endl;

    // 1 to 10 Binary numbers
    cout<<"\n 1 to 10 Binary numbers"<<endl;
    for(int i=1; i<=10; i++){
        cout<<Binary_Number(i)<<endl;
    }
    return 0;
}

// Enter the number:12
// 12Binary number value is : 1100
// 1 to 10 Binary numbers
// 1
// 10
// 11
// 100
// 101
// 110
// 111
// 1000
// 1001
// 1010
