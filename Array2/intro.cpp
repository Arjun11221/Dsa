#include<iostream>
using namespace std;
void display(int* a){
    // for(int i = 0; i<=4; i++){
    //     cout<<a[i]<<" "<<endl;   
    // }
    cout<<a<<endl;
    cout<<&a[0]<<endl;
}
int main(){
    int arr[5] = {1,2,3,4,5};
    display(arr);
    cout<<arr<<endl;
    cout<<&arr[0]<<endl;
}