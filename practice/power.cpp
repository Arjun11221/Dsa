#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter 1st Number : ";
    cin>>a;
    cout<<"Enter 2nd Number : ";
    cin>>b;
    int power = 1 ;
    for(int i=1; i<=b; i++ ){
        power *=a;
    }
    cout<<power;
    
    
    
   
   
}