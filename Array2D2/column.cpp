#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter Row : ";
    cin>>m;

    int n;
    cout<<"Enter Column : ";
    cin>>n;

    int arr[m][n];
    cout<<"Enter Elements of the Matrix "<<endl;

    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl; 

    for(int j = 0; j<n; j++){
        if(j%2==0){
            for(int i = 0; i<m; i++){
            cout<<arr[i][j]<<" ";
        }
        }
        else{
            for(int i = m-1; i>=0; i--){
                cout<<arr[i][j]<<" ";
            }
        }
    }


    
}
