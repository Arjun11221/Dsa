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

    int sum = 0;

    // for output
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            sum += arr[i][j];
        }
       
    }
    cout<<"The Sum of Array's Element is : "<<sum<<endl;
    

}