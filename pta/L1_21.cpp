#include <bits/stdc++.h>
using namespace std;
int main()
{
    char x;
    while(cin>>x)
    {
        if(x>='A'&&x<='Z')
        {
            x+=32;
            cout<<x<<endl;
        }
        else if(x>='a'&&x<='z')
        {
            x-=32;
            cout<<x<<endl;
        }
    }
    return 0;
}