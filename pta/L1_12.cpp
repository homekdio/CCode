#include <bits/stdc++.h>
using namespace std;
const int N =10010;
int main()
{
    char a;
    int arr[N];
    string s;
    getline(cin,s);
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        arr[s[i]]++;
    }
    printf("a(%d)b(%d)c(%d)d(%d)e(%d)",arr['a'],arr['b'],arr['c'],arr['d'],arr['e']);
    return 0;
}