#include <iostream>
using namespace std;
int main()
{
    float x1, y1,x2,y2,x3,y3;
    cout << "Enter first coordinate : ";
    cin >> x1>>y1;
    cout << "Enter second coordinate : ";
    cin >> x2>>y2;
    cout << "Enter third coordinate : ";
    cin >> x3>>y3;

    float m1 = (y2-y1)/(x2-x1);
    float m2 = (y3-y2)/(x3-x2);

    if(m1==m2) cout<<"Collinear";
    else cout<<"Non Collinear";




}