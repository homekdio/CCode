#include <bits/stdc++.h>
using namespace std;
/*bool isid(int c)
//void isid(int c)
{
    c=c-58;
    //cout<<c<<" ";
    return c<0?1:0;
}*/
int main()
{
    vector<string> s; 
    int n;cin>>n;
    getchar();
    for(int i=0;i<n;i++)
    {
        string t;
        getline(cin,t);
        s.push_back(t); 
    }
    for(int i=0;i<n;i++)
    {
        int count=0;
        int j=s[i].size();
        for(int k=0;k<j;k++)
        {
            if(isdigit(s[i][k]))
            count++;
           //if(isid(s[i][k])==1) count++;
        // cout<<isid(s[i][k]);
            
        }
        //cout<<endl;
        cout<<count;
        if(i!=n-1)
            cout<<endl;
    }

    return 0;
}