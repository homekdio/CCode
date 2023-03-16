#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        vector <int> arr;
        int x,sum=0;
        cin>>x;
        for(int i=0;i<x;i++)
        {
            int a;
            cin>>a;
            arr.push_back(a);
        }
        for(int j=0;j<x;j++)
        {
            sum=sum+arr[j];
        }
        cout<<accumulate(arr.begin(),arr.end(),0)<<endl;
    }
    return 0;
}