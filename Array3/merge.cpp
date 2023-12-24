#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& v){
    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
         
    }
}

vector<int> merge(vector<int>& v1 , vector<int>& v2){
    int m = v2.size();
    int n = v1.size();
    vector<int> v3(m+n);
    int i = 0;
    int j = 0;
    int k = 0;
    while(j<m && i<n){
        if(v1[i]<v2[j]){
            v3[k] = v1[i];
            k++;
            i++;
        }
        else{
            v3[k] = v2[j];
            k++;
            j++;
        }

    }
    if(i==n){
        while(j<m){
            v3[k] = v2[j];
            j++;
            k++;
        }
    }
     if(j==m){
        while(i<n){
            v3[k] = v1[i];
            i++;
            k++;
        }
    }
    return v3;

}

int main(){
    vector<int> v1;
    int m = v1.size();
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(5);
    v1.push_back(8);

    vector<int>v2;
    int n = v2.size();
    v1.push_back(2);
    v1.push_back(4);
    v1.push_back(7);
    v1.push_back(10);
    v1.push_back(11);
    v1.push_back(12);

    display(v1);
    cout<<endl;
    display(v2);

    vector<int> v = merge(v1 , v2);
    display(v);
        
}