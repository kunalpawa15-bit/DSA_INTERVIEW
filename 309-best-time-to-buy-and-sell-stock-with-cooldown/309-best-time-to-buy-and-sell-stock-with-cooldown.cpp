class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>>dp(n,vector<int>(2,-1));
        return f(0,1,prices,n,dp);
    }
    
    int f(int i,int buy,vector<int>&nums,int n,vector<vector<int>>&dp)
    {
        if(i>=n)return 0;
        int profit = 0;
        if(dp[i][buy]!=-1)return dp[i][buy];
        if(buy)
        {
            profit = max((-nums[i] + f(i+1,0,nums,n,dp)),(0 + f(i+1,1,nums,n,dp)));
        }
        else
        {
            profit = max((nums[i] + f(i+2,1,nums,n,dp)),(0 + f(i+1,0,nums,n,dp)));
        }
        return dp[i][buy] = profit;
    }
};