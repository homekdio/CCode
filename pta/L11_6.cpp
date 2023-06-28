#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<int> arr;
    for(int i=0,t;i<n;i++)
    {
        cin>>t;
        arr.push_back(t);
    }
    int t=*min_element(arr.begin(),arr.end());
    printf("min = %d",t);
    return 0;
}



class Solution {
public:
    bool check(TreeNode *p, TreeNode *q) {
        if (!p && !q) return true;
        if (!p || !q) return false;
        return p->val == q->val && check(p->left, q->right) && check(p->right, q->left);
    }

    bool isSymmetric(TreeNode* root) {
        return check(root, root);
    }
};

作者：LeetCode-Solution
链接：https://leetcode.cn/problems/symmetric-tree/solution/dui-cheng-er-cha-shu-by-leetcode-solution/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。