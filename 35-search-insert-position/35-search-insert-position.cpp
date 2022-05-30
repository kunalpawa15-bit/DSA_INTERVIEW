class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int n = nums.size();
        int mid,l = 0 , h = n-1;
        while(l<=h)
        {
            mid = l+ (h-l)/2;
            if(target==nums[mid])
            {
               
                return mid;
            }
            if(target < nums[mid])
            {
                h = mid -1;
            }
            else
            {
                l = mid+1;
            }
        } 
        
        return l;
        
    }
};