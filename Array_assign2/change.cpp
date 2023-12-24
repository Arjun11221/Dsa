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
        if(i%2!=0) v[i] = v[i]*2;
        else v[i] = v[i] + 10; 
    }
    display(v);

}
