#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "Enter Matrix Row : ";
    cin >> m;
    int n;
    cout << "Enter Matrix Column : ";
    cin >> n;

    int a[m][n];
    cout << "Enter Matrix Elements " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    int minr = 0;
    int maxr = m-1;
    int minc = 0;
    int maxc = n-1;

    while(minr<=maxr && minc<=maxc){

        for(int j = minc; j<=maxc; j++){
            cout<<a[minr][j]<<" ";
        }
        minr++;
        if(minr>maxr || minc>maxc) break;

        for(int i = minr; i<=maxr; i++){
            cout<<a[i][maxc]<<" ";
        }
        maxc--;
        if(minr>maxr || minc>maxc) break;

        for(int j = maxc; j>=minc; j--){
            cout<<a[maxr][j]<<" ";
        }
        maxr--;
        if(minr>maxr || minc>maxc) break;

        for(int i = maxr; i>=minr; i--){
            cout<<a[i][minc]<<" ";
        }
        minc++;

    }
}