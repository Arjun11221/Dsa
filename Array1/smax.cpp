#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Array : ";
    cin>>n;
    int arr[n];
    for(int i = 0; i<=n-1; i++){
        cin>>arr[i];
    }
    // int max = arr[0];
    int max = INT_MIN;
    for(int i = 0; i<=n-1; i++){
        if(max<arr[i]) max = arr[i];
    }
    int smax = INT_MIN;
    for(int i = 0; i<=n-1; i++){
        if((arr[i]!=max) && (smax<arr[i])) smax = arr[i];
    }
    cout<<"The Largest Number is "<<max<<endl;
    cout<<"The Second Largest Number is "<<smax;

}
