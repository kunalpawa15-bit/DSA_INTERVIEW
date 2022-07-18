class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
    int ans =  f(n-1,amount,coins,dp);
        if(ans>=1e9)return -1;
        return ans;
    }
    int f(int ind,int target,vector<int>&nums,vector<vector<int>>&dp)
    {
        if(ind==0){
            if(target%nums[ind]==0)return target/nums[ind];
            return 1e9;
        }
        if(dp[ind][target]!=-1)return dp[ind][target];
        int nottake = f(ind-1,target,nums,dp);
        int take = INT_MAX;
        if(nums[ind]<=target)
        {
            take = 1 + f(ind,target-nums[ind],nums,dp);
        }
        
        return dp[ind][target] = min(take,nottake);
    }
};