#include<iostream>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    string str = "arjun is a science teacher";
    stringstream ss(str);
    string temp;

    while(ss>>temp){
        cout<<temp<<endl;
    }

}