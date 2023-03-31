#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        s[i]=s[i]+32;
    }
    cout<<s;
    return 0;
}