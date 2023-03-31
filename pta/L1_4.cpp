#include <bits/stdc++.h>
using namespace std;
typedef struct
{
    string name;
    double price;
}book;
bool cmp(book a,book b)
{
    return a.price<b.price;
}
int main()
{
    int n;cin>>n;
    book b[11];
    for(int i=0;i<n;i++)
    {
        getchar();
        getline(cin,b[i].name);
        cin>>b[i].price;
    }
    sort(b,b+n,cmp);
    for(int i=0;i<n;i++)
    {
        cout<<b[i].name<<" "<<fixed<<setprecision(1)<<b[i].price<<endl;
    }    
    return 0;
}