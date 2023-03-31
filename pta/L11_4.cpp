#include <bits/stdc++.h>
using namespace std;
int main()
{
    int flag=1;
    string s;cin>>s;
    vector <char> s1;
    unsigned long long sn=0,t=1;
    for(int i=s.length()-1;i>=0;i--)
    {
        int st = s[i]-'0';
        sn=sn+st*t;
        t=t*10;
    }
    sn=sn*2;
    int cnt=0;
    while(sn)
    {
        char st= sn%10+'0';
        s1.push_back(st);
        sn=sn/10;
    }
    reverse(s1.begin(),s1.end());
    for(int i=0;i<s1.size();i++)
    {
        if(s.find(s1[i])==-1)
        flag=0;
    }
    if(flag)
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
    for(int i=0;i<s1.size();i++)
    cout<<s1[i];
    return 0;
}