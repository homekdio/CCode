#include <bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
    if(n==1||n==4) return false;
    if(n==2||n==3) return true;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
int main()
{
    vector<int> primearr;
    int n;cin>>n;
    for(int i=1;i<=n;i++)
        if(isprime(i)) 
        primearr.push_back(i);
    int cnt=0;
    /*for(auto t:primearr)
    {
        cout<<t<<" ";
    }*/
    //cout<<endl;
    for(int i=1;i<=primearr.size();i++)
        if (primearr[i]-primearr[i-1]==2)
        {
            cnt++;
           cout<<primearr[i]<<" "<<primearr[i-1]<<endl;
            }
    cout<<cnt;
    return 0;
}