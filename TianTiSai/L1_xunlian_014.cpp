#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    //if(s[0]=='-')
    printf("%d",s[0]=='-'?s.length()-1:s.length());
    return 0;
}