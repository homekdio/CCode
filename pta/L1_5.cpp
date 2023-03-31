#include <bits/stdc++.h>
using namespace std;
typedef struct
{
    string name;
    double price;
}book;
bool cmp(book a,book b)
{
    return a.price>b.price;
}
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
    sort(b,b+n,cmp);
    cout<<"highest price: "<<fixed<<setprecision(1)<<b[0].price<<", "<<b[0].name;
    return 0;
}