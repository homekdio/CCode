#include <bits/stdc++.h>
using namespace std;
struct p{
    int idd;
    int times=0;
    int in=0,out=0;
};
p person[10010]; 
bool cmp(p a,p b)
{
    if(a.in-a.out==b.in-b.out) return a.times>b.times;
    return a.in-a.out>b.in-b.out;
}
int main()
{
    int n;cin>>n;
    for(int i=1,t,id,num;i<=n;i++)
    {
        cin>>t;
        while(t--)
        {
          cin>>id>>num;
          person[id].idd=id;
          person[id].in+=num;
          person[id].times++;
          person[i].out+=num;
        }
        person[i].idd=i;   
    }
    stable_sort(person+1,person+n+1,cmp);
    for(int i=1;i<=n;i++)
    {
        double t=(person[i].in-person[i].out)/100.0;
        cout<<person[i].idd<<" ";
        printf("%.2f\n",t);
    }
    return 0;
}