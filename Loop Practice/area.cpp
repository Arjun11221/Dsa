#include <iostream>
using namespace std;
int main()
{
    int r;
    cout << "Enter Radius : ";
    cin >> r;

    float c = 2*3.14*r;
    float a = 3.14*r*r;
    if(c>a) cout<<"Circumference is larger";
    else if(a>c) cout<<"Area is larger";
    else cout<<"Both are Equal";

}