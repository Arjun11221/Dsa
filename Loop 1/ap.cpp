#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    int a = 100;
    for(int i = 1; i<=n; i++){
        cout<<a<<endl;
        a = a + 3;
    }


}