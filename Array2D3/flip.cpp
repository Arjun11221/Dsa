#include<iostream>
#include<vector>
using namespace std;

int main(){
    int m;
    cout<<"Enter Rows : ";
    cin>>m;

    int n;
    cout<<"Enter Columns : ";
    cin>>n;

    vector<vector<int>> v;
    cout<<"Enter Array's Elements in Binary "<<endl;
    int p = v.size();
    int q = v[0].size();
    
    for(int i = 0; i<p; i++){
        for(int j = 0; j<q; j++){
            cin>>v[i][j];
        }
    }

    for(int i = 0; i<p; i++){
        if(v[i][0]==0){
            for(int j = 0; j<q; j++){
                if(v[i][j]==0) v[i][j] = 1;
                else v[i][j] = 0;
            }
        }
    }

    for(int j = 0; j<q; j++){
        int noo = 0;
        int noz = 0;
        for(int i = 0; i<p; i++){
            if(v[i][j]==0) noz++;
            else noo++;
        }
        if(noz>noo){
            for(int i = 0; i<p; i++){
                if(v[i][j]==0) v[i][j] = 1;
                else v[i][j] = 0;
            }
        }
    }
    int sum = 0;
    for(int i = 0; i<p; i++){
        int x = 1;
        for(int j = q; j>=0; j--){
            sum += v[i][j]*x;
            x *= 2;
        }
    }

    cout<<sum;
}