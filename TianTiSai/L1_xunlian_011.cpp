#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int x=1;
        for(int i=0;i<n-1;i++)
            x=2*(x+1);
        cout<<x<<endl;
    }
    return 0;
}