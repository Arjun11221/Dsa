#include<iostream>
using namespace std;

int main(){
    string s ;
    getline(cin,s);
    int n = s.length();
    int i = n/2;
    int j = n-1;
    while(i<j){
        swap(s[i],s[j]);
        i++;
        j--; 
    }
    cout<<s;
}