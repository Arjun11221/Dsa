#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Array : ";
    cin>>n;
    int arr[n];
    for(int i = 0; i<=n-1; i++){
        cin>>arr[i];
    }
    int count = 0;
    int x;
    cout<<"Enter x : ";
    cin>>x;
    for(int i = 0; i<=n-1; i++){
        if(arr[i]>x) count++;
    }
    cout<<count;

}
