#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter First Student Marks : ";
    cin >> a;
    cout << "Enter Second Student Marks : ";
    cin >> b;
    cout << "Enter Third Student Marks : ";
    cin >> c;

    if(a<=b && a<=c) cout<<a<<" least marks";
    else if(b<=c && b<=a ) cout<<b<<" least marks";
    else cout<<c<<" least markks";

}