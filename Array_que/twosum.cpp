#include<iostream>
#include<vector>
using namespace std;

int main(){
    int x;
    cout<<"Enter the Target : ";
    cin>>x;

    vector<int> v;

    int n;
    cout<<"Enter the Array's Size : ";
    cin>>n;

    cout<<"Enter Array's Elements : ";

    for(int i = 0; i<=n-1; i++){
        int p;
        cin>>p;
        v.push_back(p);
    }

    for(int i = 0; i<=v.size()-1; i++){
        for(int j = i+1; j<v.size(); j++){
            if(v[i]+v[j]==x) {
                cout<<"("<<i<<","<<j<<")"<<endl;
            } 
        }

    }
}
