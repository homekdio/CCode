class Solution {
bool check(int a,int b)
{
    if(a<=b) return true;
    return false;
}
public:
    int search(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1;
        while(l<r)
        {
            int mid=(l+r+1)/2;
            if(check(nums[mid],target))
                l=mid;
            else 
                r=mid-1;
        }
        if(nums[l]==target)
            return l;
        else
            return -1;
    }
};