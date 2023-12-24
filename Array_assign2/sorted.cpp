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
    bool flag = true;

    for(int i = 0; i<n-1; i++){
        if(v[i]>v[i+1]) {
            flag = false;
            break;
        }
    }
    if(flag == true) cout<<"Array is Sorted";
    else cout<<"Array isn't Sorted";


}
