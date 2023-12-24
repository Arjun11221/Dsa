#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter The Character : ";
    cin >> ch;
    int ascii = (int)ch;
    if ((ascii >= 97 && ascii <= 122) || (ascii >= 65 && ascii <= 90))
    {
        cout<<"This is an Alphabet";
    }
    else{
        cout<<"This is not an Alphabet";
    }
}
