#include<iostream>
using namespace std;
void odd(int a , int b ){
    for(int i = a; i<=b; i++){
        if(i%2!=0) cout<<i<<endl;
    }
}

int main(){
    int a;
    cout<<"Enter first Number : ";
    cin>>a;
    int b;
    cout<<"Enter second Number : ";
    cin>>b;
    odd(min(a,b),max(a,b));
     
}