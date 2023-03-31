#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin>>s;
    int n[10]={0};
    for(int i:s)
    {
        switch(i)
        {
            case '0':n[0]++;break;
            case '1':n[1]++;break;
            case '2':n[2]++;break;
            case '3':n[3]++;break;
            case '4':n[4]++;break;
            case '5':n[5]++;break;
            case '6':n[6]++;break;
            case '7':n[7]++;break;
            case '8':n[8]++;break;
            case '9':n[9]++;break;
        }
    }
    for(int i=0;i<10;i++)
    {
        if(n[i]>0)
        cout<<i<<':'<<n[i]<<endl;
    }
    return 0;
}