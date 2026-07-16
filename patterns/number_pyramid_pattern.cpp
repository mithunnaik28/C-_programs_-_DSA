#include <iostream>
using namespace std;

int main(){
    int n=5;

    int m=0;
    for(int i=1; i<=n; i++){
        for(int j=n-1;j>=i;j--){
            cout<<"  ";
        }
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        for(int j=m;j>=1; j--){
            cout<<j<<" ";
        }
        m++;
        cout<<endl;
    }
    return 0;
}