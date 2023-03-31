#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;cin>>n>>m;
    int cnt=-1,flag=1;
    getchar();
    while(n--)
    {
        string s;
        getline(cin,s);
        if(s.find("qiandao")!=-1||s.find("easy")!=-1)
        continue;
        cnt++;
        if(cnt==m)
        {
            cout<<s;
            flag=0;
            break;
        }
    }
    if(flag==1)
    cout<<"Wo AK le";
    return 0;
}