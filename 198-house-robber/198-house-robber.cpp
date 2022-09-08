class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        return f(nums.size()-1,nums,dp);
    }
    int f(int i,vector<int>&nums,vector<int>&dp)
    {
        if(i==0)return nums[i];
        if(i<0)return 0;
        
        if(dp[i]!=-1)return dp[i];
        
        int pick= nums[i] + f(i-2,nums,dp);
        int notpick = 0 + f(i-1,nums,dp);
        
        return dp[i] = max(pick,notpick);
    }
};