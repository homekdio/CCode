#include <bits/stdc++.h>
using namespace std;
const int N=40;
int m,n,m1,m2;
typedef pair<int,int> PII;
queue<PII> p;
int st[N][N],dis[N][N];
int start_x,start_y;
int dx[]={1,2,2,1,-1,-2,-2,-1};
int dy[]={-2,-1,1,2,2,1,-1,-2};
int bfs(int x,int y)
{
    memset(st,-1,sizeof(st));
    p.push({x,y});
    st[x][y]=0;
        while(!p.empty())
        {
            auto t=p.front();
            p.pop();
            for(int i=0;i<8;i++)
            {
                int a=t.first+dx[i];
                int b=t.second+dy[i];
                if(dis[a][b]==1&&st[a][b]==-1)
                {
                    p.push({a,b});
                    st[a][b]=st[t.first][t.second]+1;
                }
                else if(dis[a][b]==4)
                    return st[t.first][t.second]+1;
                else continue;
            }
        }
}
int main()
{
    cin>>m>>n>>m1>>m2;
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
        {
            cin>>dis[i][j];
            if(dis[i][j]==3)
            {
                start_x=i;
                start_y=j;
            }
        }
    if(dis[start_x][start_y]==4)
    {
        cout<<0;
    }
    else
        cout<<bfs(start_x,start_y);
    return 0;
}