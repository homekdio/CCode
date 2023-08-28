class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int l=0,r=n-1,minl=1e9;
        while(l<=r)
        {
            int mid = (l+r)/2;
            if(nums[l]<=nums[mid])
            {
                minl=min(minl,nums[l]);
                l=mid+1;
            }
            else
            {
                minl=min(minl,nums[mid]);
                r=mid-1;
            }
        }
        return minl;
    }
};