#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    cout<<v.capacity()<<endl;
    v.push_back(4);
    cout<<v.capacity()<<endl;
    v.push_back(2);
    cout<<v.capacity()<<endl;
    v.push_back(5);
    cout<<v.capacity()<<endl;
    v.push_back(6);
    cout<<v.capacity()<<endl;
    v.push_back(6);
    cout<<v.capacity()<<endl;

    cout<<"Output : "<<endl;
    v[3] = 10;
    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;
    cout<<v[3];


}