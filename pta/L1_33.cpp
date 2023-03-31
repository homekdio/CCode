#include <bits/stdc++.h>
using namespace std;
const int N=21;
bool cmp(double a,double b)
{
    return a>b;
}
int main()
{
    double arr[N];
    int n;
    while(cin>>n)
    {
        for(int i=0;i<n;i++)    cin>>arr[i];
        sort(arr,arr+n,cmp);
        for(int i=0;i<n;i++)   
        { 
            cout<<fixed<<setprecision(2)<<arr[i];
            if(i!=n-1) cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}