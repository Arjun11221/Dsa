#include<iostream>
using namespace std;
int main(){

    int arr[] = {1,3,5,6,8,9};
    int n = 6;
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int x = 4;
    int lo = 0;
    int hi = n-1;
    bool flag = false;

    while(lo<=hi){
        int mid = (lo+hi)/2;
        if(arr[mid]==x){
            cout<<arr[mid-1];
            break;
            flag = true;
        }
        else if(arr[mid]<x) lo = mid+1;
        else hi = mid - 1; 
    }
    if(flag==false) cout<<arr[hi];

}