#include<iostream>
using namespace std;
int main(){
    string s = "";
    int n;
    cout<<"Enter the length of String : ";
    cin>>n;

    for(int i = 0; i<n; i++){
        char ch;
        cin>>ch;
        s.push_back(ch);
    }

    cout<<s<<endl;

    for(int i = 0; i<n; i++){  
        if(i%2==0) s[i] = '#';
    }

    cout<<s;

}