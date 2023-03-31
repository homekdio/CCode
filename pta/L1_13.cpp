#include <bits/stdc++.h>
using namespace std;
int main()
{
    int v,h,i=0;
    cin>>v>>h;

        int n=v/h;
        if(v%h!=0)
            n++;
    cout<<n;
    return 0;
}