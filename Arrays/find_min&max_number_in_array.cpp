#include <iostream>
using namespace std;

int main(){
    int marks[5]={56,20,95,600,99};
    int size=5;

    //loops
    int max1=0;
    int min1=1000;
    for( int i=0; i<size; i++){
        // if(max1<=marks[i]){
            // max1=marks[i];
        // }
        max1=max(marks[i],max1);

        // if(min1>=marks[i]){
        //     min1=marks[i];
        // }
        min1=min(marks[i],min1);
    }
    cout<<"maximum number in this array:"<<max1<<endl;
    cout<<"minimum number in this array:"<<min1<<endl;
    return 0;
}

// maximum number in this array:600
// minimum number in this array:20
