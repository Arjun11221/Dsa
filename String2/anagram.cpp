#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s = "arjunsoftwaredev";
    string t = "softevdajrnuware";
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    cout<<s<<endl;
    cout<<t<<endl;
    // if(s==t) cout<<true;
    // else cout<<false;
    
    (s==t) ? cout<<true : cout<<false;
}