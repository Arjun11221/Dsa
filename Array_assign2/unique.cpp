#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void display(vector<int>& v){
    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> v;
    int n;
    cout<<"Enter Array's Size : ";
    cin>>n;

    cout<<"Enter Array's Elements : ";
    for(int i = 0; i<n; i++){
        int p ;
        cin>>p;
        v.push_back(p);
    }
    display(v);
    
    for(int i = 0; i<n; i++){
        bool flag = true;   // unique
        for(int j = 0; j<n; j++){
            if(i==j) continue;
            if(v[i]==v[j]){
                flag = false;     // not unique
                break;
            }
        }
        
        if(flag == true) cout<<v[i]<<endl;
    }

}
