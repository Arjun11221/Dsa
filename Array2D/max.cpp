#include<iostream>
#include<climits>
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

    int max = INT_MIN;
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            if(max<arr[i][j]) max = arr[i][j];
        }
    }
    cout<<"Max Element is : "<<max;
}