#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector <int> arr; 
    for(int i=0,t;i<n;i++)
    {
        cin>>t;
        arr.push_back(t);
    }
    m=m%n;
    for(int i=n-m;i<n;i++)
        cout<<arr[i]<<" ";
    for(int i=0;i<n-m;i++)
        cout<<arr[i]<<" \n"[i==n-m-1];
    return 0;
}