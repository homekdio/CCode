#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,f,m,add;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d:%d:%d",&s,&f,&m);
        scanf("%d",&add);
        m=m+add;
        f=f+m/60;
        s=s+f/60;
        s=s%24;f=f%60;m=m%60;
        printf("time: %d:%d:%d\n",s,f,m);
    }

    return 0;
}