#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count[10];
    for(int i=0;i<10;i++)
        cin>>count[i];
    for(int i=1;i<10;i++)
    {
        if(count[i]>0)
        {
            cout<<i;
            count[i]--;
            break;
        }
    }
    for(int i=0;i<10;i++)
    {
        for(int j=count[i];j>0;j--)
            cout<<i;
    }
    return 0;
}