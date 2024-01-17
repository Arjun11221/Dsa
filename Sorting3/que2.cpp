#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,4,5,3,7,5,2,8,9,6};
    int n = 10;
    int k = 3;
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i = 0; i<=k; i++){
        int min = arr[i];
        int mindx = i;
        for(int j = i; j<n-1; j++){
            if(arr[i]<min) {
                min = arr[j];
                mindx = j;
            } 
        }
        swap(arr[i],arr[mindx]);
    }

    // for(int i = 0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }
    cout<<arr[k-1];
}