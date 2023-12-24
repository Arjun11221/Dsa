#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int* ptr = arr;
    cout<<ptr<<endl;  // 0x61fef4
    // cout<<&arr[1]<<endl;
    for(int i = 0; i<=4; i++){
        // cout<<ptr[i]<<endl;
        // cout<<i[ptr]<<endl;
        cout<<*ptr<<" "<<endl;
        ptr++;
    }
    cout<<ptr<<endl;  // 0x61ff08

    ptr = arr;

    cout<<ptr;  // 0x61fef4
}