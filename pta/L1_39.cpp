#include <bits/stdc++.h>
using namespace std;
typedef struct stu
{
    int id;
    int n;
};
bool cmp(stu a,stu b)
{
  return a.n<b.n;  
}
int main()
{
    vector<stu> arr; 
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;cin>>a;
        arr.push_back({i,a});
    }
    sort(arr.begin(),arr.end(),cmp);
    cout<<arr[0].n<<" "<<arr[0].id;
    return 0;
}