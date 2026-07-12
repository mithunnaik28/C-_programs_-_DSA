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
        for (int m=1; m<= tri-i;m++){
            cout<<" ";
        }
        for(int n=1;n<=2*i-1;n++){
            cout<<"*";
        }
        cout<<endl;
    }

    // Reverse equiletaral triangle
    cout<<"\n\nReverse equiletaral triangle"<<endl;

    for (int i=tri;i>=1;i--){
        for (int m=1; m<= tri-i;m++){
            cout<<" ";
        }
        for(int n=1;n<=2*i-1;n++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}