#include <bits/stdc++.h>
using namespace std;
bool prime(int m)
{
    if(m==1||m==4)
        return false;
    if(m==2||m==3)
        return true;
    for(int i=2;i<=sqrt(m);i++)
    {
        if(m%i==0)
            return false;
    }
    return true;
}
int cnt=0;
int main()
{
    for(int i=1;i<=100;i++)
    {
        if(prime(i))
        {
            printf("%6d",i);
            cnt++;
            if(cnt==10)
            {
                cout<<endl;
                cnt=0;
            }
        }
    }
    return 0;
}