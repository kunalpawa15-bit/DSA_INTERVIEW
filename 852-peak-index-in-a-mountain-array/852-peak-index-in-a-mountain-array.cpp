class Solution {
public:
    int peakIndexInMountainArray(vector<int>& nums) {
     
        int n = nums.size();
        int l=0;
        int h= n-1;
        while(l<h)
        {
            int mid = l+(h-l)/2;
            if(nums[mid+1]>nums[mid])
            {
                l = mid+1;
            }
            else
            {
                h = mid;
            }
        }
        
        return l;
    }
};