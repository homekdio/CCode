#include <bits/stdc++.h>
using namespace std;
bool cmp(string s1,string s2)
{
        return s1.size()<s2.size();
}
int main()
{
    vector<string> s;
    while(1)
    {
        string t;
        cin>>t;
        if(t=="#") break;
        s.push_back(t);
    }
    stable_sort(s.begin(),s.end(),cmp);
    for(auto i:s)
    {
        cout<<i<<" ";
    }
    return 0;
}