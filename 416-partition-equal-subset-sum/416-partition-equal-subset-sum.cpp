class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            sum = sum + nums[i];
        }
        if(sum%2 != 0)return false;
        int target = sum/2;
        vector<vector<int>>dp(n,vector<int>(target+1,-1));
        
        if(f(n-1,target,nums,dp))return true;
        
        return false;
        
    }
    
private:
    
    bool f(int ind,int target,vector<int>&nums,vector<vector<int>>&dp)
    {
        if(target==0)return true;
        if(ind==0)return (nums[0]==target);
        
        if(dp[ind][target]!=-1)return dp[ind][target];
        
        bool non = f(ind-1,target,nums,dp);
        bool pick = false;
        
        if(target>=nums[ind])pick  = f(ind-1,target-nums[ind],nums,dp);
        
        return dp[ind][target]  = pick|non;
        
        
    }
};