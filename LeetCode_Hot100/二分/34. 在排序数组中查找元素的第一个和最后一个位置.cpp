class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int lr=leftrange(nums,target);
        int rr=rightrange(nums,target);
        return vector<int> {lr,rr};
    }
private:
    int leftrange(vector<int>& nums, int target)
    {
        int range=-1;
        int l=0,r=nums.size()-1;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(target<nums[mid]) r=mid-1;
            else if(target>nums[mid]) l=mid+1;
            else
            {
                r=mid-1;
                range=mid;
            }
        }
        return range;
    }
    int rightrange(vector<int>& nums, int target)
    {
        int range=-1;
        int l=0,r=nums.size()-1;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(target<nums[mid]) r=mid-1;
            else if(target>nums[mid]) l=mid+1;
            else
            {
                l=mid+1;
                range=mid;
            }
        }
        return range;
    }    
};