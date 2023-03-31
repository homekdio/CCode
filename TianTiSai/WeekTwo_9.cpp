#include <bits/stdc++.h>
using namespace std;
map<int ,int> mp;
bool check()
{
    int x,y;string s;
    cin>>x>>s;
    if(s=="and")
    {
        cin>>y>>s>>s;
        return mp[x]/2==mp[y]/2;
    }
    else
    {
        cin>>s>>s;
        if (s=="root")
        return mp[x]==1;
        else if(s=="parent")
        {
            cin>>s>>y;
            return mp[x]==mp[y]/2;
        }
        else if (s=="child")
        {
            cin>>s>>y;
            return mp[x]/2==mp[y];
        }
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector <int> head;
    for(int i=0;i<n;i++)
    {
        int t;cin>>t;
        head.push_back(t);
        push_heap(head.begin(),head.end(),greater<int>());
    }
    for(int i=0;i<n;i++)
    mp[head[i]]=i+1;
    while(m--)
    puts(check()?"T":"F");
    return 0;
}