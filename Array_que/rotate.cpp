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

    int s;
    cout << "Enter the Array's Size : ";
    cin >> s;

    cout << "Enter Array's Elements : ";

    for (int i = 0; i <= s - 1; i++)
    {
        int p;
        cin >> p;
        v.push_back(p);
    }

    display(v);
    int n = v.size();
    int k = 20;
    if(k>n) k = k % n;
    reversePart(0,n-k-1,v);
    reversePart(n-k,n-1,v);
    reversePart(0,n-1,v);

    display(v);
}
