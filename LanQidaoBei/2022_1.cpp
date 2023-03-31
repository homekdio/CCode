#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,n,sum,cir,last,sum_t=0,i;
    cin>>a>>b>>n;
    sum=a*5+b*2;
    cir=n/sum;
    last=n-sum*cir;
    if(last==0)
        cout<<7*cir;
    else
    {
        for(i=1;;i++)
        {
            if(i%7!=6&&i%7!=0)
                sum_t+=a;
            else
                sum_t+=b;
            if(sum_t>=last)
                break;
        }
        cout<<7*cir+i;
    }
    return 0;
}