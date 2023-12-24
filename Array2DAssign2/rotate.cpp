#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter Row : ";
    cin>>m;

    int n;
    cout<<"Enter Column : ";
    cin>>n;

    int a[m][n];
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            cin>>a[i][j];
        }
    }
    cout<<endl;

    for(int i = 0; i<m; i++){
        for(int j = 0; j<i; j++){
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }

    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            cout<<a[i][j]<<" "; 
        }
        cout<<endl;
    }
    cout<<endl;

    for(int c = 0; c<m; c++){
        int i = 0; 
        int j = m-1;
        while(i<j){
            swap(a[i][c],a[j][c]);
            i++;
            j--;
        }

    }

    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            cout<<a[i][j]<<" "; 
        }
        cout<<endl;
    }


}