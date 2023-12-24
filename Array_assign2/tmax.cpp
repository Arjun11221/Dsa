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

    int mx = INT_MIN;
    int smx = INT_MIN;
    int tmx = INT_MIN;

    for(int i = 0; i<n; i++){
        if(v[i]>mx) mx = v[i];
    }
    for(int i = 0; i<n; i++){
        if(v[i]>smx && v[i]!=mx ) smx = v[i];
    }
    for(int i = 0; i<n; i++){
        if(v[i]>tmx && v[i]!=smx && v[i]!=mx ) tmx = v[i];
    }
    cout<<"Max Value is : "<<mx<<endl;
    cout<<"SecondMax Value is : "<<smx<<endl;
    cout<<"ThirdMax Value is : "<<tmx<<endl;

}
