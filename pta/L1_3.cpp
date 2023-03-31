#include <bits/stdc++.h>
using namespace std;
typedef struct
{
    string name;
    double price;
}book;
int main()
{
    book b[11];
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        getchar();
        getline(cin,b[i].name);
        cin>>b[i].price;
    }
    for(int i=0;i<n;i++)
    {
        cout<<b[i].name<<" "<<fixed<<setprecision(1)<<b[i].price<<endl;
    }
    return 0;
}