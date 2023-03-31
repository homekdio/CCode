#include <bits/stdc++.h>
using namespace std;
int main()
{
    double x;
    int n;
    while(cin>>x>>n)
    {
        double m=pow(1.1,n);
        cout<<fixed<<setprecision(2)<<x*m<<endl;
    }
    return 0;
}