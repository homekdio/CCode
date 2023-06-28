#include <bits/stdc++.h>
using namespace std;
double digui(double y)
{
    if(y==1) return y;
    else return y*digui(y-1);
}
int main()
{
    int i=1;
    double sum=0,x,t=1.0;cin>>x;
    while(t>0.00001)
    {
        sum+=t;
        t=pow(x,i)/digui(i);
        i++;
    }
    printf("%.4f",sum);
    return 0;
}