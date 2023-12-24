#include<iostream>
#include<cmath>
using namespace std;

void star(int a){
    for(int i = 1; i<=a; i++){
        for(int j = 1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    // star(3);
    // star(4);
    // star(5);
    // cout<<min(3,4);
    cout<<sqrt(2);
}