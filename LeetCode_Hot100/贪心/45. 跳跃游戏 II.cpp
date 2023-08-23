class Solution {
public:
    int jump(vector<int>& nums) {
    int maxdis=0,end=0,ans=0;
    for(int i=0;i<nums.size()-1;i++)
    {
        maxdis=max(i+nums[i],maxdis);
        if(i==end)
        {
            end=maxdis;
            ans++;
        }
    }
    return ans;
    }
};
