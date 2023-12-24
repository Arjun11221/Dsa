#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter No. of Rows : ";
    cin>>n;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++ ){
            if((i==n)||(j==n)||(i==1)||(j==1)) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
}