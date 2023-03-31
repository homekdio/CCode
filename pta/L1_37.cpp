#include <bits/stdc++.h>
using namespace std;
const int N = 40;
int main()
{

    char c;
    int n;
    while (cin >> c >> n)
    {
        char arr[N][N];
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                arr[i][j] = ' ';
            }
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                arr[i][n + j - 1] = c;
                arr[i][n - j + 1] = c;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= 2 * n - 1; j++)
            {
                cout << arr[i][j];
            }
            cout << endl;
        }
        for (int i = n; i >= 1; i--)
        {
            for (int j = 2 * n - 1; j >= 1; j--)
            {
                cout << arr[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}