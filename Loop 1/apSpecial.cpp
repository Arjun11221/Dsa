#include <iostream>
using namespace std;
int main()
{

    //  100 97 94 .... 7 4 1 --> 34 terms
    // int a = 100;
    // for(int i = 1; i<=34; i++){
    //     cout<<a<<endl;
    //     a = a - 3;
    // }

    // int a = 100;
    // for(;a>0;){
    //     cout<<a<<endl;
    //     a = a - 3;

    // }

    for (int a = 100; a > 0; a -= 3)
    {
        cout<<a<<endl;
    }
}