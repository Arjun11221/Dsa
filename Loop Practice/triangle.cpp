#include <iostream>
using namespace std;
int main()
{
   int a,b,c;
   cout<<"Enter First Side of Triangle : ";
   cin>>a;
   cout<<"Enter Second Side of Triangle : ";
   cin>>b;
   cout<<"Enter Third Side of Triangle : ";
   cin>>c;

   if((a==b)&&(b==c)&&(c==a)) cout<<"Equilateral Triangle";
   else if((a==b)||(b==c)||(c==a)) cout<<"Isoscale Triangle";
   else cout<<"Scalene Trianle";
   

   

}