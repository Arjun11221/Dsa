#include<iostream>
using namespace std;
int main(){
    string str ;
    cout<<"Enter a String : ";
    cin>>str;
    int n = str.length();
     
    string s = str.substr(n/2);
    cout<<s;
} 
 