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
    bool flag = true;  // true means palindrome
    for(int i = 0 , j = n-1; i<j; i++,j--){
        if(v[i]!=v[j]){
            flag = false;  // false means not palindrome
            break;
        }
    }
    if(flag == true) cout<<"Palindrome";
    else cout<<"Not Palindrome";
}
