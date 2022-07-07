class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int m = triangle.size();
        
        
        vector<vector<int>>dp(m,vector<int>(m,-1));
        
        
        return f(0,0,triangle,dp);
    }
    
private:
    
    int f(int i,int j,vector<vector<int>> &triangle,vector<vector<int>>&dp)
    {
        int n = triangle.size();
        if(i==n-1)return triangle[i][j];
        
        if(dp[i][j]!=-1)return dp[i][j];
        int down = triangle[i][j] + f(i+1,j,triangle,dp);
        int diag = triangle[i][j] + f(i+1,j+1,triangle,dp);
        
        return dp[i][j] = min(down,diag);
    }
};