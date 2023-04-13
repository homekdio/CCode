#include <bits/stdc++.h>
using namespace std;
typedef struct
{
    string id,name;
    int a,b,c;
    int sum=0;
}student;
bool cmp(student a,student b)
{
    if(a.sum>b.sum)
        return true;
    else 
        return false;
}
int main()
{
    int n;cin>>n;
    student stu[n];
    for(int i=0;i<n;i++)
    {
        cin>>stu[i].id>>stu[i].name;
        cin>>stu[i].a>>stu[i].b>>stu[i].c;
        stu[i].sum=stu[i].a+stu[i].b+stu[i].c;
    }
    sort(stu,stu+n,cmp);
    cout<<stu[0].name<<" "<<stu[0].id<<" "<<stu[0].sum;
    return 0;
}