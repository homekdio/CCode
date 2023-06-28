#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s[3]={"ChuiZi","JianDao","Bu"};
    string stt="ss";
    int n;cin>>n;
    int st[n];
    for(int i=0;i<n;i++)
        cin>>st[i];
    getchar();
    int i=0,cnt=0;
    while(cin>>stt&&stt!="End")
    {
        if(i==st[cnt%n])
        {   
            if(stt==s[0])
            cout<<s[1]<<endl;
        else if(stt==s[1])
            cout<<s[2]<<endl;
        else if(stt==s[2])
            cout<<s[0]<<endl;
            cnt++;
            i=0;
        }
        else
        {
                    if(stt==s[0])
                cout<<s[2]<<endl;
            else if(stt==s[1])
                cout<<s[0]<<endl;
            else if(stt==s[2])
                cout<<s[1]<<endl;
        i++;
        }
    }
    return 0;
}