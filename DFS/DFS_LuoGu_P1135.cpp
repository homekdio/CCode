#include <bits/stdc++.h>
using namespace std;
int n,a,b,mint=1e6,res=0;
int arr[300];
bool st[300];
void dfs(int x)
{
    if(res>mint)
        return ;
    if(x==b)
    {
        mint=min(res,mint);
        return ;
    }
    else if(x<0||x>n)
        return ;
    if(x+arr[x]<=b&&!st[x+arr[x]])
    {
        st[x+arr[x]]=true;
        res+=1;
        dfs(x+arr[x]);
        res-=1;
        st[x+arr[x]]=false;
    }
    if(x-arr[x]>0&&!st[x-arr[x]])
    {
        st[x-arr[x]]=true;
        res+=1;
        dfs(x-arr[x]);
        res-=1;
        st[x-arr[x]]=false;
    }
}
int main()
{
    cin>>n>>a>>b;
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    dfs(a);
    if(mint==1e6)
    {
        cout<<"-1";
        return 0;
    }
    cout<<mint;
    return 0;
}