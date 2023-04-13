#include <bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
    if(n==1||n==4)
        return false;
    if(n==2||n==3)
        return true;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
int main()
{
    int m;cin>>m;
    int cnt=0;
    while(m--&&cnt<10)
    {
        if(isprime(m))
         {   cnt++;
        printf("%6d",m);
         }
    }
    return 0;
}