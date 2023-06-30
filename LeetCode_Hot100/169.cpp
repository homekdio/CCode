// 这是递归排序
class Solution {
void merge_sort(vector<int>& num,int l,int r)
{
    if(l>=r) return;
    int mid=(l+r)/2;
    merge_sort(num,l,mid);
    merge_sort(num,mid+1,r);
    int k=0,i=l,j=mid+1;
    int tmp[r+10];
    while(i<=mid&&j<=r)
    {
        if(num[i]<num[j]) tmp[k++]=num[i++];
        else tmp[k++]=num[j++]; 
    }
    while(i<=mid) tmp[k++]=num[i++];
    while(j<=r) tmp[k++]=num[j++];
    for(i=l,j=0;i<=r;i++,j++) num[i]=tmp[j];
}
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        merge_sort(nums,0,n-1);
        return nums[n/2];
    }
};