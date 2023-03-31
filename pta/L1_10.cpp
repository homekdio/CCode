#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int n=s.length();
    for(int i=1;i<n;i+=2)
    {
        cout<<s[i];
        //s.length(s.begin()+i);
        //s.length(i,1);
    }
    return 0;
}