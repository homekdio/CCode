#include <bits/stdc++.h>
using namespace std;
int m,n,sum=0,k;
double res=0;
void dfs(int x)
{
    if(x>m)
    {
        if(sum==n)
        {
            res++;
        }
        return ;
    }
    for(int i=1;i<=6;i++)
    {
        sum+=i;
        dfs(x+1);
        sum-=i;
    }
}
int main()
{
    cin>>k;
    while(k--)
    {
        cin>>m>>n;
        dfs(1);
        printf("%.2f\n",res/pow(6,m)); 
        res=0;
    }
    return 0;
}