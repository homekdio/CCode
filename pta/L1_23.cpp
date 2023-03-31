#include <bits/stdc++.h>
using namespace std;
int dg(int n)
{
    if(n==1) return 1;
    else   return n*dg(n-1);
}
int main()
{
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        cout<<dg(x)<<endl;
    }
    return 0;
}