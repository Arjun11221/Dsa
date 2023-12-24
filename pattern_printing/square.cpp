#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the No. of Rows : ";
    cin>>n;
    int m;
    cout<<"Enter the No. of Columns : ";
    cin>>m;
    for(int i = 1; i<=n ; i++){
        for(int i=1; i<=m ; i++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

}