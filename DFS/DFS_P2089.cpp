#include <bits/stdc++.h>
using namespace std;
int n;
int arr[20],st[59100][20];
int res=0;
void dfs(int x,int sum)
{
    if(sum>n) return ;
    if(x>10)
    {
        if(sum==n)
        {
            res++;
            for(int i=1;i<=10;i++)
                st[res][i]=arr[i];
        }
        return ;
    }
    for(int i=1;i<=3;i++)
    {
        arr[x]=i;
        dfs(x+1,sum+i);
        arr[x]=0;
    }
}
int main()
{
    cin>>n;
    dfs(1,0);
    cout<<res<<endl;
    for(int i=1;i<=res;i++)
    {
        for(int j=1;j<=10;j++)
        {
            cout<<st[i][j]<<" ";
         }
        cout<<endl;
    }
    return 0;
}