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

    for(int i = 0; i<n; i++){
        bool flag = true;
        for(int j = n-1; j>0; j--){
            if(arr[j]>arr[j-1]){
                swap(arr[j],arr[j-1]);
                flag = false;
            }
        }
        if(flag == true) break;
    }
    
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}