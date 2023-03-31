#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[61];
    for(int i=1;i<61;i++)
    {
        if(i<3) arr[i]=1;
        else arr[i]=(arr[i-1]+arr[i-2])%10;
    }
    int n;cin>>n;
    cout<<arr[n%60];
    return 0;
}