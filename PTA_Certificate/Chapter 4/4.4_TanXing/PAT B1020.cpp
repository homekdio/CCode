#include <bits/stdc++.h>
using namespace std;
struct mooncake
{
    double total;
    double sell;
    double price;
}cake[1010];
bool cmp(mooncake a,mooncake b){
    return a.price>b.price;
}   
int main()
{
    int n,d;
    cin>>n>>d;
    for(int i=0;i<n;i++)
        cin>>cake[i].total;
    for(int i=0;i<n;i++)
    {
        cin>>cake[i].sell;
        cake[i].price=cake[i].sell/cake[i].total;
    }
    sort(cake,cake+n,cmp);
    double ans=0;
    for(int i=0;i<n;i++)
    {
        if(d>=cake[i].total)
        {
            d-=cake[i].total;
            ans+=cake[i].sell;
        }
        else
        {
            ans+=cake[i].price*d;
            break;
        } 
    }
    printf("%.2f",ans);
    return 0;
}