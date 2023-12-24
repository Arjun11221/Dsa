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
    int b[m][n];

    cout<<"Enter 1st Matrix Elements "<<endl;

    for(int i = 0; i<m; i++){
        for(int  j = 0; j<n; j++){
            cin>>a[i][j];
        }
    }
    cout<<"Enter 2nd Matrix Elements "<<endl;

    for(int i = 0; i<m; i++){
        for(int  j = 0; j<n; j++){
            cin>>b[i][j];
        }
    }
    cout<<endl;

    for(int i = 0; i<m; i++){
        for(int  j = 0; j<n; j++){
            a[i][j] = a[i][j]+b[i][j];
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

}