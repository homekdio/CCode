#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<double> a;
    int n;double j=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        double x;
        cin>>x;
        a.push_back(x);
        if(a[i]>=60)  j++;
    }
    cout<<fixed<<setprecision(2)<<j/n;
    return 0;
}