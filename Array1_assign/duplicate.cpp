#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int arr[n];
    bool flag = false;
    for(int i = 0; i<=n-1; i++){
        cin>>arr[i];
    }
    for(int i = 0; i<=n-1; i++){
        for(int j = i+1; j<=n-1; j++){
            if(arr[i]==arr[j]) {
                flag = true;
                break;
            }
        }
        if(flag== true) break;
    }
    if(flag==true) cout<<"Contains Duplicate";
    else cout<<"No Duplicate";
}