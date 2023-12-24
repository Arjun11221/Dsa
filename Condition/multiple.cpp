#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter 1st Number : ";
    cin >> a;
    cout << "Enter 2nd Number : ";
    cin >> b;
    cout << "Enter 3rd Number : ";
    cin >> c;

    if (a > b)
    {
        if (a > c)
        {
            cout << "The Greatest Number is " << a;
        }
        else
        {
            cout << "The Greatest Number is " << c;
        }
    }
    else
    {
        if (b > c)
        {
            cout << "The Greatest Number is " << b;
        }
        else
        {
            cout << "The Greatest Number is " << c;
        }
    }
}