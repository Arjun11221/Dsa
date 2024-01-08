#include<iostream>
using namespace std;
int main(){
    int arr[] = {50,12,34,21,13};
    int n = 5;

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    // Bubble Sort
    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    // Bubble Sort Optimised
    for(int i = 0; i<n-1; i++){
        bool flag = true;    // Array is Sorted
        for(int j = 0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = false;    // Array isn't Sorted
            }
        }
        if(flag==true) {   // swaping didn't happen
            break;
        }
    }
    cout<<endl;
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}