#include <bits/stdc++.h>
using namespace std;
struct stu
{
    string name;
    int score;
};
bool cmp(stu a,stu b)
{
    return a.score<b.score;
}
int main()
{
    stu t[11];
    int n;cin>>n;
    for(int i=0;i<n;i++) cin>>t[i].name>>t[i].score;
    sort(t,t+n,cmp);
    for(int i=0;i<n;i++) cout<<t[i].name<<" "<<t[i].score<<endl;
    return 0;
}