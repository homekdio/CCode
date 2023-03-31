#include <bits/stdc++.h>
using namespace std;
int n,r;
int arr[30];
void dfs(int x,int start)
{
    if((x-1)+n-start+1<r)
        return ;
    if(x>r)
    {
        for(int i=1;i<=r;i++)
        printf("%3d",arr[i]);
        cout<<endl;
        return ;
    }
    for(int i=start;i<=n;i++)
    {
            arr[x]=i;
            dfs(x+1,i+1);
            arr[x]=0;
    }
}
int main()
{
    cin>>n>>r;
    dfs(1,1);
    return 0;
}