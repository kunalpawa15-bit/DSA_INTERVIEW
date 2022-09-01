class Solution {
public:
    int minPathCost(vector<vector<int>>& grid, vector<vector<int>>& moveCost) {
        int n = grid.size();
        int m = grid[0].size();
        int ans = INT_MAX;
        vector<vector<int>>dp(n,vector<int>(m,-1));
        for(int j=0;j<m;j++)
         ans =  min(ans,f(grid,moveCost,0,j,dp));
        
        return ans;
    }
    
    int f(vector<vector<int>>&grid,vector<vector<int>>&move,int i,int j,vector<vector<int>>&dp)
    {
        int n = grid.size();
        int m = grid[0].size();
        if(i==n-1)return grid[i][j];
        
        if(dp[i][j]!=-1)return dp[i][j];        
        int ans = INT_MAX;
        for(int k=0;k<m;k++)
        {
            ans = min(ans,grid[i][j] + move[grid[i][j]][k] + f(grid,move,i+1,k,dp));
        }
        
        return dp[i][j] = ans;
    }
};







