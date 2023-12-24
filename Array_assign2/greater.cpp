#include<iostream>
#include<vector>
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

    int x;
    cout<<"Enter x : ";
    cin>>x;
    int count = 0;

    for(int i = 0; i<n; i++){
        if(v[i]>x) count++;
    }

    cout<<count<<endl;

}
