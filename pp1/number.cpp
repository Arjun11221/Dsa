#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter No. of Rows : ";
    cin>>n;
    for(int i = 1; i<=n; i++){        // for row(i)
        for(int j=1; j<=n; j++){       // for column(j)
            cout<<j<<" ";
        }
        cout<<endl;
    }
}