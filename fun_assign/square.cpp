#include<iostream>
using namespace std;
int square(int n ){
    for(int i = 1; i<=n; i++){
        cout<<i*i<<endl;
    }
    // return num;
}

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    square(n); 
}