#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter first Number : ";
    cin>>a;
    cout<<"Enter second Number : ";
    cin>>b;
    cout<<"Enter third Number : ";
    cin>>c;

    if(a>b&&a>c){
        cout<<"The Greatest num is " <<a;    
    }
    if(b>a&&b>c){
        cout<<"The Greatest num is " <<b;    
    }
    if(c>a&&c>b){
        cout<<"The Greatest num is " <<c;    
    }
    else{
        cout<<"All Number are Equal";
    }


}
