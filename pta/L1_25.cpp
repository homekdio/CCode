#include <bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
    if(n==1||n==4)
        return 0;
    if(n==2||n==3)
        return 1;
    if(n%6!=1&&n%6!=5)
        return 0;
    for(int i=5;i<=sqrt(n);i+=6)
    {
        if(n%i==0||n%(i+2)==0)
        return 0;
    }
    return 1;
}
int main()
{
    int a[10],i=0,flag=0;
    int n;cin>>n;
    for(n;n>1;n--)
    {
        if(i>9)
        {
            flag=1;
            break;
        }
        if(isprime(n))
        {
            a[i++]=n;
        }
    }
    if(flag) 
    {
        int sum=0;
        for(int i=0;i<10;i++)
        {
            sum+=a[i];
            cout<<a[i]<<" ";
        }
        cout<<endl<<"sum = "<<sum;
    }
    else
        {
            for(int j=0;j<i;j++)
            {
                cout<<a[j]<<" ";
            }
        }
    return 0;
}