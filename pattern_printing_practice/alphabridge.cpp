#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int p = 1; p<=2*n-1; p++){
        cout<<char(64+p);
    }
    cout<<endl;
    int m = n-1;
    for(int i = 1; i<=m; i++){
        int a = 1;
        for(int j = 1; j<=m+1-i; j++){
            cout<<char(a+64);
            a++;
        }     
        for(int k = 1; k<=2*i-1; k++){
            cout<<" ";
            a++;
        }
        for(int l = 1; l<=m+1-i; l++){
            cout<<char(a+64);
            a++;
        }     
        cout<<endl;
    }
    
}