class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int first = bs(nums,target);
        int last = bs2(nums,target);
        
        vector<int>v;
        v.push_back(first);
        v.push_back(last);
        return v;
        
    }
    int bs(vector<int>nums,int x)
    {
        int l=0;
        int h = nums.size()-1;
        int res=-1;
        int mid;
        while(l<=h)
        {
            mid = l + (h-l)/2;
            if(nums[mid]==x)
            {
                res = mid;
                h = mid-1;
            }
            else if(nums[mid]>x)
            {
                h = mid-1;
            }
            else
            {
                l = mid+1;
            }
        }
        
        return res;
        
    }
     int bs2(vector<int>nums,int x)
    {
        int l=0;
        int h = nums.size()-1;
        int res=-1;
         int mid;
        while(l<=h)
        {
            mid = l + (h-l)/2;
            if(nums[mid]==x)
            {
                res = mid;
                l = mid+1;
            }
            else if(nums[mid]>x)
            {
                h = mid-1;
            }
            else
            {
                l = mid+1;
            }
        }
        
        return res;     
    }
};