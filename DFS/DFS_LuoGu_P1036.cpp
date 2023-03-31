#include <bits/stdc++.h>
using namespace std;
int n,k,res=0;
int arr[21],st[21];
bool is_prime(int sum)
{
    if(sum<2) return false;
    for(int i=2;i<=sqrt(sum);i++)
    {
        if(sum%i==0)
        return false;
    }
    return true;
}
void dfs(int x,int start)
{
    if(x>k)
    {
        int sum=0;
        for(int i=1;i<=k;i++)
        sum+=st[i];
        if(is_prime(sum))
        {
            res++;
        }
        return ;
    }
    for(int i=start;i<=n;i++)
    {   
        st[x]=arr[i];
        dfs(x+1,i+1);
        st[x]=0;
    }
}
int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    cin>>arr[i];
    dfs(1,1);
    cout<<res;
    return 0;
}