#include <bits/stdc++.h>
using namespace std;
//x1,y1,x2,y2
//c1=x1+(y1)i, c2=x2+(y2)i，
//c1+c2 = (x1+x2) + (y1+y2)i
//c1*c2 = (x1*x2-y1*y2) + (x1*y2+x2*y1)i

int main()
{
    double x1,y1,x2,y2;
    double c1addc2_1,c1addc2_2,c1mulc2_1,c1mulc2_2;
    cin>>x1>>y1>>x2>>y2;
    c1addc2_1=x1+x2;
    c1addc2_2=y1+y2;
    c1mulc2_1=x1*x2-y1*y2;
    c1mulc2_2=x1*y2+x2*y1;
    printf("addition of complex is %f+%fi",c1addc2_1,c1addc2_2);
    cout<<endl;
    printf("product of complex is %f+%fi",c1mulc2_1,c1mulc2_2);
    return 0;
}