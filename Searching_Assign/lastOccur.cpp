#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,2,2,3,3,4,4,4,4,5,5};
    int n = 12;
    int x = 2;
    int ans = -1;
    int lo = 0;
    int hi = n-1;
    bool flag = false;
    while(lo<=hi){
        int mid = (lo+hi)/2;
        if(arr[mid]==x){
            if(mid == 0){
                flag = true;
                cout<<mid;
                break;
            }
            else if(arr[mid+1]!=x){
                flag = true;
                cout<<mid;
                break;
            }
            else lo = mid + 1;
        }
        else if(arr[mid]>x) hi = mid - 1;
        else lo = mid + 1;
    }
    if(flag==false) cout<<ans;
}