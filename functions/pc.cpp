#include<iostream>
using namespace std;

int fact(int x){
    int f = 1;
    for(int i = 1; i<=x; i++){
        f *= i;
    }
    return f;
}
int comb(int n , int r){
    int ncr = fact(n)/(fact(r)*fact(n-r));
    return ncr;
}
int per(int n , int r){
    int npr = fact(n)/(fact(n-r));
    return npr;
}

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int r;
    cout<<"Enter r : ";
    cin>>r;
    int ncr = comb(n,r);
    int npr = per(n,r);   
    cout<<ncr<<endl<<npr;

}