#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    long long int sum_a=0,sum_b=1; 
    for(int i=0;i<n;i++)
    {
        long long int suma,sumb;
        scanf("%lld/%lld",&suma,&sumb);
        sum_a=sum_a*sumb+sum_b*suma;
        sum_b=sum_b*sumb;
        int t=__gcd(sum_a,sum_b);
        sum_b=sum_b/t;
        sum_a=sum_a/t;
    }
   
        if(sum_a%sum_b==0)
        cout<<sum_a/sum_b;
        else if(sum_a>sum_b)
        cout<<sum_a/sum_b<<" "<<sum_a%sum_b<<"/"<<sum_b;
        else cout<<sum_a<<"/"<<sum_b;
    return 0;
}