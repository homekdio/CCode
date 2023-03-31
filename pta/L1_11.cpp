#include <bits/stdc++.h>
using namespace std;
bool cmp(int a,int b)
{
    return a>b;
}
int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        int arr[3];
        arr[0]=a+b;
        arr[1]=abs(a-b);
        arr[2]=a*b;
        sort(arr,arr+3,cmp);
        for(int i=0;i<3;i++)
        {
            if(arr[i]<=100)
            {
                cout<<arr[i]<<endl;
                break;
            }
        }
    }
    return 0;
}