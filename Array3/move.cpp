#include<iostream>
#include<vector>
using namespace std;
void change(vector<int>& v){
    int n = v.size();
    int i = 0;
    int j = n-1;

    while(i<j){
        if(v[j]<0) j--;  
        if(v[i]>0) i++;
        // if(i>j) break;
        if(v[i]<0&&v[j]>0){ 
            int temp = v[i];  
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }

    }
}

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(-4);
    v.push_back(2);
    v.push_back(1);
    v.push_back(9);
    v.push_back(-11);
    v.push_back(-1);
    v.push_back(2);
    v.push_back(1);
    v.push_back(-11);

    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    change(v);

    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}