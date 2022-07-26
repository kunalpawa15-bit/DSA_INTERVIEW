class Solution {
public:
    int change(int amount, vector<int>& coins) {
        
        int n = coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        return f(n-1,amount,coins,dp);
    }
    
    int f(int i,int amount,vector<int>&nums,vector<vector<int>>&dp)
    {
          
        if(i==0){
            return (amount%nums[0]==0);}
        if(dp[i][amount]!=-1)return dp[i][amount];
        
        int nottake = f(i-1,amount,nums,dp);
        int take = 0;
        if(amount>=nums[i])
        {
            take =  f(i,amount-nums[i],nums,dp);
        }
        
        return dp[i][amount] = nottake + take;
    }
};