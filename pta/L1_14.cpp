#include <bits/stdc++.h>
using namespace std;
int main()
{
   vector<long> a;
    long n;cin>>n;
    if(n==0)
    {
        cout<<n;
        return 0;
    }
    while(n>0)
    {
        a.push_back(n%8);
        n=n/8;
    }
    reverse(a.begin(),a.end());
    n=a.size();
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
    /*int n;cin>>n;
    printf("%o",n);*/
    return 0;
}