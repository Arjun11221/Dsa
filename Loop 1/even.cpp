#include <iostream>
using namespace std;
int main()
{
    int n = 100;

    // for(int i = 2; i<=n; i++){
    //     if(i%2==0){
    //         cout<<i<<endl;
    //     }
    // }

    for (int i = 2; i <= n; i = i + 2)
    {

        cout << i << endl;
    }
}