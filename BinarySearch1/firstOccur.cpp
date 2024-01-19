#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,3,3,5,5,5,5,8,8,8,9};
    int n = 11;
    int x = 8;

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int lo = 0;
    int hi = n-1;
    bool flag = false;

    while(lo<=hi){
        int mid = (lo+hi)/2;
        if(arr[mid]==x){
            if(arr[mid-1]==x){
                hi = mid -1;
            }
            else {
                flag = true;
                cout<<"The fisrt occurrence index is : "<<mid;
                break;
                
            }
        }
        else if(arr[mid]<x) lo = mid + 1;
        else hi = mid - 1;
    }
    if(flag == false) cout<< -1;

}