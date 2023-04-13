#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        string s1="6";
        s1=s1+s.substr(6,5);
        cout<<s1<<endl;
    }
    return 0;
}