#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter a Number : ";
    cin>>n;
    int a = 1;
    int b = 1;
    int sum = 0;
    for(int i = 1; i<=n-2; i++){      // 1 1 2 3 5 8 13 21 34 55
        sum = a+b;
        a = b;
        b = sum;
    }
    cout<<b;
}