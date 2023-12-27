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

    sort(v.begin() , v.end());
    int maxCount = 1;
    int count = 1;

    for(int i = 1; i<v.size(); i++){
        if(v[i]==v[i-1]) count++;
        else count = 1;
        maxCount = max(count,maxCount);
    }
    count = 1;
    for(int i = 1; i<v.size(); i++){
        if(v[i]==v[i-1]) count++;
        else count = 1;
        if(maxCount==count) {
            cout<<v[i]<<" "<<maxCount<<endl;
        }
    }
}