#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a Number : ";
    cin >> n;
    bool flag = true; // here true means prime
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {

            flag = false;
            break;
        };
        
       
       
    }
    if(n==1) cout<<"1 is neither prime nor composite";
    else if(flag==true) cout<<n<<" is a prime number";
    else cout<<n<<" is a composite number";

}
