#include <bits/stdc++.h>
using namespace std;
int count(int n,int arr[])
{
    int x=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                x++;
            }
        }
    }
    return x;
}
int main()
{
    int n;cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++)
    {
        int j;cin>>j;
        for(int k=0;k<j;k++)
        {
            cin>>arr[k];
        }
        cout<<count(j,arr)<<endl;
    }
    return 0;
}