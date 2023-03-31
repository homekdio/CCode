#include <bits/stdc++.h>
using namespace std;
typedef struct stu
{
    string id;
    int score;
};

int main()
{
    stu t[11];
    int n;cin>>n;
    for(int i=0;i<n;i++) cin>>t[i].id>>t[i].score;
    for(int i=0;i<n;i++) cout<<t[i].id<<" "<<t[i].score<<endl;
    return 0;
}