#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Array Size : ";
    cin>>n;

    cout<<"Enter Array's Element : ";
    int arr[n];

    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    for(int i = 0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
            i++;
        }
    }
    bool flag = true;
    for(int i = 0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            flag = false;
            break;
        }
    }

    if(flag==true) cout<<"Array is Almost Sorted";
    else cout<<"Array isn't Almost Sorted";
}