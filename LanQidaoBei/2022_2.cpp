#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>n;
    if(n==1)
        cout<<"1";
    else if(n==2)
        cout<<"2"<<endl<<"2";
    else
    {
        int arr[n/2+1];
        if(n%2==0)
            t=n/2-1;
        else
            t=n/2;
        arr[0]=(n-1)*2;
        for(int i=1;i<=t;i++)
            arr[i]=arr[i-1]-2;
        for(int i=0;i<=t;i++)
            cout<<arr[i]<<endl;
        if(n%2==0)
        for(int i=t;i>=0;i--)
            cout<<arr[i]<<endl;
        else
        for(int i=t-1;i>=0;i--)
            cout<<arr[i]<<endl;
    }
    return 0;
}