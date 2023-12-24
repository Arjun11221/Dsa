#include<iostream>
using namespace std;
int main(){
    // a = b*q + r;
    int a = 26;
    int b = 3;
    int q = a/b;
    int r = a - (b*q);
    cout<<r;
}