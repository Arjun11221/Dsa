#include<iostream>
using namespace std;
float area(float r ){
    float area = 3.14 * r * r;
    return area;
}

int main(){
    float r;
    cout<<"Enter radius : ";
    cin>>r;
    cout<<area(r); 
}