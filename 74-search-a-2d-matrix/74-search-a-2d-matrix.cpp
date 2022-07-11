class Solution {
public:
    bool searchMatrix(vector<vector<int>>& nums, int target) {
        
        int n= nums.size();
        int m = nums[0].size();
        int l =0;
        int h = n*m - 1;
        
        while(l<=h)
        {
            int mid = l + (h-l)/2;
            if(nums[mid/m][mid%m]==target)
                return true;
            
            if(nums[mid/m][mid%m] >target)
                h = mid-1;
            
            else
                l = mid+1;                
        }
        
        return false;
        
    }
};