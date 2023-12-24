#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cout<<"Enter The Size Of Array : ";
    cin>>n;

    cout<<"Enter The Array : ";
    for(int i = 0; i<n; i++){
        int p;
        cin>>p;
        v.push_back(p);
    }


    for(int i = 0; i<n; i++){
        int j = 0;
        for( ;j<n; j++){
            if(v[i]==v[j]&& i!=j){
                break;
            } 
        }
        if(j==n) {cout<<v[i]<<endl;
        break;}
    }


    
    
}