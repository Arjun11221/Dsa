#include<iostream>
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
    int x = 1;
    for(int i = 0; i<=n-1; i++){
        if(arr[i]<=0) continue;
        if(x != arr[i]){
            cout<<"Missing Element is " <<x;
            flag = true;
            break;
        }
        else x++;
    }
    if(flag == false) cout<<"There is no Missing Element ";
}