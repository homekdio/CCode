class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(),n=matrix[0].size();
        int l=0,r=m*n-1;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(target<matrix[mid/n][mid%n]) r=mid-1;
            else if(target>matrix[mid/n][mid%n]) l=mid+1;
            else return true; 
        }
        return false;
    }
};