#include <bits/stdc++.h>
using namespace std;
int n;
int arr[5];
int res=0;
int num[10010]={6,2,5,5,4,5,6,3,7,6};
/*int cal(int x)
{
    if(num[x]>0) return num[x];
    else
    {
        int sumFire=0;
        while(x)
        {
            sumFire+=num[x%10];
            x/=10;
        }
        return sumFire;
    }
}*/
void dfs(int x,int sum)
{
    if(sum>n) return ;
    if(x>3)
    {
        if(arr[1]+arr[2]==arr[3]&&sum==n)
        {
            res++;
        }
        return ;
    }
    for(int i=0;i<=1000;i++)
    {
        arr[x]=i;
        dfs(x+1,sum+num[i]);
        arr[x]=0;
    }
}
int main()
{
    cin>>n;
    n-=4;
    for(int i=10;i<=1000;i++)
        num[i]=num[i%10]+num[i/10];
    dfs(1,0);
    cout<<res;
    return 0;
}