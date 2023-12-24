#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    for(int i = n; i<=n*10; i=i+n){     // good way to do....
        cout<<i<<endl;
    }

    // for(int i = n; i<=n*10; i++){       // not good way to do..
    //     if(i%n==0){
    //         cout<<i<<endl;
    //     }
    // }
}