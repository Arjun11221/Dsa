#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    int a = 1, b = 1, sum = 0;
    for(int i = 1; i <=n; i++){     // 1 1 2 3 5 8 13 21 34
        cout<<a<<" ";
        sum = a + b;
        a = b;
        b = sum;
        

    }
    

}