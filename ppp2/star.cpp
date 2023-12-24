#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter N : ";
    cin>>n;
    int q = n-1;
    for(int m = 1; m<=2*n-1; m++){
        cout<<"*";
    }
    cout<<endl;
    for(int i = 1; i<=q; i++){
       for(int j = 1; j<=q+1-i; j++){
        cout<<"*";
       }
       for(int k = 1; k<=2*i-1; k++){
        cout<<" ";
       }
       for(int l = 1; l<=q+1-i; l++){
        cout<<"*";
       }
       cout<<endl;
    }
}