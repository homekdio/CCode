#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n0 ,n1 , n2 , n3 , n4 , n5 , n6 , n7 , n8 , n9;
    n0 = n1 = n2 = n3 = n4 = n5 = n6 = n7 = n8 = n9 = 0;
    while (cin>>s)
    {
        int len=s.length();
        for(int i=0;i<len;i++)
        {
            switch (s[i])
            {
                case '1':
                    n1++;
                    break;
                case '2':
                    n2++;
                    break;
                case '3':
                    n3++;
                    break;
                case '4':
                    n4++;
                    break;
                case '5':
                    n5++;
                    break;
                case '6':
                    n6++;
                    break;
                case '7':
                    n7++;
                    break;
                case '8':
                    n8++;
                    break;
                case '9':
                    n9++;
                    break;
                case '0':
                    n0++;
                    break;
            }
        }
        cout << "0:" << n0 << endl;
        cout << "1:" << n1 << endl;
        cout << "2:" << n2 << endl;
        cout << "3:" << n3 << endl;
        cout << "4:" << n4 << endl;
        cout << "5:" << n5 << endl;
        cout << "6:" << n6 << endl;
        cout << "7:" << n7 << endl;
        cout << "8:" << n8 << endl;
        cout << "9:" << n9 << endl;
        n0 = n1 = n2 = n3 = n4 = n5 = n6 = n7 = n8 = n9 = 0;
    }
    return 0;

}

