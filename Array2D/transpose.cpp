#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter Rows : ";
    cin>>m;

    int n;
    cout<<"Enter Columns : ";
    cin>>n;

    int arr[m][n];

    // for input
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;

    // for output
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(int j = 0; j<n; j++){
        for(int i = 0; i<m; i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}