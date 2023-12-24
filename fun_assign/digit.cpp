#include<iostream>
using namespace std;
int digit(int n){
        int count = 0;
    while (n!=0)
    {
        n/=10;
        count++;
    }
    cout<<count*count;
}
int main(){
    int n;
    cout<<"Enter Number : ";
    cin>>n;
    digit(n);
}