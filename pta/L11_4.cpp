#include <bits/stdc++.h>
using namespace std;
int main()
{
    bool flag=true;
    int tx=0;
    string s;
    getline(cin,s);
    int size=s.length();
    vector <string> st;
    string t,count;int change=0;
    if(s[0]=='-')
    tx=1;
    for(int i=size-1;i>=tx;i--)
    {
        change=((s[i]-'0')*2+change);
        t=change%10+'0';
        st.push_back(t);
        change=change/10;
        if(s.find(t)==-1)
        {
            flag=false;
            break;
        }
    }
    if(tx==1)
        size-=1;
    if(st.size()!=size)
        flag=false;
    if(flag)
    {
        cout<<"Yes"<<endl;
        reverse(st.begin(),st.end());
        if(tx==1)
            cout<<"-";
        for(auto it:st)
            cout<<it;
    }
    else cout<<"No";
    return 0;
}