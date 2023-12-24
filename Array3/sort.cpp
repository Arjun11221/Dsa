#include<iostream>
#include<vector>
using namespace std;
void sorting(vector<int>& v){
    int n = v.size();
    int noo = 0;
    int noz = 0;
    for(int i = 0; i<n; i++){
        if(v[i]==0) noo++;
        else noz++;
    }
    for(int i = 0; i<n; i++){
        if(i<noo) v[i] = 0;
        else v[i] = 1;
    }
}

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);

    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sorting(v);
    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}