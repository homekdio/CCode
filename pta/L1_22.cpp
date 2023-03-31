#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        if(x%2!=0) cout<<"0 0"<<endl;
        else if(x%4!=0) cout<<x/4+1<<" "<<x/2<<endl;
        else cout<<x/4<<" "<<x/2<<endl;
    }
    return 0;
}