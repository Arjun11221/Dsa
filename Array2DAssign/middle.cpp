#include<iostream>
#include<climits>
using namespace std;
int main(){
    int m;
    cout<<"Enter Rows/Columns : ";
    cin>>m;

    int a[m][m];

    cout<<"Enter the Matrix Elements "<<endl;

    for(int i = 0; i<m; i++){
        for(int  j = 0; j<m; j++){
            cin>>a[i][j];
        }
    }
    cout<<endl;

    for(int i = 0; i<m; i++){
        for(int j =0; j<m; j++){
            if(i==m/2 or j==m/2){
                cout<<a[i][j]<<" ";
            }
            else cout<<" "<<" ";

        }
        cout<<endl;
    }

}