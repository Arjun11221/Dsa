#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The arr : ";
    cin>>n;
    int arr[n];
    int sum = 0;
    for(int i = 0; i<=n-1; i++){
        cin>>arr[i];
    } 

    for(int i = 0; i<=n-1; i++){
        sum = sum + arr[i];

    }
    cout<<sum;

}