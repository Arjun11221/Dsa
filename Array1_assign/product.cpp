#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int arr[n];
    int pro = 1;
    for(int i = 0; i<=n-1; i++){
        cin>>arr[i];
    }
    for(int i = 0; i<=n-1; i++){
        pro *= arr[i];
    }
    cout<<"Product is "<<pro;
}