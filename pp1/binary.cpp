#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter No. of Rows : ";
    cin>>n;

    // 1st way...

    // int a;
    // for(int i = 1; i<=n; i++){
    //     if(i%2==0) a = 0;
    //     else a = 1;
    //     for(int j=1; j<=i; j++){
    //         cout<<a<<" ";
    //         if(a==0) a=1;
    //         else a = 0;
    //     }
    //     cout<<endl;
    // }

    // 2nd way...

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            if((i+j)%2==0) cout<<1<<" ";
            else cout<<0<<" ";
        }
        cout<<endl;
    }
}