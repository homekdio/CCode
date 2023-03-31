#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,xt;
    while(cin>>x)
    {
        vector<int> arr;
        int i=0;
        while(x)
        {
            arr.push_back(x%10);
            x/=10;
            i++;
        }
        reverse(arr.begin(), arr.end());
        cout<<i<<" ";
        for(int j=0;j<arr.size();j++)
        {
            cout<<arr[j]<<" ";
        }
        reverse(arr.begin(), arr.end());
        for(int j=0;j<arr.size();j++)
        {
            cout<<arr[j];
        }
        cout<<endl;
        
    }
    return 0;
}