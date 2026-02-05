class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int maxi = 0,zero = 0,l = 0;
        for(int i = 0;i<n;i++)
        {
            if(nums[i] == 0)zero++;
            while(zero > k)
            {
                if(nums[l] == 0)zero--;
                l++;
            }
            maxi = max(maxi , i-l+1);
        }
        return maxi;
    }
};