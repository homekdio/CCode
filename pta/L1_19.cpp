#include <bits/stdc++.h>
using namespace std;
int main()
{
    int  a[3];
    char b[3];
    for(int i=0;i<3;i++) cin>>a[i];
    getchar();
    for(int j=0;j<3;j++) cin>>b[j];
    sort(a,a+3);
    for(int i=0;i<3;i++) 
    {
        cout<<a[b[i]-65];
        if(i!=2) cout<<" ";
    }
    return 0;
}