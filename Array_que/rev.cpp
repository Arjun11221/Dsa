#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &v)
{
    for (int i = 0; i <= v.size() - 1; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

void reversePart(int i , int j , vector<int>& v){
    while (i<=j)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    
}

int main()
{
    vector<int> v;

    int n;
    cout << "Enter the Array's Size : ";
    cin >> n;

    cout << "Enter Array's Elements : ";

    for (int i = 0; i <= n - 1; i++)
    {
        int p;
        cin >> p;
        v.push_back(p);
    }

    display(v);
    // int i = 0;
    // int j = v.size() - 1;

    // while (i <= j)
    // {
    //     int temp = v[i];
    //     v[i] = v[j];
    //     v[j] = temp;
    //     i++;
    //     j--;
    // }

    // for(int i = 0 , j = v.size()-1; i<=j; i++ , j--){
    //     int temp = v[i];
    //         v[i] = v[j];
    //         v[j] = temp;
    //         i++;
    //         j--;
    // }
    reversePart(0,3,v);

    display(v);
}
