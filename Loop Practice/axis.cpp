#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "Enter x coordinate : ";
    cin >> x;
    cout << "Enter y coordinate : ";
    cin >> y;

    if (x == 0 && y != 0)
        cout << "Point lies at y-axis";
    else if (y == 0 && x != 0)
        cout << "Point lies at x-axis";
    else if (x > 0 && y > 0)
        cout << "Point lies in the first Quadrants";
    else if (x < 0 && y > 0)
        cout << "Point lies in the second Quadrants";
    else if (x < 0 && y < 0)
        cout << "Point lies in the third Quadrants";
    else if (x > 0 && y < 0)
        cout << "Point lies in the fourth Quadrants";
    else
        cout << "Points lies at Origin";
}