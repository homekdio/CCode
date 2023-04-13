#include <bits/stdc++.h>
using namespace std;
int m,n,t;
int start_x,start_y,end_x,end_y;
int g[7][7],res=0;
bool st[7][7],stop[7][7];
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};
void dfs(int x,int y)
{
    if(x==end_x&&y==end_y)
    {
        res++;
        return ;
    }
    for(int i=0;i<4;i++)
    {
        int a=x+dx[i];
        int b=y+dy[i];
        if(a>m||b>n||a<1||b<1)
            continue;
        if(st[a][b])
            continue;
        st[a][b]=true;
        dfs(a,b);
        st[a][b]=false;
    }
}
int main()
{
    cin>>m>>n>>t;
    cin>>start_x>>start_y>>end_x>>end_y;
    while(t--)
    {
        int t1,t2;
        cin>>t1>>t2;
        st[t1][t2]=true;
    }
    dfs(start_x,start_y);
    cout<<res;
    return 0;
}