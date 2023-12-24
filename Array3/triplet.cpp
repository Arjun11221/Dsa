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

    int x;
    cout<<"Enter Target : ";
    cin>>x;

    // int count = 0;

    for(int i = 0; i<n; i++){
        for(int j = i+i; j<n; j++){
            for(int k = j+1; k<n; k++){
                if(v[i]+v[j]+v[k]==x){
                    
                    cout<<"("<<i<<","<<j<<","<<k<<")";
                }
            }
        }
    }
    // cout<<count;
    
    
}