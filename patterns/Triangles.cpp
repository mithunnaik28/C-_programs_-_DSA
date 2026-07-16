#include <iostream>
using namespace std;

int main(){
    cout<<"triagle shape size :";
    int tri;
    cin>>tri;

    // Triangle
    cout<<"\nTriangle"<<endl;

    for (int i=1;i<=tri;i++){
        for(int n=1;n<=i;n++){
            cout<<"*";
        }
        cout<<endl;
    }

    //triangle
    cout<<"\n\n Reverse triangle"<<endl;

    for (int i=tri;i>=1;i--){
        for(int n=1;n<=i;n++){
            cout<<"*";
        }
        cout<<endl;
    }

    // equiletaral triangle
    cout<<"\n\nequiletaral triangle"<<endl;

    for (int i=1;i<=tri;i++){
        for (int m=tri; m>=i;m--){
            cout<<" ";
        }
         for(int j=1; j<=i; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
        
    }

    // inverted equiletaral triangle
    cout<<"\n\ninverted equiletaral triangle"<<endl;

    for (int i=1;i<=tri;i++){    
         for(int j=tri; j>=i; j--){
            cout<<"*"<<" ";
        }
        cout<<endl;
        for (int m=1; m<=i;m++){
            cout<<" ";
        }
    
    }
    return 0;
}