#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,4,5,3,7,5,2,8,9,6};
    int n = 10;
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i = 0; i<((n/2)+1); i++){
        for(int j = 0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    for(int i = n/2; i<n; i++){
        cout<<arr[i]<<" ";
    }
}