#include <iostream>
using namespace std;

int main(){
    int marks[5]={56,34,98,78,23};

    marks[2]= 100;
    cout<<marks[0]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[4]<<endl;
    return 0;
}

//56
//100
//23
