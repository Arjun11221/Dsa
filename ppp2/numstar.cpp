#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter N : ";
    cin>>n;
    int nsp = n-1;
    int nst = 1;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=nsp; j++){
            cout<<" ";
        }
        nsp--;
        for(int k = 1; k<=nst; k++){
            cout<<k;
        }
        nst++;
        for(int l = i-1; l>=1; l--){
            cout<<l;
        }
        cout<<endl;
    }
}