#include <bits/stdc++.h>
using namespace std;
const int N=110;
typedef pair<int,int> PII;
int st[N][N];
int n=2;
int x,y;
int dx[]={1,2,2,2,2,1,-1,-2,-2,-2,-2,-1};
int dy[]={-2,-2,-1,1,2,2,2,2,1,-1,-2,-2};
void dfs(int x,int y)
{
    queue <PII> p;
    memset(st,-1,sizeof(st));
    st[x][y]=0;
    p.push({x,y});
    while(!p.empty())
    {
        auto t=p.front();
        if(t.first==1&&t.second==1)
        {
            break;
        }
        p.pop();
        for(int i=0;i<12;i++)
        {
            int a=t.first+dx[i];
            int b=t.second+dy[i];
            if(a<1||a>100||b<1||b>100) continue;
            if(st[a][b]>-1) continue;
            p.push({a,b});
            st[a][b]=st[t.first][t.second]+1;
            if(a==1&&b==1)
            break;
        }
    }
}
int main()
{
    while(n--)
    {
        cin>>x>>y;
        dfs(x,y);
        cout<<st[1][1]<<endl;
    }
    return 0;
}