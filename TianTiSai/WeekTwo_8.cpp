#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, q;
    cin >> n >> m >> q;
    int row[n + 10] = {0}, col[n + 10] = {0};
    while (q--)
    {
        int t, x;
        cin >> t >> x;
        if (t == 0 && row[x] == 0)
        {
            row[x] = 1;
            n--;
        }
        else if (t == 1 && col[x] == 0)
        {
            col[x] = 1;
            m--;
        }
    }
    cout << n * m;
    return 0;
}