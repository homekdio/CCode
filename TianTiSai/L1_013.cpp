#include <bits/stdc++.h>
using namespace std;
int digui(int n)
{
    if(n==1)
        return n;
    else
        return n*digui(n-1);
}
int main()
{
    int n;cin>>n;int sum=0;
    for(int i=1;i<=n;i++)
    sum=sum+digui(i);
    cout<<sum;
    return 0;
}
