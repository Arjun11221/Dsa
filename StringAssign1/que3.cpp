#include<iostream>
using namespace std;

int main(){
    string s ;
    getline(cin,s);
    int n = s.length();
    int i = 0;
    int j = n-1;
    bool flag;
    while(i<j){
        if(s[i]!=s[j]) flag = false;
        else flag = true;
        i++;
        j--;
    }

    if(flag==false) cout<<"The Given String is not Palindrome";
    else cout<<"The Given String is Palindrome";


}