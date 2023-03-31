#include <bits/stdc++.h>
using namespace std;
bool cmp(int a,int b)
{
    return a>b;
}
int main()
{
    int n;
    while(cin>>n)
    {
        vector<int> arr;
    for(int i=0;i<n;i++)
    {
        int t;cin>>t;
        arr.push_back(t);
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++)
    {
            cout<<arr[i];
            if(i!=n-1) cout<<" ";
            if(i==n-1) cout<<endl;
    }
    }
    return 0;
}