#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;int cnt=0;
    if(n>70)
    cnt=n/70*16;
    
    for(int i=7;i<=n%70;i++)
    {
        if(i%7==0||i%10==7)
        cnt++;
    }
    cout<<cnt;
    return 0;
}