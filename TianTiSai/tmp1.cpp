#include <bits/stdc++.h>
using namespace std;
int pre[1100];
int in[1100];
int l[1100],r[1100];
int post(int root, int start, int end) {
    if(start > end) 
        return 0;
    int s=pre[root];
    int i = start;
    while(i < end && in[i] != pre[root]) i++;
    l[s]=post(root + 1, start, i - 1);
    r[s]=post(root + 1 + i-start , i + 1, end);
    return s;
}
int print(int s)
{
    queue<int>Q;
    Q.push(s);
    while(!Q.empty())
    {
        int a=Q.front();
        Q.pop();
        if(a!=s) printf(" ");
        printf("%d",a);
        if(r[a])
           Q.push(r[a]);
        if(l[a]) 
           Q.push(l[a]);
        //反转的话只要改变一下输出顺序即可，及先右子树入队，再左子树；
    } 
    printf("\n");
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&in[i]);
    for(int i=0;i<n;i++)
        scanf("%d",&pre[i]);
    post(0,0,n-1);
    print(pre[0]);
    system("pause");
    return 0;
}