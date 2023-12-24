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
    int sumEven = 0;
    int sumOdd = 0;
    int diff;
    for(int i = 0; i<n; i++){
        if(i%2==0) sumEven += v[i];
        else sumOdd += v[i];
        diff = sumEven - sumOdd;
    }

    cout<<diff<<" ";


}
