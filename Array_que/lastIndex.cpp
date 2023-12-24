#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(4);
    v.push_back(2);
    v.push_back(10);
    v.push_back(1);
    v.push_back(42);

    int n ;
    n = v.size();
    int x = 2;
    int idx = -1;
    // for(int i = 0; i<=n ; i++){
    //     if(v[i] == x) idx = i;   
    // }

    for(int i = n-1; i>=0; i--){
        if(v[i]==x){
            idx = i;
            break;
        }
    }
    cout<<idx;



}