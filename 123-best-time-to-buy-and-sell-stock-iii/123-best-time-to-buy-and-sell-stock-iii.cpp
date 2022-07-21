class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n = nums.size();
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(2,vector<int>(3,-1)));
        return f(0,1,nums,2,dp);
    }
    
    int f(int i,int buy,vector<int>&nums,int cap,vector<vector<vector<int>>>&dp)
    {
        int n = nums.size();
        if(cap==0)return 0;
        if(i==n)return 0;
        int profit = 0;
        if(dp[i][buy][cap]!=-1)return dp[i][buy][cap];
        
        if(buy)
        {
            profit = max((-nums[i] + f(i+1,0,nums,cap,dp)) , (0+f(i+1,1,nums,cap,dp)));
        }
        else
        {
            profit = max((nums[i] + f(i+1,1,nums,cap-1,dp)) , (0,f(i+1,0,nums,cap,dp)));
        }
        
        return dp[i][buy][cap] = profit;
    }
};