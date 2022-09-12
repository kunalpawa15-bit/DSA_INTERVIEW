class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        
        int n = tokens.size();
        int score = 0;
        sort(tokens.begin(),tokens.end());
        vector<vector<int>>dp(n,vector<int>(n,-1));
        return f(0,power,score,tokens,n-1,dp);
    }
    
    int f(int i,int power,int score,vector<int>&tokens,int j,vector<vector<int>>&dp)
    {
        int n  = tokens.size();
        if(i>j)return 0;
        int take=0;
        int nottake=0;
        
        if(dp[i][j]!=-1)return dp[i][j];
        
        if(power>=tokens[i])
        {
            take = f(i+1,power-tokens[i],score+1,tokens,j,dp) + 1;
        }
        if(score>=1)
        {
            nottake = f(i,power+tokens[j],score-1,tokens,j-1,dp) -1;
        }
        
        return dp[i][j] = max(take,nottake);
    }
};

