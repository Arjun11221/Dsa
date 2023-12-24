#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Num : ";
    cin >> n;
    int r = 0;
    int x = n;
    while(n>0){
        int ld = n%10;
        r = r *10;
        r += ld;
        n /= 10;

    }
    cout<<r+x;
    

}