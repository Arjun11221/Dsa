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

    int a[m][n];

    cout<<"Enter the Matrix Elements "<<endl;

    for(int i = 0; i<m; i++){
        for(int  j = 0; j<n; j++){
            cin>>a[i][j];
        }
    }
    cout<<endl;

    int maxSum = INT_MIN;
    int maxRow = -1;

    for(int i = 0; i<m; i++){
        int sum = 0;
        for(int j = 0; j<n; j++){
            sum += a[i][j];
        }
        if(sum>maxSum){
            maxSum = sum;
            maxRow = i;
        }
    }
    cout<<maxSum<<" "<<maxRow;

}