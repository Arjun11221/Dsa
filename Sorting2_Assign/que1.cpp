#include<iostream>
using namespace std;
int main(){
    int arr[] = {5,0,3,5,4};
    int n = 5;

    // for(int i = 0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    for(int i = 1; i<n; i++){
        int j = i; 
        while(j>=1){
            if(arr[j]>arr[j-1]) break;
            else{
                swap(arr[j],arr[j-1]);
                j--;
            }
        }
    }
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int x = 0;
    for(int i = 0; i<n; i++){
        x *= 10;
        x += arr[i];
    }
    cout<<x<<endl;

    for(int i = n-1; i>=1; i--){
        if(arr[i]!=arr[i-1]){
            swap(arr[i],arr[i-1]);
            break;
        }
    }
    // for(int i = 0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    int y = 0; 
    for(int i = 0; i<n; i++){
        y *= 10;
        y += arr[i];
    }
    cout<<y<<endl;

    cout<<"The Minimum Sum is : "<<x+y;

}