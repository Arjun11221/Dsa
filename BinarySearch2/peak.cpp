#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,3,5,4,3,2,0};
    int n = 7;
    int lo = 1;
    int hi = n-2;
    int idx = -1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]>arr[mid+1]&&arr[mid]<arr[mid-1]){
            idx = mid;
            cout<<idx;
            break;
        }
        else if(arr[mid]>arr[mid+1]) hi = mid - 1;
        else lo = mid + 1;
    }
}