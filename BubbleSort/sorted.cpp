#include<iostream>
using namespace std;
int main(){
    int arr[] = {5,5,5,5,3};
    int n = 5;

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    bool flag = true;    //  sorted
    for(int i = 0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            flag = false;
                break;
            }
            else{
                flag = true;
        }   
    }
    cout<<endl;
    if(flag==false) cout<<"Array isn't sorted";
    else cout<<"Array is sorted";   

}