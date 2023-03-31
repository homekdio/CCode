#include <bits/stdc++.h>
using namespace std;
typedef struct
{
    int n=0;
    char c;
    int size;
} id;
const int N =100;
bool cmp(id a,id b)
{
    return a.size>b.size;
}
int main()
{
    vector <id> num;
    string s;
    char arr[N]={0};
    getline(cin,s);
    int lenth=s.length();
    for(int i=0;i<lenth;i++)
    {
        if(arr[s[i]]!=0&&s[i]!=' ')
        {
            num.push_back(num.c=s[i])
            num.size=s[i];
            num.n++;
        }
        else if(arr[s[i]]==0&&s[i]!=' ')
        {
            arr[s[i]]=1;
            num.c.push_back(s[i])
            num.size=s[i];
            num.n++;
        }
    }
    int lenth1=num.size();
    sort(num,num+lenth1,cmp);
    for(int i=0;i<lenth1;i++)
    {
        cout<<num.c<<"--"<<num.n;<<" ";
    }
    return 0;
}