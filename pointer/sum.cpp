#include<iostream>
using namespace std;
int main(){
    int x,y;
    int* p1 = &x;
    int* p2 = &y;
    cout<<"Enter first Number : ";
    cin>>*p1;
    cout<<"Enter second Number : ";
    cin>>*p2;
    cout<<*p1 + *p2<<endl;
    cout<<p1<<endl;
    cout<<p2;
    
}