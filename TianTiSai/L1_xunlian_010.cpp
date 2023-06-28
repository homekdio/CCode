#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        getchar();
        int lowercase=0,capital=0,space=0, sign=0;
        for(int i=0;i<n;i++)
        {
            string s;
            getline(cin,s);
            for(int i=0;i<s.length();i++)
            {
                if(s[i]>='A'&&s[i]<='Z')
                    capital++;
                else if(s[i]>='a'&&s[i]<='z')
                    lowercase++;
                else if(s[i]==' ')
                    space++;
                else sign++;
            }
        }
        printf("lowercase=%d capital=%d space=%d sign=%d\n",lowercase,capital,space,sign);
    }
    return 0;
}