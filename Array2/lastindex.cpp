#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(12);
    v.push_back(5);
    v.push_back(1);
    v.push_back(70);
    v.push_back(10);
    v.push_back(16);
    v.push_back(70);
    v.push_back(1);
    int x = 1;
    int idx = 0;
    // for(int i = 0; i<v.size(); i++){
    //     if(v[i]==x) idx = i;
    // }
    for(int i = v.size()-1; i>=0; i--){
        if(v[i]==x) {
            idx = i;
            break;
        }
    }
    cout<<idx;


}