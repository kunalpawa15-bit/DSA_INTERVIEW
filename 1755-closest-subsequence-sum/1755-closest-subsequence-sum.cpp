class Solution {
public:
    int minAbsDifference(vector<int>& nums, int goal) {
        
        int n = nums.size();
        vector<int>nums1;
        vector<int>nums2;
        
        for(int i=0;i<n;i++)
        {
            if(i<n/2)
            {
                nums1.push_back(nums[i]);
            }
            else
            {
                nums2.push_back(nums[i]);
            }
        }
        
        vector<int>sum1;
        vector<int>sum2;
        
        f(0,nums1.size(),0,nums1,sum1);
        f(0,nums2.size(),0,nums2,sum2);
        
        sort(sum2.begin(),sum2.end());
        int mini = INT_MAX;
        
        for(int i=0;i<sum1.size();i++)
        {
            int l = 0;
            int h = sum2.size()-1;
            while(l<=h)
            {
                int mid = l + (h-l)/2;
                int sum = sum1[i] + sum2[mid];
                if(sum == goal)return 0;
                
                 mini = min(mini,abs(sum-goal));
                
                if(sum<goal)
                    l = mid+1;
                else
                    h = mid-1;
            }
        }
        return mini;
        
    }
    void f(int i,int n,int sum,vector<int>&nums,vector<int>&arr)
    {
        if(i==n)
        {
            arr.push_back(sum);
            return;
        }
        
        f(i+1,n,sum+nums[i],nums,arr);
        f(i+1,n,sum,nums,arr);
    }
};




