#include <iostream>
using namespace std;

//Hollow daimond pattern
int main(){
    int n=4;// input

    // above part of triangle
    for(int i=1; i<=n; i++){

        //space
        for(int j=n; j>i; j--){
            cout<<" ";
        }
        cout<<"*";

        //inner space
        for(int j=2; j<=i*2-2; j++){
            cout<<" ";
        }
        if(i>1){
            cout<<"*";
        }
        cout<<endl;
    }

    //below triangle 
    for(int i=1; i<n; i++){
        
        //sapce
        for(int j=1; j<=i; j++){
            cout<<" ";
        }
        cout<<"*";

        //innersapce
        for(int j=n; j>i*2-1; j--){
            cout<<" ";
        }
        if(i>=1 and i<=n-2){
        cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
