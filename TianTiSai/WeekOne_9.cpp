#include <bits/stdc++.h>
using namespace std;
int n,m,k;
bool solve()
{
    stack<int> st;
    int cnt=1,arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        if(arr[i]==cnt) cnt++;
        else
            st.push(arr[i]);
        if(st.size()>m)
        return false;
        while(!st.empty()&&st.top()==cnt)
        {
            st.pop();
            cnt++;
        }
    }
    return st.empty();
}
int main()
{
    cin>>n>>m>>k;
    while(k--)
        puts(solve()?"YES":"NO");
    return 0;
}