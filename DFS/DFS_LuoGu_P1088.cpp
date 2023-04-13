#include <bits/stdc++.h>
using namespace std;
const int N=10000+5;
bool st[N];
int arr[N],s[N];
int n,x,cnt=0;
bool return0=false;
void dfs(int nt)
{
    if(return0)
        return ;
    if(nt>n)
    {
        cnt++;
        if(cnt==x+1)
        { 
            return0=true;
            for(int i=1;i<=n;i++)
                cout<<s[i]<<" ";
        }
        return ;
    }
    for(int i=1;i<=n;i++)
    {
        if(cnt==0)
        {
            i=arr[nt];
        }
        if(!st[i])
        {   
            s[nt]=i;
            st[i]=true;
            dfs(nt+1);
            s[nt]=0;
            st[i]=false;
        }
    }
}
int main()
{
    cin>>n>>x;
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    dfs(1);
    return 0;
}