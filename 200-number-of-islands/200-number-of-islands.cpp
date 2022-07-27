class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        
        int n = grid.size();
        int count=0;
        if(n==0)return 0;
        int m = grid[0].size();
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='1')
                {
                    dfs(grid,i,j,n,m);
                    count += 1;
                }
            }
        }
        
        return count;
    }
    
    void dfs(vector<vector<char>>&grid,int x,int y,int n,int m)
    {
        if(x<0 || y<0 || x>=n || y>=m || grid[x][y]!='1')return;
        grid[x][y] = '2';
        
        dfs(grid,x+1,y,n,m);
        dfs(grid,x,y+1,n,m);
        dfs(grid,x-1,y,n,m);
        dfs(grid,x,y-1,n,m);
    }
};