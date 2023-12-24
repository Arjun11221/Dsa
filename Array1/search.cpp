#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The arr : ";
    cin>>n;
    int arr[n];
    for(int i = 0; i<=n-1; i++){
        cin>>arr[i];
    } 
    int x;
    cout<<"Enter the Search Element : ";
    cin>>x;

    bool flag = false;

    for(int i = 0; i<=n-1; i++){
        if(arr[i]==x) flag = true;
    }
    if(flag==true) cout<<"Element is Present";
    else cout<<"Element isn't Present";

}
