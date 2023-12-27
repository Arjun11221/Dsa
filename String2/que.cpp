#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string arr[] = {"123","002","00234","0029","003014"};
    int max = stoi(arr[0]);
    for(int i = 1; i<5; i++){
       int x = stoi(arr[i]);
       if(x>max){
        max = x;
       } 
    }
    cout<<max;

}