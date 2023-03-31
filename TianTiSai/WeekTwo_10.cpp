#include <bits/stdc++.h>
using namespace std;
int const N=1e4+5;
int src,dst,maxlen;
vector<int> G[N];
int indeg[N],pre[N],dep[N];
void dfs(int u)
{
    for(int v:G[u])
    {
        dep[v]=dep[u]+1;
        pre[v]=u;
        if(maxlen<dep[v])
        {
            maxlen=dep[v];
            dst=v;
        }
        dfs(v);
    }
}
void print(int u)
{
    if(u==-1)
        return;
    print(pre[u]);
    cout<<u<<" \n"[u==dst]; 
}
int main()
{
    int n;cin>>n;
    for(int u=0,k,v;u<n;u++)
    {
        cin>>k;
        while(k--)
        {
            cin>>v;
            indeg[v]++;
            G[u].push_back(v);
        }
        sort(G[u].begin(),G[u].end());
    }
    src=find(indeg,indeg+n,0)-indeg;
    pre[src]=-1;
    dfs(src);
    cout<<maxlen+1<<endl;
    print(dst);
    return 0;
}