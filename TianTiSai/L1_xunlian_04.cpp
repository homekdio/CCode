#include <bits/stdc++.h>
using namespace std;
double cylinder (double r, double h )
{
    double t=3.14159*r*r*h;
    return t;
}
int main()
{
    double r,h;
    cin>>r>>h;
    double t=cylinder(r,h);
    printf("Volume = %.3f",t);
    return 0;
}