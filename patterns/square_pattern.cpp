# include <iostream>
using namespace std;

int main(){
    //input
    int n;
    cout<<"how many line you want: ";
    cin>>n;

    //logic
    int m=0;
    for(int i=1;i<=n; i++){
        for(int j=m+1; j<=m+3; j++){
            cout<<j;
        }
        cout<<endl;
        m = m+3;
    }

    return 0;
}
