#include <iostream>
using namespace std;

int main(){
    int size=5;
    int marks[size];

    //input
    for(int i=0; i<size; i++){
        cin>> marks[i];
    }
    
    //loops
    for( int i=0; i<size; i++){
        cout<< marks[i]<<endl;
    }
    return 0;
}

// 12 76 54 32 87
// 12
// 76
// 54
// 32
// 87
