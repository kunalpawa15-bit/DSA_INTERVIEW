class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        cost.push_back(0);
        int n = cost.size();
        vector<int>dp(n+1,-1);
        
        return f(cost,cost.size()-1,dp);
    }
    
    int f(vector<int>&cost,int i,vector<int>&dp)
    {
        if(i==0 || i==1)return cost[i];
        if(dp[i]!=-1)return dp[i];
        return dp[i] = min(f(cost,i-1,dp),f(cost,i-2,dp)) + cost[i];
    }
};