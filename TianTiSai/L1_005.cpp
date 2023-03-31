#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string> s1, s2, s3;
    for (int i = 0; i < n; i++)
    {
        string t1, t2, t3;
        cin >> t1 >> t2 >> t3;
        s1.push_back(t1);
        s2.push_back(t2);
        s3.push_back(t3);
    }
    cin >> n;
    string a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        auto t = find(s2.begin(), s2.end(), a[i]);
        //int t = find(s2.begin(), s2.end(), a[i]) - s2.begin();
        //cout << s1[t] << " " << s3[t]<<endl;
    }
    return 0;
}