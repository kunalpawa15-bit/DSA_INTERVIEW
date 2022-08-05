class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
       
        int n =nums.size();
        vector<vector<int>>dp(n+1,vector<int>(target+1,-1));
        return f(0,target,nums,dp);
    }
    
    int f(int i,int target,vector<int>&nums,vector<vector<int>>&dp)
    {
        int n = nums.size();
        if(target==0)return 1;
            if(target<0)return 0;
        if(dp[i][target]!=-1)return dp[i][target];
        
        if(i==n)return 0;
        int pick = f(0,target-nums[i],nums,dp);
        int notpick = f(i+1,target,nums,dp);
        
        return dp[i][target] = pick + notpick;
    }
};

