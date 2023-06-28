#include <bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int> G[N];
char sex[N];
bool st[N];
int flag;
void dfs(int v,int num)
{
    if(num>=5)
        return ;
    for(int u:G[v])
    {
        if(!st[u])
        {
            st[u]=true;
            dfs(u,num+1);
        }
        else
        flag=1;
    }
}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int id,fa,ma;
        cin>>id;
        getchar();
        sex[id]=getchar();
        cin>>fa>>ma;
        if(fa!=-1)
            {
                G[id].push_back(fa);
                sex[fa]='M';
            }
        if(ma!=-1)
            {
                G[id].push_back(ma);
                sex[ma]='F';    
            }
    }
    cin>>n;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        if(sex[a]==sex[b]) cout<<"Never Mind"<<endl;
        else
        {
            memset(st,0,sizeof(st));
            st[a]=true;
            st[b]=true;
            flag=0;
            dfs(a,1);
            dfs(b,1);
            puts(flag?"No":"Yes");
        }
    }
    return 0;
}