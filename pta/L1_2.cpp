#include <bits/stdc++.h>
using namespace std;
const int N=1000; 

typedef struct{
 string name;
 double price;
}b;

int main()
{
    b book[11];
    int maxi,mini;
    double max=0,min=30000;
    int n;scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        getchar();
        getline(cin,book[i].name);
        cin>>book[i].price;
        if(book[i].price>max)
        {
            max=book[i].price;
            maxi=i;
        }
        if (book[i].price<min)
        {
            min=book[i].price;
            mini=i;
        }
    }
    cout<<"highest price: "<<fixed<<setprecision(1)<<book[maxi].price<<", "<<book[maxi].name<<endl;
    cout<<"lowest price: "<<fixed<<setprecision(1)<<book[mini].price<<", "<<book[mini].name<<endl;
    return 0;
}