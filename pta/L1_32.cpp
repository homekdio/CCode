#include <bits/stdc++.h>
using namespace std;
int isprime(int n)
{
    if(n==1||n==4) return 0;
    if(n==2||n==3) return 1;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int n;
    while(cin>>n)
    {
        if(isprime(n)==1) cout<<"YES"<<endl;
        else  cout<<"NO"<<endl;
    }
    return 0;
}