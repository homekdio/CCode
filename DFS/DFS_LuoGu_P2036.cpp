#include <bits/stdc++.h>
using namespace std;
struct {
    int s,b;
}arr[20];
//mtr arr[20];
int n,res=1e9;
bool st[20];
void dfs(int now)
{
    if(now>n)
    {
        bool has_tl=false;
        int sum_1=1,sum_2=0;
        for(int i=1;i<=n;i++)
        {
            if(st[i]==1)
            {
                has_tl=true;
                sum_1*=arr[i].s;
                sum_2+=arr[i].b;
            }
        }
        if(has_tl==true)
        res=min(res,abs(sum_1-sum_2));
        return ;
    }
    st[now]=1;
    dfs(now+1);
    st[now]=0;  

    st[now]=0;
    dfs(now+1);
    st[now]=0; 
}
int main()
{
    cin>>n;
    int nt=n;
    int i=1;
    while(nt--)
    {
        cin>>arr[i].s>>arr[i].b;
        i++;
    }
    dfs(1);
    cout<<res;
    return  0;
}