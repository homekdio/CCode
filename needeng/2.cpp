#include <bits/stdc++.h>

using namespace std;

const int N = 1e3;
int rent[N][N];
int index[N][N];
void boatCost(int n)
{
    int r; //规模

    for (int r = 2; r <= n; r++)
    {
        for (int i = 1; i <= n - r + 1; i++) //确定范围
        {
            int j = i + r - 1; //尾部
           
            for (int k = i; k < j; k++)
            {
                int v = rent[i][k] + rent[k][j];
                if (v < rent[i][j])
                {
                    rent[i][j] = v;
                    index[i][j] = k;
                }
            }
        }
    }
}


int main()
{

    int n;
    ios::sync_with_stdio(false);
    cin >> n;
   
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            if (j>i)
            {
                cout << i << "与" << j << "之间船费" << endl;
                int x;
                cin >> x;
                rent[i][j] = x;
            }
        }
    boatCost(n);
    cout<<rent[1][n];
    return 0;
}