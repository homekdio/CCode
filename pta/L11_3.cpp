#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;cin>>m>>n;
    vector<int> arr;
    int t;
    for(int i=0;i<m;i++)
    {
        cin>>t;
        arr.push_back(t);
    }
    if(n%m==0)
    {
        for(int i=0;i<m;i++)
        {
            cout<<arr[i];
            if(i!=m-n-1)
            cout<<" ";
        }
    }
    else
    {
        t=n%m;
        for(int i=m-t;i<m;i++)
        cout<<arr[i]<<" ";
        for(int i=0;i<m-n;i++)
        {
            cout<<arr[i];
            if(i!=m-n-1)
            cout<<" ";
        }
    }
    return 0;
}