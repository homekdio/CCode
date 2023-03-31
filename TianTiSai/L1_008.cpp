#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A,B;
    cin>>A>>B;
    int cnt=0,sum=0;
    for(int i=A;i<=B;i++,cnt++)
    {
        if(cnt==5)
        {
            cnt=0;
            cout<<endl;
        }
        printf("%5d",i);
        sum+=i;
    }
    if (cnt!=0) cout<<endl;
    printf("Sum = %d",sum);
    return 0;
}