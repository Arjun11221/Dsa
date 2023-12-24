#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter 1st Num : ";
    cin>>a;
    int b;
    cout<<"Enter 2nd Num : ";
    cin>>b;
    // int temp = a;
    // a = b;
    // b = temp;
    a = a + b;
    b = a - b;
    a = a - b;
    cout<<a<<endl;
    cout<<b<<endl;
}