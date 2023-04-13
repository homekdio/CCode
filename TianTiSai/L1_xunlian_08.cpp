#include <bits/stdc++.h>
using namespace std;
double funpi(double e)
{
    int cnt=0,n,cur=1;
    double sum=1;
    while(1.0/n>e)
    {
        cnt++;
        n=cnt*2+1;
        cur=-cur;
        sum+=cur*1.0/n;
    }
    return sum;
}
int main()
{
    double e;cin>>e;
    double res=funpi(e);
    printf("pi = %f",4.0*res);
    return 0;
}