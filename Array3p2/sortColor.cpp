#include<iostream>
#include<vector>
using namespace std;
void sortColor(vector<int>& v){
    int n = v.size();
    int i = 0;
    int j = 0;
    int k = n-1;
    while(j<k){
        if(v[j]==2){
            int temp = v[j];
            v[i] = v[k];
            v[k] = temp;
            k--;
        }
        else if(v[j]==0){
            int temp = v[j];
            v[j] = v[i];
            v[i] = temp;
            i++;
            j++;
        }
        else j++;
    }
}

int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);

    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    sortColor(v);

    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}