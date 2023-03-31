#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,st;
    getline(cin,s);
    //getchar();
    getline(cin,st);
    for(int i=0;i<s.size();i++)
    {
        if(st.find(s[i])!=-1)
           continue;
        else
            cout<<s[i];
    }
    return 0;
}