#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter the Number betwwen 1 to 7 : ";
    cin >> x;
    switch (x)
    {
    case 1:
        cout << "monday";
        break;
    case 2:
        cout << "tuesday";
        break;
    case 3:
        cout << "wednesday";
        break;
    case 4:
        cout << "thursday";
        break;
    case 5:
        cout << "friday";
        break;
    case 6:
        cout << "saturaday";
        break;
    case 7:
        cout << "sunday";
        break;

    default:
        cout << "Invalid Number";
        break;
    }
}