#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int m = n-1;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            if(i==j) cout<<"*";
            else cout<<" ";
        }
        for(int j = 1; j<=m; j++){
            if(i+j==n) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
}