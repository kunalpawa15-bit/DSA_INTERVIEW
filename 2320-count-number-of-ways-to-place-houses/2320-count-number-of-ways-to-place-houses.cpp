class Solution {
public:
    int mod=1e9+7;
    int placedHouses(int n,vector<int>&dp){
        
        if(n<=0) return 1;
        if(dp[n]!=-1)return dp[n];
        int ans=0;
        ans+=placedHouses(n-2,dp)%mod+placedHouses(n-1,dp)%mod;
        return dp[n] = ans%mod;
    }
    int countHousePlacements(int n) {
        vector<int>dp(n+1,-1);
        long long ans= placedHouses(n,dp)%mod;
        ans = (ans%mod*ans%mod)%mod;
        return ans;
    }
};