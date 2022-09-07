class Solution {
public:
    int getMaximumGold(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans = 0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]!=0)
                ans = max(ans,f(i,j,grid));
            }
        }
        return ans;
    }
    
    int f(int i,int j,vector<vector<int>>&grid)
    {
        int ans=0;
        int temp = 0;
        int n = grid.size();
        int m = grid[0].size();
        
        if(i<0 || j<0 || i>=n || j>=m || grid[i][j]==0) 
        {
            return 0;
        }
        temp = grid[i][j];
        grid[i][j] = 0;
        

            ans = max(ans,f(i,j-1,grid)); 
            ans = max(ans,f(i,j+1,grid));
            ans = max(ans,f(i+1,j,grid));
            ans = max(ans,f(i-1,j,grid));
        grid[i][j] = temp;
        return ans+temp;
    }
};

