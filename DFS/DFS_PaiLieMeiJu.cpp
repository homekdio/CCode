#include <bits/stdc++.h>
using namespace std;
int arr[11];
bool st[11];
int n;
void dfs(int x)
{
    if(x>n)
    {
        for(int i=1;i<=n;i++)
        printf("%5d",arr[i]);
        cout<<endl;
        return ;
    }
    for(int i=1;i<=n;i++)
    {
        if(st[i]==false)
        {
            st[i]=true;
            arr[x]=i;
            dfs(x+1);
            st[i]=false;
        }
    }
}
int main()
{
    cin>>n;
    dfs(1);
    return 0;
}