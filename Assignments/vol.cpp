#include <iostream>
using namespace std;
int main()
{
    float r, h;
    cout << "Enter the radius : ";
    cin >> r;
    cout << "Enter the height : ";
    cin >> h;
    float vol = 3.14 * r * r * h;
    cout<<"The volume of cylinder is "<<vol;
}