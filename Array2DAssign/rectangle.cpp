#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter Rows : ";
    cin>>m;

    int n;
    cout<<"Enter Columns : ";
    cin>>n;

    int a[m][n];

    cout<<"Enter the Matrix Elements "<<endl;

    for(int i = 0; i<m; i++){
        for(int  j = 0; j<n; j++){
            cin>>a[i][j];
        }
    }
    cout<<endl;

    int x1,y1,x2,y2;
    cout<<"Enter First Coordinate : "<<endl;
    cin>>x1>>y1;
    cout<<"Enter Second Coordinate : "<<endl;
    cin>>x2>>y2;

    int sum = 0;

    for(int i = x1; i<x2; i++){
        for(int  j = y1; j<y2; j++){
            sum += a[i][j];
        }
        cout<<endl;
    }

    cout<<sum;

}