class Solution {
public:
    int minInsertions(string s) {
        int n = s.length();
        string t = s;
        reverse(t.begin(),t.end());
        int m = t.length();
        
        vector<vector<int>>dp(n,vector<int>(m,-1));
        int ans = f(n-1,m-1,s,t,dp);
        
        return n-ans;
        
    }
    int f(int i,int j, string &s1,string &s2,vector<vector<int>>&dp)
    {
        if(i<0 || j<0)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        if(s1[i]==s2[j])return dp[i][j] = 1 + f(i-1,j-1,s1,s2,dp);
        else
        {
        return dp[i][j] = 0 + max(f(i-1,j,s1,s2,dp),f(i,j-1,s1,s2,dp));
        }
    }
};