#include <iostream>
using namespace std;

int main(){
    cout<<(sizeof(int))<<endl;
    cout<<(sizeof(long int))<<endl;
    cout<<(sizeof(short int))<<endl;
    cout<<(sizeof(long long int))<<endl;

    signed int sx= 10;
    signed int sy= -10;

    unsigned int ux= 10;
    unsigned int uy= -10;

    cout<<sx<<"  "<<sy<<endl; // + and - both 
    cout<<ux<<"  "<<uy<<endl; // only positive
    return 0;
}
// 4
// 4
// 2
// 8
// 10  -10
// 10  4294967286
