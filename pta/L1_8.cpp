#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
       char t;string d;
       cin>>t;
       getchar();
       getline(cin,d);
       //reverse(d.begin(),d.end());
       int index=d.rfind(t);
       if(index!=-1) cout<<"index = "<<index<<endl;
       else cout<<"Not Found";
    }
    return 0;
}