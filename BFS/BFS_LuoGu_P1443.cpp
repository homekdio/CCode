#include <bits/stdc++.h>
using namespace std;
const int N=410;
int dis[N][N];
int n,m,x,y;
typedef pair<int,int> PII;
queue<PII> q;
int dx[]={1,2,2,1,-1,-2,-2,-1};
int dy[]={-2,-1,1,2,2,1,-1,-2};
void bfs(int x,int y)
{
    memset(dis,-1,sizeof(dis));
    q.push({x,y});
    dis[x][y]=0;
    while(!q.empty())
    {
        auto t=q.front();
        q.pop();
        for(int i=0;i<8;i++)
        {
            int a=t.first+dx[i];
            int b=t.second+dy[i];
            if(a>n||a<1||b>m||b<1) continue;
            if(dis[a][b]>-1) continue;
            dis[a][b]=dis[t.first][t.second]+1;
            q.push({a,b});
        }
    }

}
int main()
{
    cin>>n>>m>>x>>y;
    bfs(x,y);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cout<<dis[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}