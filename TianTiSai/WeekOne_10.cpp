#include <bits/stdc++.h>
using namespace std;
struct person{
    int num;
    string id;
    int cnt;
};
person p[105];
bool cmp(const person &a,const person &b)
{
    return a.cnt!=b.cnt?a.cnt>b.cnt:a.num<b.num;
}
int main()
{
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        set<int> s;
        int x;
        cin>>p[i].id>>p[i].num;
        for(int j=0;j<p[i].num;j++)
        {
            cin>>x;
            s.insert(x);
        }
        p[i].cnt=s.size();
    }
    sort(p,p+n,cmp);
    //string ans[3]={"-"};
    vector<string> ans(3, "-");
    for(int i=0;i<min(n,3);i++)
    {
        ans[i]=p[i].id;
    }
    for(int i=0;i<3;i++)
    {
        cout<<ans[i]<<" \n"[i==2];
    }
    return 0;
}