#include <iostream>
using namespace std;

int main(){
    int n=5;

    for(int i=1; i<=n; i++){
        for(int j=n; j>=i; j--){
            cout<<i<<" ";
        }
        cout<<endl;
        for(int j=1; j<=i*2; j++){
            cout<<" ";
        }
    }
    
    return 0;
}