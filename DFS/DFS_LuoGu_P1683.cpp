#include <bits/stdc++.h>
using namespace std;
bool st[25][25];
char geze[25][25];
int start_x=0,start_y=0;
int w,h,cnt=1;
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
void dfs(int x,int y)
{
    for(int i=0;i<4;i++)
    {
        int a=x+dx[i];
        int b=y+dy[i];
        if(a>h||b>w||a<1||b<1)
            continue;
        if(st[a][b])
            continue;
        if(geze[a][b]!='.')
            continue;
        st[a][b]=true;
        cnt++;
        dfs(a,b);
    }
}
int main()
{

    cin>>w>>h;
    for(int i=1;i<=h;i++)
    {
        for(int j=1;j<=w;j++)
        {
            cin>>geze[i][j];
            if(geze[i][j]=='@')
            {
                start_x=i;
                start_y=j;
            }
        }
    }
    st[start_x][start_y]=true;
    dfs(start_x,start_y);
    cout<<cnt<<endl;
 /* for(int i=1;i<=h;i++)
    {
        for(int j=1;j<=w;j++)
        {
            cout<<geze[i][j];
        }
        cout<<endl;
    }*/
    return 0;
}