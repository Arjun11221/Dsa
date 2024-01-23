#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 4, 5, 6};
    int n = 7;
    int lo = 0;
    int hi = n - 1;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (arr[mid] = mid + 1)
            lo = mid + 1;
        if (arr[mid] = mid)
        {
            if (arr[mid] = arr[mid - 1])
            {
                cout << arr[mid];
                break;
            }
            else
                hi = mid - 1;
        }
    }
}