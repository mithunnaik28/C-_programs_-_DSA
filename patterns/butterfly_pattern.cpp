#include <iostream>
using namespace std;

//butterfly pattern
int main(){
    int n=4;//input

    //upper part
    int m=0;
    for(int i=1; i<=n; i++){
        
        //upper left part
        for(int j=1; j<=i;j++){
            cout<<"*";
        }

        //middle space
        for(int j=6; j>m;j--){
            cout<<" ";
        }
        m=m+2;

        //upper right part
        for(int j=1; j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    //lower part
    int m1=0;
    for(int i=n; i>=1; i--){

        //lower left part
        for(int j=i; j>=1; j--){
            cout<<"*";
        }

        //middle space
        for(int j=1;j<=m1;j++){
            cout<<" ";
        }
        m1=m1+2;

        //lower right part
        for(int j=i; j>=1; j--){
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}

// output:-
// *      *
// **    **
// ***  ***
// ********
// ********
// ***  ***
// **    **
// *      *
