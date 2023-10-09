 #include <bits/stdc++.h>
 using namespace std;
 const int sizel=1e5+10;
 int school[sizel]={0};
 int main()
 {
    int n,max=0,k=0,tc=-1;cin>>n;
    for(int i=1;i<=n;i++)
    {
        int num,score;
        cin>>num>>score;
        school[num]+=score;
        if(num>max) max=num;
    }
    for(int i=1;i<=max;i++)
    {
        if(school[i]>tc)
        {
            tc=school[i];
            k=i;
        }
    }
    cout<<k<<" "<<school[k];
 }