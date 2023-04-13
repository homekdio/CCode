#include <bits/stdc++.h>
using namespace std;
typedef struct 
{
    string id,name;
    int a,b,c;
    double ave;
}student;
bool cmp(student a,student b)
{
    if(a.ave>b.ave)
        return true;
    else if(a.ave==b.ave)
        return false;
    else return false;
}
int main()
{
    int n;cin>>n;
    student stu[n];
    for(int i=0;i<n;i++)
    {
        cin>>stu[i].id>>stu[i].name;
        cin>>stu[i].a>>stu[i].b>>stu[i].c;
        stu[i].ave=(stu[i].a+stu[i].b+stu[i].c)/3.0;
    }
    sort(stu,stu+n,cmp);
    for(int i=0;i<n;i++)
       { cout<<stu[i].id<<","<<stu[i].name<<",";
        printf("%.2f\n",stu[i].ave);}
    return 0;
}