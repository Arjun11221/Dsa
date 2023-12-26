#include<iostream>
#include<algorithm>
#include<sstream>
#include<vector>
using namespace std;
int main(){
    string str = "arjun is a science teacher and he is a software developer as well";
    stringstream ss(str);
    string temp;
    vector<string> v;

    while(ss>>temp){
        v.push_back(temp);
    }
    
}