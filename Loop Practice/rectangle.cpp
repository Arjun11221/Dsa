#include <iostream>
using namespace std;
int main()
{
    int l;
    cout << "Enter length : ";
    cin >> l;
    int b;
    cout << "Enter breath : ";
    cin >> b;

    float c = 2*(l+b);
    float a = l*b;
    if(c>a) cout<<"Circumference is larger";
    else if(a>c) cout<<"Area is larger";
    else cout<<"Both are Equal";

}