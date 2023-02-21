#include <bits/stdc++.h>
using namespace std;
int Reverse(int n)
{
    int reverse=0,remain;
    while(n)
    {
        remain=n%10;
        n=n/10;
        reverse=reverse*10+remain;
    }
    return reverse;
}
int main()
{
    cout<<Reverse(16356);
}