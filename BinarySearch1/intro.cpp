#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,3,5,6,8,9};
    int n = 6;
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    int target = 3;
    int lo = 0;
    int hi = n-1;
    while (lo<=hi){
        int mid = (lo+hi)/2;
        if(arr[mid]==target) return mid;
        else if(arr[mid]<target) lo = mid + 1;
        else hi = mid - 1;
    }

}