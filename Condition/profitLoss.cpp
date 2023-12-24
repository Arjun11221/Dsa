#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the Cost Price : ";
    int cp;
    cin >> cp;
    cout << "Enter the Selling Price : ";
    int sp;
    cin >> sp;
    if (sp > cp)
    {
        int profit = sp - cp;
        cout << "profit of " << profit << "rs";
    }
  
  
    else
    {
        int loss = cp - sp;
        cout << "Loss of " << loss << "rs";
    }
}