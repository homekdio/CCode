class Solution {
void quick_sort(vector<int>& num,int l,int r)
{
    if(l>=r) return;
    int x=num[l],i=l-1,j=r+1;
    while(i<j)
    {
        do i++; while(num[i]<x);
        do j--; while(num[j]>x);
        if(i<j) swap(num[i],num[j]);
    }
    quick_sort(num,l,j);
    quick_sort(num,j+1,r);
}
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        quick_sort(nums,0,n-1);
        return nums[n/2];
    }
};