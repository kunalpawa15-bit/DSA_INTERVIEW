class Solution {
public:
    int minSteps(int n) {
        if(n==1)return 0;
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return 1 + f(1,1,n,dp);
    }
    int f(int c,int v,int n,vector<vector<int>>&dp)
    {
        if(c==n)return 0;
        if(c>n)return 1e9;
        
        if(dp[c][v]!=-1)return dp[c][v];
        return dp[c][v] = min(1+f(c+v,v,n,dp),2+f(c+c,c,n,dp));
    }
};
